#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::WellKnownTypes { class Duration; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B887AF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B887B30)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1B887B40)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Duration___c_TypeDefinitionIndex = 5422;

	class Duration___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x24B70);
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
