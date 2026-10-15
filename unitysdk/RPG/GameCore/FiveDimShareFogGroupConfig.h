#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimShareFogGroupConfig; }

#define RPG_GAMECORE_FIVEDIMSHAREFOGGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB9E0)
#define RPG_GAMECORE_FIVEDIMSHAREFOGGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DB9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimShareFogGroupConfig_TypeDefinitionIndex = 18528;

	class FiveDimShareFogGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHAREFOGGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimShareFogGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimShareFogGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHAREFOGGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
