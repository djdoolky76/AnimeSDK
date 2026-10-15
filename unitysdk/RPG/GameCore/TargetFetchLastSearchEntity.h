#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SearchEntityType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchLastSearchEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB62E80)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB62F60)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB62F30)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB62E90)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB62E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastSearchEntity_TypeDefinitionIndex = 23885;

	class TargetFetchLastSearchEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::SearchEntityType SearchType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
