#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterOutfitPart; }
namespace RPG::GameCore { class CharacterOutfitPartBoneRef; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEROUTFITPART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D574440)
#define RPG_GAMECORE_CHARACTEROUTFITPART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5742B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitPart_TypeDefinitionIndex = 17482;

	class CharacterOutfitPart : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RenderName; // 0x10
		::System::String* RenderMeshPath; // 0x18
		::RPG::GameCore::CharacterOutfitPartBoneRef* RootBoneRef; // 0x20
		::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>* BoneRefArray; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterOutfitPart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterOutfitPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
