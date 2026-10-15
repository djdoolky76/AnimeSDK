#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSBakeConfig; }

#define RPG_GAMECORE_STAGEPVSBAKECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB114D0)
#define RPG_GAMECORE_STAGEPVSBAKECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB11490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSBakeConfig_TypeDefinitionIndex = 19177;

	class StagePVSBakeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSBAKECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSBakeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSBakeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSBAKECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
