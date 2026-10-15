#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline { class VirtualCameraNoiseConfig; }

#define PHBPBBJDFIH_JDFIFBGCBFD_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0xC238E80)
#define PHBPBBJDFIH_JDFIFBGCBFD_ADOCCJNEKDO_OFFSET UNITYSDK_OFFSET(0xC238870)
#define PHBPBBJDFIH_JDFIFBGCBFD_CTOR_OFFSET UNITYSDK_OFFSET(0xC238F00)
#define PHBPBBJDFIH_JDFIFBGCBFD_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xC238940)
#define PHBPBBJDFIH_JDFIFBGCBFD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC238F10)

	class PHBPBBJDFIH_JDFIFBGCBFD : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* EAJFHBDCFFO; // 0x10
		::RPGTools::Timeline::VirtualCameraNoiseConfig* CKMHCFNKKPK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_JDFIFBGCBFD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_JDFIFBGCBFD_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ADOCCJNEKDO(::RPGTools::Timeline::VirtualCameraNoiseConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VirtualCameraNoiseConfig*))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_JDFIFBGCBFD_ADOCCJNEKDO_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_JDFIFBGCBFD_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Boolean ABNMKAPKMGF(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_JDFIFBGCBFD_ABNMKAPKMGF_OFFSET))(this, a1);
		}

	};
