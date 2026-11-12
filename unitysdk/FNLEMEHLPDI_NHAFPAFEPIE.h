#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNLEMEHLPDI_MOBLFLGJMFM.h"
class FNLEMEHLPDI;

#define FNLEMEHLPDI_NHAFPAFEPIE_CTOR_OFFSET UNITYSDK_OFFSET(0x167ED130)
#define FNLEMEHLPDI_NHAFPAFEPIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167F1440)
#define FNLEMEHLPDI_NHAFPAFEPIE_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x167F1360)
#define FNLEMEHLPDI_NHAFPAFEPIE_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x167F1400)

inline static constexpr unsigned int FNLEMEHLPDI_NHAFPAFEPIE_TypeDefinitionIndex = 58722;

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
