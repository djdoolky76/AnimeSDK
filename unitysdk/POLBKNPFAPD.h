#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCastAnimationConfig; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define POLBKNPFAPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8953E0)
#define POLBKNPFAPD_ENGLHIPIBBH_OFFSET UNITYSDK_OFFSET(0x1B8951D0)
#define POLBKNPFAPD_GCCPFLOBAIE_OFFSET UNITYSDK_OFFSET(0x1B894A30)
#define POLBKNPFAPD_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x1B893D20)
#define POLBKNPFAPD_GJIJILJAAAJ_OFFSET UNITYSDK_OFFSET(0x1B894190)
#define POLBKNPFAPD_INIT_OFFSET UNITYSDK_OFFSET(0x1B893D60)
#define POLBKNPFAPD_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B893E50)
#define POLBKNPFAPD_RESET_OFFSET UNITYSDK_OFFSET(0x1B893E00)

inline static constexpr unsigned int POLBKNPFAPD_TypeDefinitionIndex = 71549;

	class POLBKNPFAPD : public ::System::Object
	{
	public:
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x10
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x18
		::RPG::Client::CameraFightStateCastAnimationConfig* MAFIONBKPIE; // 0x20
		::System::Boolean EEDKNHHDCLL; // 0x28
		::System::Boolean HILMOKFDMGH; // 0x29
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
