#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEADDHNBPHB;
namespace RPG::Client { class BattleUITeamBlockData; }
namespace RPG::Client { class NullTeamBlockBattleBuffGroupViewData; }

#define LGFFIJLEPGJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB68A980)

inline static constexpr unsigned int LGFFIJLEPGJ_TypeDefinitionIndex = 71522;

	class LGFFIJLEPGJ : public ::System::Object
	{
	public:
		static ::RPG::Client::NullTeamBlockBattleBuffGroupViewData** StaticGet_KEBCHBEFDAE()
		{
			return (::RPG::Client::NullTeamBlockBattleBuffGroupViewData**)UnitySDK::FromName("", "LGFFIJLEPGJ")->GetStaticField(0x5F9A0);
		}

		static ::NEADDHNBPHB* BPLPBPMEODA(::RPG::Client::BattleUITeamBlockData* a1)
		{
			return ((::NEADDHNBPHB*(*)(::RPG::Client::BattleUITeamBlockData*))((::PBYTE)hIl2Cpp + LGFFIJLEPGJ_BPLPBPMEODA_OFFSET))(a1);
		}

	};
