#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::WellKnownTypes { class Enum; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B889610)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B889650)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C___CCTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x1B889660)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Enum___c_TypeDefinitionIndex = 5451;

	class Enum___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x24F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Enum* __cctor_b__45_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Enum*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C___CCTOR_B__45_0_OFFSET))(this);
		}

	};
}
