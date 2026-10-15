#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterOutfitPartBoneRef; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEROUTFITPARTBONEREF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D574570)
#define RPG_GAMECORE_CHARACTEROUTFITPARTBONEREF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D574450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitPartBoneRef_TypeDefinitionIndex = 17481;

	class CharacterOutfitPartBoneRef : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BoneName; // 0x10
		::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>* ChildBones; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPARTBONEREF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterOutfitPartBoneRef* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterOutfitPartBoneRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPARTBONEREF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
