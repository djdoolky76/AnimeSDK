#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFloorCustomFloatV2; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }

#define RPG_GAMECORE_SETFLOORCUSTOMFLOATV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB3D70)
#define RPG_GAMECORE_SETFLOORCUSTOMFLOATV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB3D80)
#define RPG_GAMECORE_SETFLOORCUSTOMFLOATV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB3D40)

namespace RPG::GameCore
{
	class SetFloorCustomFloatV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::System::Boolean UseExtraInfo; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::SetFloorCustomValueExtraInfo* ExtraInfo; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMFLOATV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFloorCustomFloatV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFloorCustomFloatV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMFLOATV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFloorCustomFloatV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFloorCustomFloatV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMFLOATV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
