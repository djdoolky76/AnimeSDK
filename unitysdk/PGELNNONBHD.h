#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGELNNONBHD__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int PGELNNONBHD_TypeDefinitionIndex = 74157;

struct alignas(8) PGELNNONBHD
{
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* CMALMCEOIAF; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* EAIPOAFJNNI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + PGELNNONBHD__CTOR_OFFSET))(this, EAIPOAFJNNI);
	}
};
