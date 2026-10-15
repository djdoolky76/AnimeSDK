#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Object; }

#define RPG_CUSTOMRP_CRPPIPELINEBASE_DELAYRELEASEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC05E50)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_DELAYRELEASEINFO_RESET_OFFSET UNITYSDK_OFFSET(0x1CC05DF0)

namespace RPG::CustomRP
{
	class CRPPipelineBase_DelayReleaseInfo : public ::System::Object
	{
	public:
		::UnityEngine::Object* obj; // 0x10
		::System::Int32 frame; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_DELAYRELEASEINFO_CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_DELAYRELEASEINFO_RESET_OFFSET))(this);
		}

	};
}
