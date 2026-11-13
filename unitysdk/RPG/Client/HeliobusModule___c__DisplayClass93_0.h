#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJBFKGBKJME;
namespace RPG::Client { class HeliobusSkillData; }

#define RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F90C0)
#define RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0___ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0x1C5F9390)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusModule___c__DisplayClass93_0_TypeDefinitionIndex = 67589;

	class HeliobusModule___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::KJBFKGBKJME* ntf; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdHeliobusUnlockSkillScNotify_b__0(::RPG::Client::HeliobusSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HeliobusSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0___ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_B__0_OFFSET))(this, a1);
		}

	};
}
