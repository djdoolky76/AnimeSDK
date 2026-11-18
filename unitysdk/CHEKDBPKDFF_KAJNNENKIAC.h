#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHEKDBPKDFF_KAJNNENKIAC_KEEFCICHLOB_OFFSET UNITYSDK_OFFSET(0x16869B60)
#define CHEKDBPKDFF_KAJNNENKIAC__CTOR_OFFSET UNITYSDK_OFFSET(0x16869B50)

inline static constexpr unsigned int CHEKDBPKDFF_KAJNNENKIAC_TypeDefinitionIndex = 42801;

class CHEKDBPKDFF_KAJNNENKIAC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* BFJONIPNMBI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_KAJNNENKIAC__CTOR_OFFSET))(this);
	}

	::System::Void KEEFCICHLOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_KAJNNENKIAC_KEEFCICHLOB_OFFSET))(this);
	}
};
