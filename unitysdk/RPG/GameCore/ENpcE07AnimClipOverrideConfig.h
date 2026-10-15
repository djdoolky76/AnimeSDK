#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ENpcE07AnimClipOverrideConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ENPCE07ANIMCLIPOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D62D620)
#define RPG_GAMECORE_ENPCE07ANIMCLIPOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D62D4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ENpcE07AnimClipOverrideConfig_TypeDefinitionIndex = 16521;

	class ENpcE07AnimClipOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OriginClipName; // 0x10
		::System::String* OverrideClipPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCE07ANIMCLIPOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ENpcE07AnimClipOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ENpcE07AnimClipOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCE07ANIMCLIPOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
