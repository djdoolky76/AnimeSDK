#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class SourceCodeInfo; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B87D3A0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B87D3E0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C___CCTOR_B__26_0_OFFSET UNITYSDK_OFFSET(0x1B87D3F0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo___c_TypeDefinitionIndex = 5520;

	class SourceCodeInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x24190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::SourceCodeInfo* __cctor_b__26_0()
		{
			return ((::Google::Protobuf::Reflection::SourceCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C___CCTOR_B__26_0_OFFSET))(this);
		}

	};
}
