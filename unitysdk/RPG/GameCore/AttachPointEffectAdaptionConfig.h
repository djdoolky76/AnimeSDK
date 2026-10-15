#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachPointEffectAdaptionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACHPOINTEFFECTADAPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D4710)
#define RPG_GAMECORE_ATTACHPOINTEFFECTADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3D4600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachPointEffectAdaptionConfig_TypeDefinitionIndex = 16510;

	class AttachPointEffectAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPoint; // 0x10
		::System::Single Scale; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPOINTEFFECTADAPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachPointEffectAdaptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachPointEffectAdaptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPOINTEFFECTADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
