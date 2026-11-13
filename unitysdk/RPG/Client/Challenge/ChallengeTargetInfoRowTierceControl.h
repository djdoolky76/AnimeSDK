#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_CDDAHAJGDPJ_OFFSET UNITYSDK_OFFSET(0x1DDD71B0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD7250)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_MJGPOPBGAEH_OFFSET UNITYSDK_OFFSET(0x1DDD71F0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeTargetInfoRowTierceControl_TypeDefinitionIndex = 84201;

	class ChallengeTargetInfoRowTierceControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _NodeHint; // 0x18
		::System::Boolean OMPIDCOBEEF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_CTOR_OFFSET))(this);
		}

		::System::Boolean CDDAHAJGDPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_CDDAHAJGDPJ_OFFSET))(this);
		}

		::System::Void MJGPOPBGAEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_MJGPOPBGAEH_OFFSET))(this, a1);
		}

	};
}
