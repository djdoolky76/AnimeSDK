#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBEHJBOGLII;
class MCPENPHEEFF;
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINRESIDENTREWARDREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA6690)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINRESIDENTREWARDREDDOTFILTER_GETSUBKEYS_OFFSET UNITYSDK_OFFSET(0xCFA6710)

namespace RPG::Client::FateRin::RedDot
{
	inline static constexpr unsigned int FateRinResidentRewardRedDotFilter_TypeDefinitionIndex = 80740;

	class FateRinResidentRewardRedDotFilter : public ::System::Object
	{
	public:
		::MCPENPHEEFF* _Repository; // 0x10
		::EBEHJBOGLII* _ChallengeService; // 0x18
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
