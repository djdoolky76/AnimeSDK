#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_DAMAGETYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E805CC0)
#define RPG_GAMECORE_DAMAGETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E805030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTypeRow_TypeDefinitionIndex = 13193;

	class DamageTypeRow : public ::System::Object
	{
	public:
		::System::String* SPInfoEffFront; // 0x10
		::System::String* SkillTreeDecoColor; // 0x18
		::System::String* SPMazeInfoEffFront; // 0x20
		::System::String* IconNatureColor; // 0x28
		::System::String* IconNatureWhite; // 0x30
		::System::String* CriticalDamage; // 0x38
		::System::String* UnfullColor; // 0x40
		::System::String* ShaderColor; // 0x48
		::System::String* IconNatureForWeakActive; // 0x50
		::System::String* Color; // 0x58
		::System::String* SkillTreeLightColor; // 0x60
		::System::String* MazeEnterBattleWeakIconPath; // 0x68
		::System::String* IconNatureColorSimple; // 0x70
		::System::String* SPInfoEffFrontDouble; // 0x78
		::System::String* NormalDamage; // 0x80
		::System::String* Light1Color; // 0x88
		::System::String* IconNatureForWeakUnactive; // 0x90
		::System::String* SkillBtnEff; // 0x98
		::System::String* LightColor; // 0xA0
		::System::String* DamageTypeIconPath; // 0xA8
		::System::String* SkillTreePanelPath; // 0xB0
		::System::String* SkillTreeLeftPanelColor; // 0xB8
		::RPG::Client::TextID DamageTypeName; // 0xC0
		::RPG::GameCore::AttackDamageType ID; // 0xD0
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DamageTypeIntro; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
