#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGLIAEFEMH.h"
#include "unitysdk/AKJAPDBJNMM.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHOHNJDBEIK_OHFELBJMBLC_OFFSET UNITYSDK_OFFSET(0x1934E2F0)
#define IHOHNJDBEIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1934E2E0)

inline static constexpr unsigned int IHOHNJDBEIK_TypeDefinitionIndex = 14841;

class IHOHNJDBEIK : public ::MOGLIAEFEMH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BCCHPPCMPMJ; // 0x70

	::System::Void _ctor(::AKJAPDBJNMM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AKJAPDBJNMM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IHOHNJDBEIK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* OHFELBJMBLC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOHNJDBEIK_OHFELBJMBLC_OFFSET))(this);
	}
};
