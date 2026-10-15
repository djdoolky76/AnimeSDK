#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterLodMaterialProperty; }
namespace RPG::GameCore { class CharacterLodMaterialPropertyList; }

#define RPG_GAMECORE_CHARACTERLODMATERIALPROPERTYLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5729A0)
#define RPG_GAMECORE_CHARACTERLODMATERIALPROPERTYLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5728E0)

namespace RPG::GameCore
{
	class CharacterLodMaterialPropertyList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterLodMaterialProperty*>* Properties; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLODMATERIALPROPERTYLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterLodMaterialPropertyList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterLodMaterialPropertyList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLODMATERIALPROPERTYLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
