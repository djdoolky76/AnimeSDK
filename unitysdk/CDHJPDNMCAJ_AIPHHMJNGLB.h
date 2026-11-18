#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFJPGKAKIJN;

#define CDHJPDNMCAJ_AIPHHMJNGLB_PGMEAMJCMNN_OFFSET UNITYSDK_OFFSET(0x199F8430)
#define CDHJPDNMCAJ_AIPHHMJNGLB__CTOR_OFFSET UNITYSDK_OFFSET(0x199F8420)

inline static constexpr unsigned int CDHJPDNMCAJ_AIPHHMJNGLB_TypeDefinitionIndex = 43304;

class CDHJPDNMCAJ_AIPHHMJNGLB : public ::System::Object
{
public:
	::System::Int32 IKIDJCCKHMG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHJPDNMCAJ_AIPHHMJNGLB__CTOR_OFFSET))(this);
	}

	::System::Boolean PGMEAMJCMNN(::KFJPGKAKIJN* LMLPPLMKLFL)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFJPGKAKIJN*))((::PBYTE)hIl2Cpp + CDHJPDNMCAJ_AIPHHMJNGLB_PGMEAMJCMNN_OFFSET))(this, LMLPPLMKLFL);
	}
};
