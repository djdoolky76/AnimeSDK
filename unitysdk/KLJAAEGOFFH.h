#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFGFAHEKNPD.h"
class NKIJFPHFJCO;

#define KLJAAEGOFFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53E680)
#define KLJAAEGOFFH_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x1C53E600)
#define KLJAAEGOFFH_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C53E560)
#define KLJAAEGOFFH_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x1C53E580)
#define KLJAAEGOFFH_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C53E570)

inline static constexpr unsigned int KLJAAEGOFFH_TypeDefinitionIndex = 41770;

	class KLJAAEGOFFH : public ::CFGFAHEKNPD
	{
	public:
		::System::Int32 _Count_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJAAEGOFFH_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJAAEGOFFH_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLJAAEGOFFH_SET_COUNT_OFFSET))(this, a1);
		}

		::System::Boolean NCLOMPDLJPB(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + KLJAAEGOFFH_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + KLJAAEGOFFH_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
