#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationUIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELATIONUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D605E60)
#define RPG_GAMECORE_ELATIONUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D604B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationUIConfig_TypeDefinitionIndex = 16546;

	class ElationUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DetailIconPath; // 0x10
		::System::String* ActionBarIconPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
