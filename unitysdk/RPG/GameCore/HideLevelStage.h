#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FieldHideMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideLevelStage; }

#define RPG_GAMECORE_HIDELEVELSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D768C20)
#define RPG_GAMECORE_HIDELEVELSTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D768C40)
#define RPG_GAMECORE_HIDELEVELSTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D768BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideLevelStage_TypeDefinitionIndex = 22506;

	class HideLevelStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x1C
		::System::Boolean HideFieldEffect; // 0x20
		::System::Byte _padding1[0x3];
		::RPG::GameCore::FieldHideMode FieldHideMode; // 0x24
		::System::Boolean HiendExcluded; // 0x28
		::System::Boolean DisableLoopTowerShake; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDELEVELSTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideLevelStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideLevelStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDELEVELSTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideLevelStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideLevelStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDELEVELSTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
