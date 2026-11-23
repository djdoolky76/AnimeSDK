#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_ANYWORKITEMSFAILED_OFFSET UNITYSDK_OFFSET(0x27A7C00)
#define HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_ZEROALL_OFFSET UNITYSDK_OFFSET(0x3865BD0)
#define HOUDINIENGINEUNITY_HEU_WORKITEMTALLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_WorkItemTally_TypeDefinitionIndex = 17985;

	class HEU_WorkItemTally : public ::System::Object
	{
	public:
		::System::Int32 _totalWorkItems; // 0x10
		::System::Int32 _waitingWorkItems; // 0x14
		::System::Int32 _scheduledWorkItems; // 0x18
		::System::Int32 _cookingWorkItems; // 0x1C
		::System::Int32 _cookedWorkItems; // 0x20
		::System::Int32 _erroredWorkItems; // 0x24

		::System::Void ZeroAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_ZEROALL_OFFSET))(this);
		}

		::System::Boolean AnyWorkItemsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_ANYWORKITEMSFAILED_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_WORKITEMTALLY__CTOR_OFFSET))(this);
		}
	};
}
