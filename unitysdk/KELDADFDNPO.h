#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
class CEEGMMCFCBG;
namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Action; }

#define KELDADFDNPO_ADD_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0xB37C4D0)
#define KELDADFDNPO_AELDKIBOACK_OFFSET UNITYSDK_OFFSET(0xB37C1B0)
#define KELDADFDNPO_BLIPKPFJKLC_OFFSET UNITYSDK_OFFSET(0xB37C330)
#define KELDADFDNPO_BONHHIBNJHE_OFFSET UNITYSDK_OFFSET(0xB37C380)
#define KELDADFDNPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB37C590)
#define KELDADFDNPO_ICGDACLABLC_OFFSET UNITYSDK_OFFSET(0xB37C2E0)
#define KELDADFDNPO_JKGDKKEKHBK_OFFSET UNITYSDK_OFFSET(0xB37C260)
#define KELDADFDNPO_OGNJAICKAOB_OFFSET UNITYSDK_OFFSET(0xB37C410)
#define KELDADFDNPO_REMOVE_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0xB37C530)
#define KELDADFDNPO__GET_EXITCOMMAND_B__13_0_OFFSET UNITYSDK_OFFSET(0xB37C5A0)

	class KELDADFDNPO : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeGroupData* POADJJEHDBL; // 0x10
		::System::Action* HandleExit; // 0x18
		::CEEGMMCFCBG* LCGBLFOHNFA; // 0x20
		::System::Void _ctor(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + KELDADFDNPO_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID AELDKIBOACK()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KELDADFDNPO_AELDKIBOACK_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType JKGDKKEKHBK()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + KELDADFDNPO_JKGDKKEKHBK_OFFSET))(this);
		}

		::System::Int32 ICGDACLABLC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KELDADFDNPO_ICGDACLABLC_OFFSET))(this);
		}

		::System::Int32 BLIPKPFJKLC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KELDADFDNPO_BLIPKPFJKLC_OFFSET))(this);
		}

		::RPG::Client::DateTimePro BONHHIBNJHE()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + KELDADFDNPO_BONHHIBNJHE_OFFSET))(this);
		}

		::CEEGMMCFCBG* OGNJAICKAOB()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELDADFDNPO_OGNJAICKAOB_OFFSET))(this);
		}

		::System::Void add_HandleExit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KELDADFDNPO_ADD_HANDLEEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_HandleExit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KELDADFDNPO_REMOVE_HANDLEEXIT_OFFSET))(this, a1);
		}

		::System::Void _get_ExitCommand_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELDADFDNPO__GET_EXITCOMMAND_B__13_0_OFFSET))(this);
		}

	};
