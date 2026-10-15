#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchRogueMagicScepterList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB65730)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB657C0)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB657A0)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB65740)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB656C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchRogueMagicScepterList_TypeDefinitionIndex = 24016;

	class TargetFetchRogueMagicScepterList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
