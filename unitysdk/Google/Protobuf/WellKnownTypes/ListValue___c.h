#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::WellKnownTypes { class ListValue; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8AF0B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8AF0F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1B8AF100)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int ListValue___c_TypeDefinitionIndex = 5437;

	class ListValue___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x1A9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::ListValue* __cctor_b__25_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C___CCTOR_B__25_0_OFFSET))(this);
		}

	};
}
