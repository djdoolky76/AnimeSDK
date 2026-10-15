#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateLightTeamDollyConfig; }

#define AHAHIDHJNPE_CTOR_OFFSET UNITYSDK_OFFSET(0xEB79C70)
#define AHAHIDHJNPE_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xEB793E0)
#define AHAHIDHJNPE_INIT_OFFSET UNITYSDK_OFFSET(0xEB79420)
#define AHAHIDHJNPE_ONPANLPPOOL_OFFSET UNITYSDK_OFFSET(0xEB79910)
#define AHAHIDHJNPE_REFRESH_OFFSET UNITYSDK_OFFSET(0xEB794C0)
#define AHAHIDHJNPE_RESET_OFFSET UNITYSDK_OFFSET(0xEB79860)

	class AHAHIDHJNPE : public ::System::Object
	{
	public:
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x10
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x18
		::RPG::Client::CameraFightStateLightTeamDollyConfig* MAFIONBKPIE; // 0x20
		::System::Boolean ODKCMCJNGJJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHIDHJNPE_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHIDHJNPE_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + AHAHIDHJNPE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHIDHJNPE_REFRESH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHIDHJNPE_RESET_OFFSET))(this);
		}

		::System::Void ONPANLPPOOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHIDHJNPE_ONPANLPPOOL_OFFSET))(this);
		}

	};
