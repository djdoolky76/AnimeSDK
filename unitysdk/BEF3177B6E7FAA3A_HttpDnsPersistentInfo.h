#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEF3177B6E7FAA3A_HTTPDNSPERSISTENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x299CFA0)

inline static constexpr unsigned int BEF3177B6E7FAA3A_HttpDnsPersistentInfo_TypeDefinitionIndex = 15593;

class BEF3177B6E7FAA3A_HttpDnsPersistentInfo : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* dns; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_HTTPDNSPERSISTENTINFO__CTOR_OFFSET))(this);
	}
};
