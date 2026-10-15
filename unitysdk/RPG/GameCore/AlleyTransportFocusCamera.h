#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyTransportFocusCamera; }

#define RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EDF20)
#define RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3EDF30)
#define RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3EDEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyTransportFocusCamera_TypeDefinitionIndex = 24288;

	class AlleyTransportFocusCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyTransportFocusCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyTransportFocusCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyTransportFocusCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyTransportFocusCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
