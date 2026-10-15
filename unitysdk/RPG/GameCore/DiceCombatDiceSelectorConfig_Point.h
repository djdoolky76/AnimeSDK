#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Point; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D608300)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D608360)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D609140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Point_TypeDefinitionIndex = 16139;

	class DiceCombatDiceSelectorConfig_Point : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x10
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* AtLeastCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Point* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Point*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Point* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Point*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
