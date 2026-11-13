#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class IMessage; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3940F0)
#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F394130)
#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1F394140)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SingleFieldAccessor___c_TypeDefinitionIndex = 5580;

	class SingleFieldAccessor___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x23510);
		}

		static ::System::Func_2<::Google::Protobuf::IMessage*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::Google::Protobuf::IMessage*, ::System::Boolean>**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x23518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__3_0(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C___CTOR_B__3_0_OFFSET))(this, a1);
		}

	};
}
