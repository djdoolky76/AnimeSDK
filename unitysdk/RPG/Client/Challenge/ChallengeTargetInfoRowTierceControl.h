#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_CDDAHAJGDPJ_OFFSET UNITYSDK_OFFSET(0xC9413A0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC941440)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_MJGPOPBGAEH_OFFSET UNITYSDK_OFFSET(0xC9413E0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeTargetInfoRowTierceControl_TypeDefinitionIndex = 81422;

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
