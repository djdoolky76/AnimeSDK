#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareInfiniteWaveSummonProgress; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B6BE0)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B6E70)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B6E40)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B6BF0)
#define RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B6BB0)

namespace RPG::GameCore
{
	class ByCompareInfiniteWaveSummonProgress : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CompareToUnsummoned; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::CompareType CompareOperator; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREINFINITEWAVESUMMONPROGRESS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
