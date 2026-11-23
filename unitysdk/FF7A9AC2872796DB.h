#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FF7A9AC2872796DB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FF7A9AC2872796DB_TypeDefinitionIndex = 6154;

class FF7A9AC2872796DB : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::System::UInt64>* B5518DD2D06BA188; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF7A9AC2872796DB__CTOR_OFFSET))(this);
	}
};
