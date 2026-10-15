#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::WellKnownTypes { class Duration; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8A7F40)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A7F80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1B8A7F90)

namespace Google::Protobuf::WellKnownTypes
{
	class Duration___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x19AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Duration* __cctor_b__46_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Duration*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C___CCTOR_B__46_0_OFFSET))(this);
		}

	};
}
