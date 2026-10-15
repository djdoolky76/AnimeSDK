#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByMuseumProjectorThemeNum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52C330)
#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D52C520)
#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D52C4F0)
#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52C340)
#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52C300)

namespace RPG::GameCore
{
	class ByMuseumProjectorThemeNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 ThemeNum; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
