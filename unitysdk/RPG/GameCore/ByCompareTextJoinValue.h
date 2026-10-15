#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareTextJoinValue; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B4490)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B4680)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B4650)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B44A0)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B4460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTextJoinValue_TypeDefinitionIndex = 20881;

	class ByCompareTextJoinValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TextJoinID; // 0x20
		::System::UInt32 Value; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
