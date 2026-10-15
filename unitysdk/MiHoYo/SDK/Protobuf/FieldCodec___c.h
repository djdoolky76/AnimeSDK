#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_PROTOBUF_FIELDCODEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBE3D90)
#define MIHOYO_SDK_PROTOBUF_FIELDCODEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE3DD0)
#define MIHOYO_SDK_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_0_OFFSET UNITYSDK_OFFSET(0x1BBE3E20)
#define MIHOYO_SDK_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_1_OFFSET UNITYSDK_OFFSET(0x1BBE3E40)
#define MIHOYO_SDK_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_0_OFFSET UNITYSDK_OFFSET(0x1BBE3DE0)
#define MIHOYO_SDK_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_1_OFFSET UNITYSDK_OFFSET(0x1BBE3E00)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int FieldCodec___c_TypeDefinitionIndex = 35715;

	class FieldCodec___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MiHoYo::SDK::Protobuf::CodedInputStream*, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::MiHoYo::SDK::Protobuf::CodedInputStream*, ::System::Int32>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "<>c")->GetStaticField(0x4CB30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "<>c")->GetStaticField(0x4CB38);
		}

		static ::System::Func_2<::MiHoYo::SDK::Protobuf::CodedInputStream*, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::MiHoYo::SDK::Protobuf::CodedInputStream*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "<>c")->GetStaticField(0x4CB40);
		}

		static ::System::Action** StaticGet___9__3_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "<>c")->GetStaticField(0x4CB48);
		}

		static ::System::Action** StaticGet___9__0_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "<>c")->GetStaticField(0x4CB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FIELDCODEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FIELDCODEC___C_CTOR_OFFSET))(this);
		}

		::System::String* _ForString_b__0_0(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_0_OFFSET))(this, a1);
		}

		::System::Void _ForString_b__0_1(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ForInt32_b__3_0(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _ForInt32_b__3_1(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_1_OFFSET))(this, a1, a2);
		}

	};
}
