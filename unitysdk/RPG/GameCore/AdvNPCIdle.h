#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCIdle; }

#define RPG_GAMECORE_ADVNPCIDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D87B0)
#define RPG_GAMECORE_ADVNPCIDLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8D87C0)
#define RPG_GAMECORE_ADVNPCIDLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8D86F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCIdle_TypeDefinitionIndex = 20320;

	class AdvNPCIdle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCIDLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCIdle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCIdle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCIDLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCIdle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCIdle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCIDLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
