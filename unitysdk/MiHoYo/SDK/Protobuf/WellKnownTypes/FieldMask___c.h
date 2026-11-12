#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class FieldMask; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDA1090)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA10D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__TOJSON_B__24_0_OFFSET UNITYSDK_OFFSET(0x1CDA10E0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C___CCTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x1CDA11E0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int FieldMask___c_TypeDefinitionIndex = 36672;

	class FieldMask___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x8C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x8C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _ToJson_b__24_0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__TOJSON_B__24_0_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask* __cctor_b__27_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C___CCTOR_B__27_0_OFFSET))(this);
		}

	};
}
