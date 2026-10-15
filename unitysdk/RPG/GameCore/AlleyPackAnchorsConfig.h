#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorTypeEnum.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyPackAnchorsConfig; }

#define RPG_GAMECORE_ALLEYPACKANCHORSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E9C20)
#define RPG_GAMECORE_ALLEYPACKANCHORSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3E99E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyPackAnchorsConfig_TypeDefinitionIndex = 15684;

	class AlleyPackAnchorsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AlleyPackAnchorTypeEnum AnchorType; // 0x10
		::RPG::MVector3 RootPosition; // 0x14
		::System::UInt32 AnchorNumX; // 0x20
		::System::UInt32 AnchorNumY; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYPACKANCHORSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyPackAnchorsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyPackAnchorsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYPACKANCHORSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
