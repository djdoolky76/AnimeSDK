#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareBaseTypeCount; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49CE20)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49D0E0)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49D0A0)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49CE30)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49CDE0)

namespace RPG::GameCore
{
	class ByCompareBaseTypeCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
