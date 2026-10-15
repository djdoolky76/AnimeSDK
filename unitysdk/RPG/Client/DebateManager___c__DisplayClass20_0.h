#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIMIDMONKOA;
namespace RPG::GameCore { class DebateTestimonySetting; }

#define RPG_CLIENT_DEBATEMANAGER___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCBE1C80)
#define RPG_CLIENT_DEBATEMANAGER___C__DISPLAYCLASS20_0___SETTESTIMONYGROUPS_B__0_OFFSET UNITYSDK_OFFSET(0xCBE1F50)

namespace RPG::Client
{
	inline static constexpr unsigned int DebateManager___c__DisplayClass20_0_TypeDefinitionIndex = 60692;

	class DebateManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::DebateTestimonySetting* config; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SetTestimonyGroups_b__0(::PIMIDMONKOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIMIDMONKOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER___C__DISPLAYCLASS20_0___SETTESTIMONYGROUPS_B__0_OFFSET))(this, a1);
		}

	};
}
