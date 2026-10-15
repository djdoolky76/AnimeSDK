#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class OneofOptions; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B897820)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B897860)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1B897870)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofOptions___c_TypeDefinitionIndex = 5500;

	class OneofOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x18980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofOptions* __cctor_b__33_0()
		{
			return ((::Google::Protobuf::Reflection::OneofOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
}
