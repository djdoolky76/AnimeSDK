#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LLNNAIFJKIE_AKDCLPAMCCM_COMPARETO_OFFSET UNITYSDK_OFFSET(0x151A37F0)
#define LLNNAIFJKIE_AKDCLPAMCCM__CTOR_OFFSET UNITYSDK_OFFSET(0x151A37E0)

inline static constexpr unsigned int LLNNAIFJKIE_AKDCLPAMCCM_TypeDefinitionIndex = 62083;

class LLNNAIFJKIE_AKDCLPAMCCM : public ::System::Object
{
public:
	::System::Action* JGBIGOJMOME; // 0x10
	::System::Single LBNJKAEPDKJ; // 0x18

	::System::Void _ctor(::System::Single GKFMFCLMHJO, ::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_AKDCLPAMCCM__CTOR_OFFSET))(this, GKFMFCLMHJO, GJBHEJGENMI);
	}

	::System::Int32 CompareTo(::LLNNAIFJKIE_AKDCLPAMCCM* LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::LLNNAIFJKIE_AKDCLPAMCCM*))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_AKDCLPAMCCM_COMPARETO_OFFSET))(this, LIBPKNHDIGP);
	}
};
