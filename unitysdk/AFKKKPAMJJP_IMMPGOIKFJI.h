#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDEBFOKEPPI;
template <typename T> class DFDEIDBBGHG_1;

#define AFKKKPAMJJP_IMMPGOIKFJI_JDEIODKKMOI_OFFSET UNITYSDK_OFFSET(0x16FE4900)
#define AFKKKPAMJJP_IMMPGOIKFJI__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE48F0)

inline static constexpr unsigned int AFKKKPAMJJP_IMMPGOIKFJI_TypeDefinitionIndex = 90987;

class AFKKKPAMJJP_IMMPGOIKFJI : public ::System::Object
{
public:
	::DFDEIDBBGHG_1<::System::UInt32>* NGONHGBCGHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKKKPAMJJP_IMMPGOIKFJI__CTOR_OFFSET))(this);
	}

	::System::Int32 JDEIODKKMOI(::IDEBFOKEPPI* EJCBEJMGFAJ, ::IDEBFOKEPPI* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::IDEBFOKEPPI*, ::IDEBFOKEPPI*))((::PBYTE)hIl2Cpp + AFKKKPAMJJP_IMMPGOIKFJI_JDEIODKKMOI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
