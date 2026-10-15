#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFGFAHEKNPD.h"
class DPKCEPGMAEP;
class NCEOAMDCDPJ;
class NKIJFPHFJCO;

#define GLJEIMDMFGI_CPAJIOJKPGI_OFFSET UNITYSDK_OFFSET(0x1C524290)
#define GLJEIMDMFGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C524410)
#define GLJEIMDMFGI_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x1C529250)
#define GLJEIMDMFGI_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x1C529190)

inline static constexpr unsigned int GLJEIMDMFGI_TypeDefinitionIndex = 41771;

	class GLJEIMDMFGI : public ::CFGFAHEKNPD
	{
	public:
		::DPKCEPGMAEP* CMBEAINJHPM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJEIMDMFGI_CTOR_OFFSET))(this);
		}

		::NCEOAMDCDPJ* CPAJIOJKPGI()
		{
			return ((::NCEOAMDCDPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJEIMDMFGI_CPAJIOJKPGI_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + GLJEIMDMFGI_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + GLJEIMDMFGI_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
