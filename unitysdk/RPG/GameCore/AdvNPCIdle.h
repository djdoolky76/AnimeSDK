#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCIdle; }

#define RPG_GAMECORE_ADVNPCIDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A4650)
#define RPG_GAMECORE_ADVNPCIDLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A4660)
#define RPG_GAMECORE_ADVNPCIDLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A4590)

namespace RPG::GameCore
{
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
