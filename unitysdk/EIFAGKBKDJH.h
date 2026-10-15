#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGNMOPCCKCB;

#define EIFAGKBKDJH_AFKFJNEJAFC_OFFSET UNITYSDK_OFFSET(0x154C1980)
#define EIFAGKBKDJH_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x154C15A0)
#define EIFAGKBKDJH_CTOR_OFFSET UNITYSDK_OFFSET(0x154C1A80)
#define EIFAGKBKDJH_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x154C1A10)
#define EIFAGKBKDJH_NJGCFEKMFCM_OFFSET UNITYSDK_OFFSET(0x154C17C0)
#define EIFAGKBKDJH_OLGJGNONFGL_OFFSET UNITYSDK_OFFSET(0x154C19C0)

	class EIFAGKBKDJH : public ::System::Object
	{
	public:
		::KGNMOPCCKCB* BCAGFLBKGCH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFAGKBKDJH_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::KGNMOPCCKCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGNMOPCCKCB*))((::PBYTE)hIl2Cpp + EIFAGKBKDJH_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void NJGCFEKMFCM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIFAGKBKDJH_NJGCFEKMFCM_OFFSET))(this, a1);
		}

		::KGNMOPCCKCB* AFKFJNEJAFC()
		{
			return ((::KGNMOPCCKCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFAGKBKDJH_AFKFJNEJAFC_OFFSET))(this);
		}

		::System::Boolean OLGJGNONFGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFAGKBKDJH_OLGJGNONFGL_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFAGKBKDJH_MJGKNFEILLI_OFFSET))(this);
		}

	};
