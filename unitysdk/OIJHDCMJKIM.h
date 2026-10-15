#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkUIType.h"
#include "unitysdk/RPG/GameCore/FateMasterTalkSituation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkRandomContext.h"

#define OIJHDCMJKIM_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xBE9D620)
#define OIJHDCMJKIM_MHFPGFHBHBE_OFFSET UNITYSDK_OFFSET(0xBE9D8C0)
#define OIJHDCMJKIM_MOMGDJKPKLE_OFFSET UNITYSDK_OFFSET(0xBE9D930)
#define OIJHDCMJKIM_NBANDBJAJBK_OFFSET UNITYSDK_OFFSET(0xBE9D820)

	class OIJHDCMJKIM : public ::System::Object
	{
	public:
		static ::System::Boolean JJNFOPNOPBF(::RPG::GameCore::FateMasterTalkSituation a1, ::RPG::Client::FateGameMasterTalkRandomContext a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateMasterTalkSituation, ::RPG::Client::FateGameMasterTalkRandomContext))((::PBYTE)hIl2Cpp + OIJHDCMJKIM_JJNFOPNOPBF_OFFSET))(a1, a2);
		}

		static ::System::Boolean NBANDBJAJBK(::RPG::GameCore::FateMasterTalkSituation a1, ::RPG::Client::FateGameMasterTalkUIType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateMasterTalkSituation, ::RPG::Client::FateGameMasterTalkUIType))((::PBYTE)hIl2Cpp + OIJHDCMJKIM_NBANDBJAJBK_OFFSET))(a1, a2);
		}

		static ::System::Boolean MHFPGFHBHBE(::RPG::GameCore::FateMasterTalkSituation a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateMasterTalkSituation, ::System::Boolean))((::PBYTE)hIl2Cpp + OIJHDCMJKIM_MHFPGFHBHBE_OFFSET))(a1, a2);
		}

		static ::System::Boolean MOMGDJKPKLE(::RPG::GameCore::FateMasterTalkSituation a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateMasterTalkSituation, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OIJHDCMJKIM_MOMGDJKPKLE_OFFSET))(a1, a2, a3);
		}

	};
