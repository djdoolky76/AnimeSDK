#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJBADDEBBEP.h"
class NKIJFPHFJCO;

#define MFPKNIHJJDI_CTOR_OFFSET UNITYSDK_OFFSET(0x207B9B60)
#define MFPKNIHJJDI_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x207B9A80)
#define MFPKNIHJJDI_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x207B99A0)

inline static constexpr unsigned int MFPKNIHJJDI_TypeDefinitionIndex = 42741;

	class MFPKNIHJJDI : public ::GJBADDEBBEP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPKNIHJJDI_CTOR_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + MFPKNIHJJDI_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + MFPKNIHJJDI_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
