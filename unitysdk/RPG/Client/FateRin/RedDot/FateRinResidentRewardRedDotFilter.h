#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBEHJBOGLII;
class MCPENPHEEFF;
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINRESIDENTREWARDREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0xCFAE5A0)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINRESIDENTREWARDREDDOTFILTER_GETSUBKEYS_OFFSET UNITYSDK_OFFSET(0xCFAE620)

namespace RPG::Client::FateRin::RedDot
{
	class FateRinResidentRewardRedDotFilter : public ::System::Object
	{
	public:
		::EBEHJBOGLII* _ChallengeService; // 0x10
		::MCPENPHEEFF* _Repository; // 0x18
		::System::Void _ctor(::EBEHJBOGLII* a1, ::MCPENPHEEFF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EBEHJBOGLII*, ::MCPENPHEEFF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINRESIDENTREWARDREDDOTFILTER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GetSubKeys(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINRESIDENTREWARDREDDOTFILTER_GETSUBKEYS_OFFSET))(this, a1, a2);
		}

	};
}
