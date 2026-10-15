#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MKADBANINAK_BJNJFOOJGID_OFFSET UNITYSDK_OFFSET(0xB97E4C0)
#define MKADBANINAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB97E550)
#define MKADBANINAK_DPDBHPOPFCB_OFFSET UNITYSDK_OFFSET(0xB97E3C0)
#define MKADBANINAK_JBMKEOLJOOK_OFFSET UNITYSDK_OFFSET(0xB97E510)
#define MKADBANINAK_JMOPONIENIO_OFFSET UNITYSDK_OFFSET(0xB97E2F0)

inline static constexpr unsigned int MKADBANINAK_TypeDefinitionIndex = 74642;

	class MKADBANINAK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKADBANINAK_CTOR_OFFSET))(this);
		}

		::System::Boolean JMOPONIENIO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKADBANINAK_JMOPONIENIO_OFFSET))(this, a1);
		}

		::System::Boolean DPDBHPOPFCB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKADBANINAK_DPDBHPOPFCB_OFFSET))(this, a1);
		}

		::System::Boolean BJNJFOOJGID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKADBANINAK_BJNJFOOJGID_OFFSET))(this, a1);
		}

		::System::Boolean JBMKEOLJOOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKADBANINAK_JBMKEOLJOOK_OFFSET))(this);
		}

	};
