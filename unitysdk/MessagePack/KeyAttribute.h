#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Nullable; }
namespace System { class String; }

#define MESSAGEPACK_KEYATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB61200)
#define MESSAGEPACK_KEYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB611E0)
#define MESSAGEPACK_KEYATTRIBUTE_GET_INTKEY_OFFSET UNITYSDK_OFFSET(0x1BB611C0)
#define MESSAGEPACK_KEYATTRIBUTE_GET_STRINGKEY_OFFSET UNITYSDK_OFFSET(0x1BB611D0)

namespace MessagePack
{
	class KeyAttribute : public ::System::Attribute
	{
	public:
		::System::String* _StringKey_k__BackingField; // 0x10
		::System::Nullable* _IntKey_k__BackingField; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_KEYATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_KEYATTRIBUTE_CTOR_1_OFFSET))(this, a1);
		}

		::System::Nullable* get_IntKey()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_KEYATTRIBUTE_GET_INTKEY_OFFSET))(this);
		}

		::System::String* get_StringKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_KEYATTRIBUTE_GET_STRINGKEY_OFFSET))(this);
		}

	};
}
