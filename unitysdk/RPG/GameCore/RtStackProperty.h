#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtStackProperty; }

#define RPG_GAMECORE_RTSTACKPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA650C0)
#define RPG_GAMECORE_RTSTACKPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA650D0)
#define RPG_GAMECORE_RTSTACKPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA65090)

namespace RPG::GameCore
{
	class RtStackProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RtAbilityProperty Property; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* PropertyValue; // 0x20
		::System::Boolean IsRefresh; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtStackProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtStackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtStackProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtStackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
