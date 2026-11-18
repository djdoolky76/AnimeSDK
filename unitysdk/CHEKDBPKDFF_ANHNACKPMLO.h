#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHEKDBPKDFF_ANHNACKPMLO_KDJFBHIJLBI_OFFSET UNITYSDK_OFFSET(0x128F28E0)
#define CHEKDBPKDFF_ANHNACKPMLO__CTOR_OFFSET UNITYSDK_OFFSET(0x128F28D0)

inline static constexpr unsigned int CHEKDBPKDFF_ANHNACKPMLO_TypeDefinitionIndex = 42802;

class CHEKDBPKDFF_ANHNACKPMLO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* EBKOMHOMGEH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_ANHNACKPMLO__CTOR_OFFSET))(this);
	}

	::System::Void KDJFBHIJLBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_ANHNACKPMLO_KDJFBHIJLBI_OFFSET))(this);
	}
};
