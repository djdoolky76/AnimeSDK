#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class MessageOptions; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B890980)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8909C0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C___CCTOR_B__70_0_OFFSET UNITYSDK_OFFSET(0x1B8909D0)

namespace Google::Protobuf::Reflection
{
	class MessageOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x185C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MessageOptions* __cctor_b__70_0()
		{
			return ((::Google::Protobuf::Reflection::MessageOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C___CCTOR_B__70_0_OFFSET))(this);
		}

	};
}
