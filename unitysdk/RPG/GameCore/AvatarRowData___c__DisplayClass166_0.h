#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOFFCBGKLDD;
namespace RPG::GameCore { class ICharacterSkillRowData; }

#define RPG_GAMECORE_AVATARROWDATA___C__DISPLAYCLASS166_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF031340)
#define RPG_GAMECORE_AVATARROWDATA___C__DISPLAYCLASS166_0___SETUPSKILLLIST_B__0_OFFSET UNITYSDK_OFFSET(0xF031460)
#define RPG_GAMECORE_AVATARROWDATA___C__DISPLAYCLASS166_0___SETUPSKILLLIST_B__1_OFFSET UNITYSDK_OFFSET(0xF0315A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRowData___c__DisplayClass166_0_TypeDefinitionIndex = 58156;

	class AvatarRowData___c__DisplayClass166_0 : public ::System::Object
	{
	public:
		::FOFFCBGKLDD* skillParamModifyCfg; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA___C__DISPLAYCLASS166_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SetupSkillList_b__0(::RPG::GameCore::ICharacterSkillRowData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA___C__DISPLAYCLASS166_0___SETUPSKILLLIST_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __SetupSkillList_b__1(::RPG::GameCore::ICharacterSkillRowData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA___C__DISPLAYCLASS166_0___SETUPSKILLLIST_B__1_OFFSET))(this, a1);
		}

	};
}
