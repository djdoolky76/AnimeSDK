#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedCodeInfo_Types_Annotation; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC08780)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC087C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C___CCTOR_B__39_0_OFFSET UNITYSDK_OFFSET(0x1BC087D0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_Types_Annotation___c_TypeDefinitionIndex = 35818;

	class GeneratedCodeInfo_Types_Annotation___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x50980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* __cctor_b__39_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C___CCTOR_B__39_0_OFFSET))(this);
		}

	};
}
