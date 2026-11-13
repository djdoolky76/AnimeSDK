#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class ExtensionRangeOptions; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BECEC00)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BECEC40)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1BECEC50)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ExtensionRangeOptions___c_TypeDefinitionIndex = 5474;

	class ExtensionRangeOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x20760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ExtensionRangeOptions* __cctor_b__33_0()
		{
			return ((::Google::Protobuf::Reflection::ExtensionRangeOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
}
