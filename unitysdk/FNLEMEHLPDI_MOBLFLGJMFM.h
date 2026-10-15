#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNLEMEHLPDI;

#define FNLEMEHLPDI_MOBLFLGJMFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1587E4C0)
#define FNLEMEHLPDI_MOBLFLGJMFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1587EB40)
#define FNLEMEHLPDI_MOBLFLGJMFM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1587EAC0)
#define FNLEMEHLPDI_MOBLFLGJMFM_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x1587EB00)

	class FNLEMEHLPDI_MOBLFLGJMFM : public ::System::Object
	{
	public:
		::FNLEMEHLPDI* KCONLBKIGHD; // 0x10
		::System::Void _ctor(::FNLEMEHLPDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNLEMEHLPDI*))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_MOBLFLGJMFM_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_MOBLFLGJMFM_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void OPCKNBHNBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_MOBLFLGJMFM_OPCKNBHNBOA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_MOBLFLGJMFM_DISPOSE_OFFSET))(this);
		}

	};
