#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define E4659A9E78F63F4F__CTOR_OFFSET UNITYSDK_OFFSET(0x3212AC0)

inline static constexpr unsigned int E4659A9E78F63F4F_TypeDefinitionIndex = 10682;

struct alignas(8) E4659A9E78F63F4F
{
	::System::String* A1AD49ABC0442489; // 0x10
	::System::Object* E8F3148A854C0045; // 0x18
	::System::Type* A103104C8ACB8821; // 0x20

	::System::Void _ctor(::System::String* B4E0EB57DE3C396D, ::System::Object* EFCD4ADB02470C41, ::System::Type* AB2EB8B10B5AB66B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + E4659A9E78F63F4F__CTOR_OFFSET))(this, B4E0EB57DE3C396D, EFCD4ADB02470C41, AB2EB8B10B5AB66B);
	}
};
