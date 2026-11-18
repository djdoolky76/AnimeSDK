#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define HEAECEINKCC_AMAJPPPCKPC_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x7C0C60)
#define HEAECEINKCC_AMAJPPPCKPC__CTOR_OFFSET UNITYSDK_OFFSET(0x7C0BC0)

inline static constexpr unsigned int HEAECEINKCC_AMAJPPPCKPC_TypeDefinitionIndex = 64570;

struct alignas(8) HEAECEINKCC_AMAJPPPCKPC
{
	::System::Collections::Generic::Stack_1<::System::Collections::IEnumerator*>* NIBHOKGNGHE; // 0x10

	::System::Void _ctor(::System::Collections::IEnumerator* LBDDOMFAJMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + HEAECEINKCC_AMAJPPPCKPC__CTOR_OFFSET))(this, LBDDOMFAJMK);
	}

	::System::Void GLEJMKLOMBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_AMAJPPPCKPC_GLEJMKLOMBP_OFFSET))(this);
	}
};
