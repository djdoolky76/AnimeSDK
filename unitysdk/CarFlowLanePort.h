#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CarFlowRoad;
class Lane;

#define CARFLOWLANEPORT_CTOR_OFFSET UNITYSDK_OFFSET(0xDCE3AB0)
#define CARFLOWLANEPORT_KCDJIIKNLMI_OFFSET UNITYSDK_OFFSET(0xDCE3530)

inline static constexpr unsigned int CarFlowLanePort_TypeDefinitionIndex = 47071;

	class CarFlowLanePort : public ::System::Object
	{
	public:
		::CarFlowRoad* Road; // 0x10
		::System::Int32 LaneIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWLANEPORT_CTOR_OFFSET))(this);
		}

		::Lane* KCDJIIKNLMI()
		{
			return ((::Lane*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWLANEPORT_KCDJIIKNLMI_OFFSET))(this);
		}

	};
