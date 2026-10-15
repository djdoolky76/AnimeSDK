#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNLEMEHLPDI_MOBLFLGJMFM.h"
class FNLEMEHLPDI;

#define FNLEMEHLPDI_NHAFPAFEPIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1587A990)
#define FNLEMEHLPDI_NHAFPAFEPIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1587EC70)
#define FNLEMEHLPDI_NHAFPAFEPIE_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1587EB90)
#define FNLEMEHLPDI_NHAFPAFEPIE_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x1587EC30)

inline static constexpr unsigned int FNLEMEHLPDI_NHAFPAFEPIE_TypeDefinitionIndex = 57494;

	class FNLEMEHLPDI_NHAFPAFEPIE : public ::FNLEMEHLPDI_MOBLFLGJMFM
	{
	public:
		::System::Void _ctor(::FNLEMEHLPDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNLEMEHLPDI*))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_NHAFPAFEPIE_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_NHAFPAFEPIE_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void OPCKNBHNBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_NHAFPAFEPIE_OPCKNBHNBOA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_NHAFPAFEPIE_DISPOSE_OFFSET))(this);
		}

	};
