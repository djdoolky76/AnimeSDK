#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/ObjectIntPair_1.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class Extension; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B855130)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B855170)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B855180)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C___CTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x1B855190)

namespace Google::Protobuf
{
	inline static constexpr unsigned int ExtensionRegistry___c_TypeDefinitionIndex = 5373;

	class ExtensionRegistry___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::Google::Protobuf::Extension*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::Google::Protobuf::Extension*>**)UnitySDK::FromName("Google.Protobuf", "<>c")->GetStaticField(0x1A880);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::Google::Protobuf::ObjectIntPair_1<::System::Type*>>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::Google::Protobuf::ObjectIntPair_1<::System::Type*>>**)UnitySDK::FromName("Google.Protobuf", "<>c")->GetStaticField(0x1A888);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf", "<>c")->GetStaticField(0x1A890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::ObjectIntPair_1<::System::Type*> __ctor_b__2_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::Google::Protobuf::ObjectIntPair_1<::System::Type*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C___CTOR_B__2_0_OFFSET))(this, a1);
		}

		::Google::Protobuf::Extension* __ctor_b__2_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::Google::Protobuf::Extension*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C___CTOR_B__2_1_OFFSET))(this, a1);
		}

	};
}
