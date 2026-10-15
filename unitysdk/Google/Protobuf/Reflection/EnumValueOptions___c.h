#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class EnumValueOptions; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B874CD0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B874D10)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1B874D20)

namespace Google::Protobuf::Reflection
{
	class EnumValueOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1CA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumValueOptions* __cctor_b__43_0()
		{
			return ((::Google::Protobuf::Reflection::EnumValueOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
}
