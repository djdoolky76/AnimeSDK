#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPDNAECJII;
namespace RPG::GameCore { class TeamTowersSkillConfig; }

#define BDPDNAECJII___C__DISPLAYCLASS73_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1701CDB0)
#define BDPDNAECJII___C__DISPLAYCLASS73_0___USEBOSSSKILL_B__0_OFFSET UNITYSDK_OFFSET(0x17024F90)

inline static constexpr unsigned int BDPDNAECJII___c__DisplayClass73_0_TypeDefinitionIndex = 38090;

	class BDPDNAECJII___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::BDPDNAECJII* __4__this; // 0x10
		::RPG::GameCore::TeamTowersSkillConfig* skillConfig; // 0x18
		::System::UInt32 skillID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___C__DISPLAYCLASS73_0_CTOR_OFFSET))(this);
		}

		::System::Void __UseBossSkill_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___C__DISPLAYCLASS73_0___USEBOSSSKILL_B__0_OFFSET))(this);
		}

	};
