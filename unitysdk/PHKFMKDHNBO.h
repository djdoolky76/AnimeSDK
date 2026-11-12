#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ElationConfig; }
namespace RPG::GameCore { class ElationSkillRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }

#define PHKFMKDHNBO_CTOR_OFFSET UNITYSDK_OFFSET(0xCB786C0)
#define PHKFMKDHNBO_GET_ELATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xCB78800)
#define PHKFMKDHNBO_GET_ELATIONSKILLROW_OFFSET UNITYSDK_OFFSET(0xCB78820)
#define PHKFMKDHNBO_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xCB78840)
#define PHKFMKDHNBO_GET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0xCB78770)
#define PHKFMKDHNBO_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0xCB78860)
#define PHKFMKDHNBO_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0xCB78790)
#define PHKFMKDHNBO_SET_ELATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xCB78810)
#define PHKFMKDHNBO_SET_ELATIONSKILLROW_OFFSET UNITYSDK_OFFSET(0xCB78830)
#define PHKFMKDHNBO_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xCB78850)
#define PHKFMKDHNBO_SET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0xCB78780)

inline static constexpr unsigned int PHKFMKDHNBO_TypeDefinitionIndex = 58894;

	class PHKFMKDHNBO : public ::System::Object
	{
	public:
		::RPG::GameCore::ElationSkillRow* _ElationSkillRow_k__BackingField; // 0x10
		::RPG::GameCore::SkillData* _SkillData_k__BackingField; // 0x18
		::RPG::GameCore::ElationConfig* _ElationConfig_k__BackingField; // 0x20
		::RPG::GameCore::SkillCharacterComponent* _Owner_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::GameCore::SkillCharacterComponent* a1, ::RPG::GameCore::ElationConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*, ::RPG::GameCore::ElationConfig*))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::SkillData* get_SkillData()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_GET_SKILLDATA_OFFSET))(this);
		}

		::System::Void set_SkillData(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_SET_SKILLDATA_OFFSET))(this, a1);
		}

		::System::Int32 PCKEJOJIOOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_PCKEJOJIOOM_OFFSET))(this);
		}

		::RPG::GameCore::ElationConfig* get_ElationConfig()
		{
			return ((::RPG::GameCore::ElationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_GET_ELATIONCONFIG_OFFSET))(this);
		}

		::System::Void set_ElationConfig(::RPG::GameCore::ElationConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationConfig*))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_SET_ELATIONCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ElationSkillRow* get_ElationSkillRow()
		{
			return ((::RPG::GameCore::ElationSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_GET_ELATIONSKILLROW_OFFSET))(this);
		}

		::System::Void set_ElationSkillRow(::RPG::GameCore::ElationSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationSkillRow*))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_SET_ELATIONSKILLROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillCharacterComponent* get_Owner()
		{
			return ((::RPG::GameCore::SkillCharacterComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::GameCore::SkillCharacterComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_SET_OWNER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LHMKCOHPLMN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKFMKDHNBO_LHMKCOHPLMN_OFFSET))(this);
		}

	};
