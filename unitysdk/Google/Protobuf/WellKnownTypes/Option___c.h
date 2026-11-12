#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::WellKnownTypes { class Option; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA39350)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA39390)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C___CCTOR_B__30_0_OFFSET UNITYSDK_OFFSET(0x1CA393A0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Option___c_TypeDefinitionIndex = 5460;

	class Option___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x24990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Option* __cctor_b__30_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Option*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C___CCTOR_B__30_0_OFFSET))(this);
		}

	};
}
