#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PeiPeiChallengeCheckPoint; }

#define RPG_GAMECORE_PEIPEICHALLENGECHECKPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F4BE0)
#define RPG_GAMECORE_PEIPEICHALLENGECHECKPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F4B00)

namespace RPG::GameCore
{
	class PeiPeiChallengeCheckPoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* District; // 0x10
		::RPG::GameCore::DynamicString* Anchor; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGECHECKPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PeiPeiChallengeCheckPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PeiPeiChallengeCheckPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGECHECKPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
