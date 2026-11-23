#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define B045C35D7A7B7C63__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B045C35D7A7B7C63_TypeDefinitionIndex = 5408;

class B045C35D7A7B7C63 : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* B621F42051C88AC3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B045C35D7A7B7C63__CTOR_OFFSET))(this);
	}
};
