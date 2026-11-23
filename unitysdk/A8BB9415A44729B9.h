#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B6564CAC678AC465.h"
#include "unitysdk/System/Object.h"

namespace BE874EBF3A5FDC4F { class BFE0BD0924BFDA7D; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A8BB9415A44729B9_AA5FD140D715C7F4_OFFSET UNITYSDK_OFFSET(0x3BEC620)
#define A8BB9415A44729B9_AD627F47739F48B3_OFFSET UNITYSDK_OFFSET(0x3BEC660)
#define A8BB9415A44729B9_FDD589E26884FE76_OFFSET UNITYSDK_OFFSET(0x3BEC580)
#define A8BB9415A44729B9__CTOR_OFFSET UNITYSDK_OFFSET(0x3BEC7F0)

inline static constexpr unsigned int A8BB9415A44729B9_TypeDefinitionIndex = 11273;

class A8BB9415A44729B9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* BEF9A960EC00D770; // 0x10
	::B6564CAC678AC465 B8FD3A78347874BC; // 0x18
	::BE874EBF3A5FDC4F::BFE0BD0924BFDA7D* BE6FC2E5BF3F7E9F; // 0x28

	::System::Void _ctor(::B6564CAC678AC465 E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + A8BB9415A44729B9__CTOR_OFFSET))(this, E6CE7391633EEC68);
	}

	::System::Void FDD589E26884FE76(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + A8BB9415A44729B9_FDD589E26884FE76_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void AA5FD140D715C7F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8BB9415A44729B9_AA5FD140D715C7F4_OFFSET))(this);
	}

	::System::Void AD627F47739F48B3(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + A8BB9415A44729B9_AD627F47739F48B3_OFFSET))(this, A86A90C31A146E9C);
	}
};
