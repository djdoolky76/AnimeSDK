#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A0F28B7671C52743_ACFE5CA70A4CC1B3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A0F28B7671C52743_ACFE5CA70A4CC1B3__CTOR_OFFSET UNITYSDK_OFFSET(0x3A00A00)

inline static constexpr unsigned int A0F28B7671C52743_ACFE5CA70A4CC1B3_TypeDefinitionIndex = 12818;

class A0F28B7671C52743_ACFE5CA70A4CC1B3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_ACFE5CA70A4CC1B3__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::System::Boolean FBF3AC291087F95C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + A0F28B7671C52743_ACFE5CA70A4CC1B3_INVOKE_OFFSET))(this, B8334CB64332323A, FBF3AC291087F95C);
	}
};
