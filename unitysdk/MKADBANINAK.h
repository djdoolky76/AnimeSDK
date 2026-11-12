#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MKADBANINAK_BJNJFOOJGID_OFFSET UNITYSDK_OFFSET(0xC238730)
#define MKADBANINAK_CTOR_OFFSET UNITYSDK_OFFSET(0xC2387C0)
#define MKADBANINAK_DPDBHPOPFCB_OFFSET UNITYSDK_OFFSET(0xC238630)
#define MKADBANINAK_JBMKEOLJOOK_OFFSET UNITYSDK_OFFSET(0xC238780)
#define MKADBANINAK_JMOPONIENIO_OFFSET UNITYSDK_OFFSET(0xC238560)

inline static constexpr unsigned int MKADBANINAK_TypeDefinitionIndex = 76790;

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
