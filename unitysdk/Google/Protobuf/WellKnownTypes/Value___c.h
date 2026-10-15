#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::WellKnownTypes { class Value; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8B9320)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B9360)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C___CCTOR_B__56_0_OFFSET UNITYSDK_OFFSET(0x1B8B9370)

namespace Google::Protobuf::WellKnownTypes
{
	class Value___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x1B660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Value* __cctor_b__56_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Value*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C___CCTOR_B__56_0_OFFSET))(this);
		}

	};
}
