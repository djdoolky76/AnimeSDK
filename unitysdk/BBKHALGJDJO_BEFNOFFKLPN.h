#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IFMDDIOEJGI.h"

class KOIDMLPJGML;

#define BBKHALGJDJO_BEFNOFFKLPN_EFCLMAGGMMF_OFFSET UNITYSDK_OFFSET(0x1423D610)
#define BBKHALGJDJO_BEFNOFFKLPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1423D600)

inline static constexpr unsigned int BBKHALGJDJO_BEFNOFFKLPN_TypeDefinitionIndex = 74720;

class BBKHALGJDJO_BEFNOFFKLPN : public ::System::Object
{
public:
	::System::Boolean DBFFIBIDJPO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKHALGJDJO_BEFNOFFKLPN__CTOR_OFFSET))(this);
	}

	::KOIDMLPJGML* EFCLMAGGMMF(::IFMDDIOEJGI HMMMOCJAEOA)
	{
		return ((::KOIDMLPJGML*(*)(::PVOID, ::IFMDDIOEJGI))((::PBYTE)hIl2Cpp + BBKHALGJDJO_BEFNOFFKLPN_EFCLMAGGMMF_OFFSET))(this, HMMMOCJAEOA);
	}
};
