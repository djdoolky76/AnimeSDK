#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F6E41554396A44EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F6E41554396A44EB_TypeDefinitionIndex = 15042;

class F6E41554396A44EB : public ::System::Object
{
public:
	::System::String* BF43630FEB579FD5; // 0x10
	::Il2CppArray<::System::Byte>* B0699A5C353D6853; // 0x18
	::System::Int32 BE2567D3F4FDB43E; // 0x20
	::System::Int32 B9A17347199A0A5D; // 0x24
	::System::Boolean BB846B2D6C2C3BB5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6E41554396A44EB__CTOR_OFFSET))(this);
	}
};
