#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicValueRangeCallback; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_DYNAMICVALUERANGECALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D62C9D0)
#define RPG_GAMECORE_DYNAMICVALUERANGECALLBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D62C540)

namespace RPG::GameCore
{
	class DynamicValueRangeCallback : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Min; // 0x10
		::RPG::GameCore::DynamicFloat* Max; // 0x18
		::System::Boolean MaxInclusive; // 0x20
		::System::Boolean TriggerClampedChange; // 0x21
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterRange; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitRange; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUERANGECALLBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicValueRangeCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicValueRangeCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUERANGECALLBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
