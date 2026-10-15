#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELNODECONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D578120)
#define RPG_GAMECORE_CHIMERADUELNODECONTAINER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D577EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNodeContainer_TypeDefinitionIndex = 15944;

	class ChimeraDuelNodeContainer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* Nodes; // 0x10
		::RPG::GameCore::ChimeraDuelPredicateBase* CastCondition; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>* SavedSelection; // 0x20
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* RandomValueGetter; // 0x28
		::Il2CppArray<::System::String*>* PreLoadResPaths; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNODECONTAINER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelNodeContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelNodeContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNODECONTAINER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
