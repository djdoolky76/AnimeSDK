#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePropHPRatio; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CA0B0)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CA3B0)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CA370)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CA0C0)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CA070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropHPRatio_TypeDefinitionIndex = 22262;

	class ByComparePropHPRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* UniqueName; // 0x20
		::System::UInt32 GroupID; // 0x28
		::System::UInt32 GroupPropID; // 0x2C
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint CompareValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
