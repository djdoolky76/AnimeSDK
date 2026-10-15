#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class FileDescriptorSet; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B886EA0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B886EE0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1B886EF0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorSet___c_TypeDefinitionIndex = 5458;

	class FileDescriptorSet___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1D920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileDescriptorSet* __cctor_b__25_0()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptorSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C___CCTOR_B__25_0_OFFSET))(this);
		}

	};
}
