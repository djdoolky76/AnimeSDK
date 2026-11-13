#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByRelationGroupType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYRELATIONGROUPTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22A580)
#define RPG_GAMECORE_BYRELATIONGROUPTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E22A740)
#define RPG_GAMECORE_BYRELATIONGROUPTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E22A710)
#define RPG_GAMECORE_BYRELATIONGROUPTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E22A590)
#define RPG_GAMECORE_BYRELATIONGROUPTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E22A550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRelationGroupType_TypeDefinitionIndex = 23253;

	class ByRelationGroupType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EntityRelationType Relation; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRELATIONGROUPTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRelationGroupType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRelationGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRELATIONGROUPTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRelationGroupType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRelationGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRELATIONGROUPTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRelationGroupType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRelationGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRELATIONGROUPTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRelationGroupType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRelationGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRELATIONGROUPTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
