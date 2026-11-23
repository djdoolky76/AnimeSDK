#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define E581438BADF99302__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E581438BADF99302_TypeDefinitionIndex = 4563;

class E581438BADF99302 : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* E61D324FBA62405F; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E581438BADF99302__CTOR_OFFSET))(this);
	}
};
