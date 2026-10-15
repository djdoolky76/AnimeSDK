#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphStealConfig; }

#define RPG_GAMECORE_PHOTOGRAPHSTEALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9137A0)
#define RPG_GAMECORE_PHOTOGRAPHSTEALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D912BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphStealConfig_TypeDefinitionIndex = 19057;

	class PhotoGraphStealConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::Single MaxDistance; // 0x14
		::System::Single MinSizeScale; // 0x18
		::System::Single MaxSizeScale; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSTEALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphStealConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphStealConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSTEALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
