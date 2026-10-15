#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterMaterialPropertyTemplate; }

#define RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5729F0)
#define RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5729B0)

namespace RPG::GameCore
{
	class CharacterMaterialPropertyTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterMaterialPropertyTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterMaterialPropertyTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
