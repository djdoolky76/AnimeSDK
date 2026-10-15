#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphLogoConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHLOGOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D911520)
#define RPG_GAMECORE_PHOTOGRAPHLOGOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D911410)

namespace RPG::GameCore
{
	class PhotoGraphLogoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LanguageName; // 0x10
		::System::String* LogoIconPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHLOGOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphLogoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphLogoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHLOGOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
