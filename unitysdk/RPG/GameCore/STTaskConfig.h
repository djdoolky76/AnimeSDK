#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class STTaskConfig; }

#define RPG_GAMECORE_STTASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC889C0)
#define RPG_GAMECORE_STTASKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC88900)
#define RPG_GAMECORE_STTASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC888C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int STTaskConfig_TypeDefinitionIndex = 20429;

	class STTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STTASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::STTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::STTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STTASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::STTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::STTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STTASKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
