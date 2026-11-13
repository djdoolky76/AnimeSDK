#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFGFAHEKNPD.h"
class NKIJFPHFJCO;

#define NFBGGNPFODM_CTOR_OFFSET UNITYSDK_OFFSET(0x207BC7D0)
#define NFBGGNPFODM_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x207BC6F0)
#define NFBGGNPFODM_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x207BC610)

inline static constexpr unsigned int NFBGGNPFODM_TypeDefinitionIndex = 42739;

	class NFBGGNPFODM : public ::CFGFAHEKNPD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBGGNPFODM_CTOR_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + NFBGGNPFODM_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + NFBGGNPFODM_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
