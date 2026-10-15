#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::WellKnownTypes { class Struct; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8B21A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B21E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1B8B21F0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Struct___c_TypeDefinitionIndex = 5432;

	class Struct___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x1ACB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Struct* __cctor_b__25_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C___CCTOR_B__25_0_OFFSET))(this);
		}

	};
}
