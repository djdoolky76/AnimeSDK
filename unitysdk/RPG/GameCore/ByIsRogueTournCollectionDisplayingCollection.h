#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsRogueTournCollectionDisplayingCollection; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51FBB0)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D51FD90)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D51FD60)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51FBC0)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51FB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRogueTournCollectionDisplayingCollection_TypeDefinitionIndex = 22114;

	class ByIsRogueTournCollectionDisplayingCollection : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
