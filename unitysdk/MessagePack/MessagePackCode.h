#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MESSAGEPACK_MESSAGEPACKCODE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD39AF0)
#define MESSAGEPACK_MESSAGEPACKCODE_CHECKBITMASK_OFFSET UNITYSDK_OFFSET(0x1CD3A8E0)
#define MESSAGEPACK_MESSAGEPACKCODE_ISFIXARRAY_OFFSET UNITYSDK_OFFSET(0x1CD3A8F0)
#define MESSAGEPACK_MESSAGEPACKCODE_ISFIXMAP_OFFSET UNITYSDK_OFFSET(0x1CD3A880)
#define MESSAGEPACK_MESSAGEPACKCODE_ISFIXSTR_OFFSET UNITYSDK_OFFSET(0x1CD3A950)
#define MESSAGEPACK_MESSAGEPACKCODE_ISNEGATIVEFIXINT_OFFSET UNITYSDK_OFFSET(0x1CD07450)
#define MESSAGEPACK_MESSAGEPACKCODE_ISPOSITIVEFIXINT_OFFSET UNITYSDK_OFFSET(0x1CD07440)
#define MESSAGEPACK_MESSAGEPACKCODE_TOFORMATNAME_OFFSET UNITYSDK_OFFSET(0x1CCF7ED0)
#define MESSAGEPACK_MESSAGEPACKCODE_TOMESSAGEPACKTYPE_OFFSET UNITYSDK_OFFSET(0x1CD3A7F0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackCode_TypeDefinitionIndex = 7177;

	class MessagePackCode : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_FormatNameTable()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("MessagePack", "MessagePackCode")->GetStaticField(0x4BE80);
		}

		static ::Il2CppArray<::MessagePack::MessagePackType>** StaticGet_TypeLookupTable()
		{
			return (::Il2CppArray<::MessagePack::MessagePackType>**)UnitySDK::FromName("MessagePack", "MessagePackCode")->GetStaticField(0x4BE88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_CCTOR_OFFSET))();
		}

		static ::MessagePack::MessagePackType ToMessagePackType(::System::Byte a1)
		{
			return ((::MessagePack::MessagePackType(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_TOMESSAGEPACKTYPE_OFFSET))(a1);
		}

		static ::System::String* ToFormatName(::System::Byte a1)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_TOFORMATNAME_OFFSET))(a1);
		}

		static ::System::Boolean IsPositiveFixInt(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISPOSITIVEFIXINT_OFFSET))(a1);
		}

		static ::System::Boolean IsNegativeFixInt(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISNEGATIVEFIXINT_OFFSET))(a1);
		}

		static ::System::Boolean IsFixMap(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISFIXMAP_OFFSET))(a1);
		}

		static ::System::Boolean IsFixArray(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISFIXARRAY_OFFSET))(a1);
		}

		static ::System::Boolean IsFixStr(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISFIXSTR_OFFSET))(a1);
		}

		static ::System::Boolean CheckBitmask(::System::Byte a1, ::System::Byte a2, ::System::Byte a3)
		{
			return ((::System::Boolean(*)(::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_CHECKBITMASK_OFFSET))(a1, a2, a3);
		}

	};
}
