#--------------------------------------------------------------
# OS-specific settings

IF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  SET (CH_LINKERFLAG_EXE  "${CH_LINKERFLAG_EXE} -framework IOKit -framework Cocoa -framework OpenGL")
ENDIF()

#--------------------------------------------------------------

MESSAGE(STATUS "Demo programs for VEHICLE module...")

ADD_SUBDIRECTORY(demo_HMMWV9)
ADD_SUBDIRECTORY(demo_HMMWV)
ADD_SUBDIRECTORY(demo_HMMWV_DeformableSoil)
ADD_SUBDIRECTORY(demo_WheeledGeneric)
ADD_SUBDIRECTORY(demo_WheeledJSON)
ADD_SUBDIRECTORY(demo_SuspensionTest)
ADD_SUBDIRECTORY(demo_ArticulatedVehicle)
ADD_SUBDIRECTORY(demo_WheeledAssembly)
ADD_SUBDIRECTORY(demo_SteeringController)

ADD_SUBDIRECTORY(demo_DeformableSoil)
ADD_SUBDIRECTORY(demo_DeformableSoilAndTire)

ADD_SUBDIRECTORY(demo_M113)
ADD_SUBDIRECTORY(demo_M113_DeformableSoil)
ADD_SUBDIRECTORY(demo_M113_Parallel)
ADD_SUBDIRECTORY(demo_TrackedJSON)
ADD_SUBDIRECTORY(demo_TrackTestRig)
