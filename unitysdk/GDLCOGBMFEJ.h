#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GDLCOGBMFEJ_BJNJFOOJGID_OFFSET UNITYSDK_OFFSET(0x15999CF0)
#define GDLCOGBMFEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15999D80)
#define GDLCOGBMFEJ_DPDBHPOPFCB_OFFSET UNITYSDK_OFFSET(0x15999A30)
#define GDLCOGBMFEJ_JBMKEOLJOOK_OFFSET UNITYSDK_OFFSET(0x15999D40)
#define GDLCOGBMFEJ_JMOPONIENIO_OFFSET UNITYSDK_OFFSET(0x159999E0)

inline static constexpr unsigned int GDLCOGBMFEJ_TypeDefinitionIndex = 74640;

	class GDLCOGBMFEJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCOGBMFEJ_CTOR_OFFSET))(this);
		}

		::System::Boolean JMOPONIENIO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDLCOGBMFEJ_JMOPONIENIO_OFFSET))(this, a1);
		}

		::System::Boolean DPDBHPOPFCB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDLCOGBMFEJ_DPDBHPOPFCB_OFFSET))(this, a1);
		}

		::System::Boolean BJNJFOOJGID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDLCOGBMFEJ_BJNJFOOJGID_OFFSET))(this, a1);
		}

		::System::Boolean JBMKEOLJOOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCOGBMFEJ_JBMKEOLJOOK_OFFSET))(this);
		}

	};
