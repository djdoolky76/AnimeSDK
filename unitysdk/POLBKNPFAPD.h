#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCastAnimationConfig; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define POLBKNPFAPD_CTOR_OFFSET UNITYSDK_OFFSET(0xC368F90)
#define POLBKNPFAPD_ENGLHIPIBBH_OFFSET UNITYSDK_OFFSET(0xC368D80)
#define POLBKNPFAPD_GCCPFLOBAIE_OFFSET UNITYSDK_OFFSET(0xC3685E0)
#define POLBKNPFAPD_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xC3678D0)
#define POLBKNPFAPD_GJIJILJAAAJ_OFFSET UNITYSDK_OFFSET(0xC367D40)
#define POLBKNPFAPD_INIT_OFFSET UNITYSDK_OFFSET(0xC367910)
#define POLBKNPFAPD_REFRESH_OFFSET UNITYSDK_OFFSET(0xC367A00)
#define POLBKNPFAPD_RESET_OFFSET UNITYSDK_OFFSET(0xC3679B0)

inline static constexpr unsigned int POLBKNPFAPD_TypeDefinitionIndex = 69592;

	class POLBKNPFAPD : public ::System::Object
	{
	public:
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x10
		::RPG::Client::CameraFightStateCastAnimationConfig* MAFIONBKPIE; // 0x18
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x20
		::System::Boolean HILMOKFDMGH; // 0x28
		::System::Boolean EEDKNHHDCLL; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLBKNPFAPD_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLBKNPFAPD_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + POLBKNPFAPD_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLBKNPFAPD_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLBKNPFAPD_REFRESH_OFFSET))(this);
		}

		::System::Boolean GCCPFLOBAIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POLBKNPFAPD_GCCPFLOBAIE_OFFSET))(this);
		}

		::System::Void ENGLHIPIBBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLBKNPFAPD_ENGLHIPIBBH_OFFSET))(this);
		}

		::System::Void GJIJILJAAAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLBKNPFAPD_GJIJILJAAAJ_OFFSET))(this);
		}

	};
