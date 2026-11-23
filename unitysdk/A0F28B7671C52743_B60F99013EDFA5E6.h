#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A0F28B7671C52743_B60F99013EDFA5E6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A0F28B7671C52743_B60F99013EDFA5E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int A0F28B7671C52743_B60F99013EDFA5E6_TypeDefinitionIndex = 12822;

class A0F28B7671C52743_B60F99013EDFA5E6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_B60F99013EDFA5E6__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B38A9B2983CE63FE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + A0F28B7671C52743_B60F99013EDFA5E6_INVOKE_OFFSET))(this, B38A9B2983CE63FE);
	}
};
