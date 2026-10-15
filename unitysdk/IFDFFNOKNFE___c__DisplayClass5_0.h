#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHKFMKDHNBO;
namespace RPG::GameCore { class SkillData; }

#define IFDFFNOKNFE___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15F0ACE0)
#define IFDFFNOKNFE___C__DISPLAYCLASS5_0__REMOVESKILLDATA_B__0_OFFSET UNITYSDK_OFFSET(0x15F0AF80)

	class IFDFFNOKNFE___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::SkillData* skillData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDFFNOKNFE___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveSkillData_b__0(::PHKFMKDHNBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHKFMKDHNBO*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE___C__DISPLAYCLASS5_0__REMOVESKILLDATA_B__0_OFFSET))(this, a1);
		}

	};
