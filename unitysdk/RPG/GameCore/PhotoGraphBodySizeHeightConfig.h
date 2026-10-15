#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphBodySizeHeightConfig; }

#define RPG_GAMECORE_PHOTOGRAPHBODYSIZEHEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E25C0)
#define RPG_GAMECORE_PHOTOGRAPHBODYSIZEHEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E24B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphBodySizeHeightConfig_TypeDefinitionIndex = 19054;

	class PhotoGraphBodySizeHeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BodySize Size; // 0x10
		::System::Single Height; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHBODYSIZEHEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphBodySizeHeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphBodySizeHeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHBODYSIZEHEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
