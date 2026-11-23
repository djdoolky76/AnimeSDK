#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F8CAF43D67DA233E_PIPESENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x381BD00)

inline static constexpr unsigned int F8CAF43D67DA233E_PipeSendData_TypeDefinitionIndex = 12150;

class F8CAF43D67DA233E_PipeSendData : public ::System::Object
{
public:
	::System::String* f; // 0x10
	::System::String* p; // 0x18
	::System::Int32 i; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8CAF43D67DA233E_PIPESENDDATA__CTOR_OFFSET))(this);
	}
};
