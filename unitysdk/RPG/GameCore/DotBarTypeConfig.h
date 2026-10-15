#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DotBarTypeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DOTBARTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EB480)
#define RPG_GAMECORE_DOTBARTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5EB350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DotBarTypeConfig_TypeDefinitionIndex = 22734;

	class DotBarTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DotImagePath; // 0x10
		::System::String* EnergyDotPrefabPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOTBARTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DotBarTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DotBarTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOTBARTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
