#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class FileOptions; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B88A730)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B88A770)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C___CCTOR_B__215_0_OFFSET UNITYSDK_OFFSET(0x1B88A780)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileOptions___c_TypeDefinitionIndex = 5491;

	class FileOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1DFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileOptions* __cctor_b__215_0()
		{
			return ((::Google::Protobuf::Reflection::FileOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C___CCTOR_B__215_0_OFFSET))(this);
		}

	};
}
