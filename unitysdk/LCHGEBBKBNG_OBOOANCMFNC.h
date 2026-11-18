#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEKLIGLLJKM;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LCHGEBBKBNG_OBOOANCMFNC_FACHDBEBDBN_OFFSET UNITYSDK_OFFSET(0x15BB6C80)
#define LCHGEBBKBNG_OBOOANCMFNC__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB6C70)

inline static constexpr unsigned int LCHGEBBKBNG_OBOOANCMFNC_TypeDefinitionIndex = 63656;

class LCHGEBBKBNG_OBOOANCMFNC : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::MEKLIGLLJKM*>* OKFALKNNGDL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHGEBBKBNG_OBOOANCMFNC__CTOR_OFFSET))(this);
	}

	::System::Boolean FACHDBEBDBN(::MEKLIGLLJKM* POJEDACFDOF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + LCHGEBBKBNG_OBOOANCMFNC_FACHDBEBDBN_OFFSET))(this, POJEDACFDOF);
	}
};
