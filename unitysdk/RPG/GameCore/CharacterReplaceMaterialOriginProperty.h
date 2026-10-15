#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReplaceMaterialOriginProperty; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALORIGINPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54A840)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALORIGINPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54A650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialOriginProperty_TypeDefinitionIndex = 17441;

	class CharacterReplaceMaterialOriginProperty : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* Property2D; // 0x10
		::Il2CppArray<::System::String*>* PropertyColor; // 0x18
		::Il2CppArray<::System::String*>* PropertyInt; // 0x20
		::Il2CppArray<::System::String*>* PropertyFloat; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALORIGINPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALORIGINPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
