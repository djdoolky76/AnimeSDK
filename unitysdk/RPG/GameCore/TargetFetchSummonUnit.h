#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SummonUnitFetchType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFetchSummonUnit; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHSUMMONUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB38250)
#define RPG_GAMECORE_TARGETFETCHSUMMONUNIT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB383F0)
#define RPG_GAMECORE_TARGETFETCHSUMMONUNIT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB383C0)
#define RPG_GAMECORE_TARGETFETCHSUMMONUNIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB38260)
#define RPG_GAMECORE_TARGETFETCHSUMMONUNIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB38220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchSummonUnit_TypeDefinitionIndex = 23890;

	class TargetFetchSummonUnit : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x10
		::RPG::GameCore::TargetEvaluator* Summoner; // 0x18
		::System::UInt32 SummonUnitID; // 0x20
		::RPG::GameCore::SummonUnitFetchType FetchType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONUNIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchSummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONUNIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchSummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONUNIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonUnit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONUNIT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonUnit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONUNIT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
