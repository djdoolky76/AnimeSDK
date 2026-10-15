#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFGFAHEKNPD.h"
class NKIJFPHFJCO;

#define NFBGGNPFODM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C544D10)
#define NFBGGNPFODM_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x1C544C30)
#define NFBGGNPFODM_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x1C544B50)

inline static constexpr unsigned int NFBGGNPFODM_TypeDefinitionIndex = 41764;

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
