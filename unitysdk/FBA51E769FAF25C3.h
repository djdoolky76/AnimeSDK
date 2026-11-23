#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FBA51E769FAF25C3__CTOR_OFFSET UNITYSDK_OFFSET(0x2095850)

inline static constexpr unsigned int FBA51E769FAF25C3_TypeDefinitionIndex = 8507;

struct alignas(8) FBA51E769FAF25C3
{
	::System::String* BFEB5D3A4B66DC67; // 0x10
	::E865F6F8B8B44C1E AF41532E7F7801AD; // 0x18
	::System::Single B17B9B9C54637FC1; // 0x20

	::System::Void _ctor(::System::String* E7F13465F7E064E1, ::E865F6F8B8B44C1E E7102EB4CD1D28DD, ::System::Single BD3B33D72884EDA1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::E865F6F8B8B44C1E, ::System::Single))((::PBYTE)hIl2Cpp + FBA51E769FAF25C3__CTOR_OFFSET))(this, E7F13465F7E064E1, E7102EB4CD1D28DD, BD3B33D72884EDA1);
	}
};
