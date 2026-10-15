#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class EnumOptions; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8522B0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8522F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C___CCTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x1B852300)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumOptions___c_TypeDefinitionIndex = 5502;

	class EnumOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x20190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumOptions* __cctor_b__52_0()
		{
			return ((::Google::Protobuf::Reflection::EnumOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C___CCTOR_B__52_0_OFFSET))(this);
		}

	};
}
