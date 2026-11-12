#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline { class VirtualCameraNoiseConfig; }

#define PHBPBBJDFIH_JDFIFBGCBFD_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0xCB229E0)
#define PHBPBBJDFIH_JDFIFBGCBFD_ADOCCJNEKDO_OFFSET UNITYSDK_OFFSET(0xCB223D0)
#define PHBPBBJDFIH_JDFIFBGCBFD_CTOR_OFFSET UNITYSDK_OFFSET(0xCB22A60)
#define PHBPBBJDFIH_JDFIFBGCBFD_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xCB224A0)
#define PHBPBBJDFIH_JDFIFBGCBFD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCB22A70)

inline static constexpr unsigned int PHBPBBJDFIH_JDFIFBGCBFD_TypeDefinitionIndex = 62081;

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
