#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterOutfitPendant; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEROUTFITPENDANT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5749B0)
#define RPG_GAMECORE_CHARACTEROUTFITPENDANT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D574650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitPendant_TypeDefinitionIndex = 17484;

	class CharacterOutfitPendant : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPoint; // 0x10
		::RPG::MVector3 LocalPositionOffset; // 0x18
		::RPG::MVector3 LocalRotationOffset; // 0x24
		::System::Single LocalScale; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* PrefabPath; // 0x38
		::System::Boolean IsEffect; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPENDANT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterOutfitPendant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterOutfitPendant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPENDANT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
