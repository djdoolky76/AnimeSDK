#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterMaterialTemplate; }

#define RPG_GAMECORE_CHARACTERMATERIALTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D545040)
#define RPG_GAMECORE_CHARACTERMATERIALTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D545000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterMaterialTemplate_TypeDefinitionIndex = 17446;

	class CharacterMaterialTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterMaterialTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterMaterialTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
