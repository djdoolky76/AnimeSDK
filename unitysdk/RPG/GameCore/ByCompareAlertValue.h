#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlertValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareAlertValue; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREALERTVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46C3B0)
#define RPG_GAMECORE_BYCOMPAREALERTVALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D46C6A0)
#define RPG_GAMECORE_BYCOMPAREALERTVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D46C670)
#define RPG_GAMECORE_BYCOMPAREALERTVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D46C3C0)
#define RPG_GAMECORE_BYCOMPAREALERTVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D46C380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAlertValue_TypeDefinitionIndex = 20775;

	class ByCompareAlertValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 GroupNpcMonsterID; // 0x24
		::RPG::GameCore::AlertValueCompareType CompareType; // 0x28
		::System::Single AlertValueMin; // 0x2C
		::System::Single AlertValueMax; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALERTVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareAlertValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALERTVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareAlertValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALERTVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAlertValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALERTVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAlertValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALERTVALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
