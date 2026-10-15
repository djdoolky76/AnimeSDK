#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectDarkTeamSelfEntityConfig; }

#define HDEPAIHHFCI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C327C0)
#define HDEPAIHHFCI_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x15C32780)
#define HDEPAIHHFCI_INIT_OFFSET UNITYSDK_OFFSET(0x15C31F50)
#define HDEPAIHHFCI_REFRESH_OFFSET UNITYSDK_OFFSET(0x15C320B0)
#define HDEPAIHHFCI_RESET_OFFSET UNITYSDK_OFFSET(0x15C32010)

	class HDEPAIHHFCI : public ::System::Object
	{
	public:
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x10
		::RPG::Client::CameraFightStateSelectDarkTeamSelfEntityConfig* MAFIONBKPIE; // 0x18
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x20
		::UnityEngine::Vector3 EPGIKHNGDEB; // 0x28
		::System::Single JONIHNEBKCO; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEPAIHHFCI_CTOR_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + HDEPAIHHFCI_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEPAIHHFCI_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEPAIHHFCI_REFRESH_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEPAIHHFCI_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

	};
