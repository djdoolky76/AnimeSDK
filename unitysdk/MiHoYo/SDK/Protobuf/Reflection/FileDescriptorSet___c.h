#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptorSet; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6A3350)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A3390)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C___CCTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x1C6A33A0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorSet___c_TypeDefinitionIndex = 36687;

	class FileDescriptorSet___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x66F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet* __cctor_b__24_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C___CCTOR_B__24_0_OFFSET))(this);
		}

	};
}
