#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FD69F7DD82E8D0BE_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24AD1F0)
#define FD69F7DD82E8D0BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FD69F7DD82E8D0BE_TypeDefinitionIndex = 4800;

class FD69F7DD82E8D0BE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* E899E63F97D8DB34; // 0x10
	::AD61077CFCBEFAEA BCD48FFF29917A9C; // 0x18
	::AD61077CFCBEFAEA A63246186D6A2823; // 0x20

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FD69F7DD82E8D0BE*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FD69F7DD82E8D0BE*&))((::PBYTE)hIl2Cpp + FD69F7DD82E8D0BE_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD69F7DD82E8D0BE__CTOR_OFFSET))(this);
	}
};
