#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class EnumValueOptions; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B854A00)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B854A40)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1B854A50)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueOptions___c_TypeDefinitionIndex = 5504;

	class EnumValueOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x206E0);
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
