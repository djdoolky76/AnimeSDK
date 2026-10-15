#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNLEMEHLPDI_MOBLFLGJMFM.h"
class FNLEMEHLPDI;

#define FNLEMEHLPDI_OJKLGMLBEHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1586EC10)
#define FNLEMEHLPDI_OJKLGMLBEHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15873020)
#define FNLEMEHLPDI_OJKLGMLBEHC_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15872F40)
#define FNLEMEHLPDI_OJKLGMLBEHC_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x15872FE0)

inline static constexpr unsigned int FNLEMEHLPDI_OJKLGMLBEHC_TypeDefinitionIndex = 57493;

	class FNLEMEHLPDI_OJKLGMLBEHC : public ::FNLEMEHLPDI_MOBLFLGJMFM
	{
	public:
		::System::Void _ctor(::FNLEMEHLPDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNLEMEHLPDI*))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_OJKLGMLBEHC_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_OJKLGMLBEHC_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void OPCKNBHNBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_OJKLGMLBEHC_OPCKNBHNBOA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_OJKLGMLBEHC_DISPOSE_OFFSET))(this);
		}

	};
