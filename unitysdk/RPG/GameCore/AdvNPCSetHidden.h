#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCSetHidden; }

#define RPG_GAMECORE_ADVNPCSETHIDDEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A5470)
#define RPG_GAMECORE_ADVNPCSETHIDDEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A5480)
#define RPG_GAMECORE_ADVNPCSETHIDDEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A5440)

namespace RPG::GameCore
{
	class AdvNPCSetHidden : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHidden; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETHIDDEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCSetHidden* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCSetHidden*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETHIDDEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCSetHidden* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCSetHidden*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETHIDDEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
