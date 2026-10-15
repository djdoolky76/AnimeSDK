#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::WellKnownTypes { class Any; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B886400)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B886440)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1B886450)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Any___c_TypeDefinitionIndex = 5419;

	class Any___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x247F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Any* __cctor_b__38_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Any*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
}
