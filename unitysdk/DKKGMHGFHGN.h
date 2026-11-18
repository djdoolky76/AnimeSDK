#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPDOBLDMEGB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKKGMHGFHGN__CTOR_OFFSET UNITYSDK_OFFSET(0x17A9D2D0)

inline static constexpr unsigned int DKKGMHGFHGN_TypeDefinitionIndex = 12707;

class DKKGMHGFHGN : public ::System::Object
{
public:
	::BPDOBLDMEGB* IAPKABMDJNF; // 0x10
	::System::Collections::Generic::List_1<::BPDOBLDMEGB*>* HBEPDMIABKM; // 0x18

	::System::Void _ctor(::BPDOBLDMEGB* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::BPDOBLDMEGB*))((::PBYTE)hIl2Cpp + DKKGMHGFHGN__CTOR_OFFSET))(this, IAPKABMDJNF);
	}
};
