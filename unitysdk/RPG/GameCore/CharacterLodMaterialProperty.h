#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MColor.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterLodMaterialProperty; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERLODMATERIALPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5728D0)
#define RPG_GAMECORE_CHARACTERLODMATERIALPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D572700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterLodMaterialProperty_TypeDefinitionIndex = 19100;

	class CharacterLodMaterialProperty : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PropertyName; // 0x10
		::Il2CppArray<::System::Single>* Floats; // 0x18
		::Il2CppArray<::BMAGJGLPIIF>* Vectors; // 0x20
		::Il2CppArray<::RPG::MColor>* Colors; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLODMATERIALPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterLodMaterialProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterLodMaterialProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLODMATERIALPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
