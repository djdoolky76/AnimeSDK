#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class SourceCodeInfo; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBF0BC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF0C00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1BBF0C10)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo___c_TypeDefinitionIndex = 35814;

	class SourceCodeInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x5F360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo* __cctor_b__25_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C___CCTOR_B__25_0_OFFSET))(this);
		}

	};
}
