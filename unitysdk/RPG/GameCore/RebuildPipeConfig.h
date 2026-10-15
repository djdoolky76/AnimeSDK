#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RebuildPipeConfig; }

#define RPG_GAMECORE_REBUILDPIPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D942CD0)
#define RPG_GAMECORE_REBUILDPIPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D942CE0)
#define RPG_GAMECORE_REBUILDPIPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D942CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RebuildPipeConfig_TypeDefinitionIndex = 18631;

	class RebuildPipeConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRebuildPipe; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 Level; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDPIPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RebuildPipeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RebuildPipeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDPIPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RebuildPipeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RebuildPipeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDPIPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
