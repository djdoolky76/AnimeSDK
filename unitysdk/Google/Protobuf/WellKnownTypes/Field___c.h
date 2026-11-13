#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::WellKnownTypes { class Field; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3A4250)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A4290)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C___CCTOR_B__71_0_OFFSET UNITYSDK_OFFSET(0x1F3A42A0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Field___c_TypeDefinitionIndex = 5454;

	class Field___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x282A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Field* __cctor_b__71_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Field*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C___CCTOR_B__71_0_OFFSET))(this);
		}

	};
}
