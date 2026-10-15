#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class OCJKANPGMBA;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL_BEDJDJIMNPA_OFFSET UNITYSDK_OFFSET(0xC954050)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL_BIHHPNJGMEC_OFFSET UNITYSDK_OFFSET(0xC954680)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC9546C0)

namespace RPG::Client::Challenge::Tierce
{
	class ChallengeTierceSettleConfirmResultControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LocalizedText* _TextLabel; // 0x18
		::RPG::Client::TextID _TextIDUsedRounds; // 0x20
		::RPG::Client::TextID _TextIDObtainedScore; // 0x30
		::RPG::Client::LocalizedText* _TextNumber; // 0x40
		::UnityEngine::RectTransform* _NodeAnyMemberDead; // 0x48
		::OCJKANPGMBA* GNOEGILFEMD; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL_CTOR_OFFSET))(this);
		}

		::OCJKANPGMBA* BIHHPNJGMEC()
		{
			return ((::OCJKANPGMBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL_BIHHPNJGMEC_OFFSET))(this);
		}

		::System::Void BEDJDJIMNPA(::OCJKANPGMBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCJKANPGMBA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMRESULTCONTROL_BEDJDJIMNPA_OFFSET))(this, a1);
		}

	};
}
