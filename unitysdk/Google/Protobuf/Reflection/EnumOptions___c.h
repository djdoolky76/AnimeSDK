#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class EnumOptions; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B872580)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8725C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C___CCTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x1B8725D0)

namespace Google::Protobuf::Reflection
{
	class EnumOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1C7E0);
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
