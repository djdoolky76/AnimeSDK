#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F9C5FD3FEFD5CB79_B2793F838BF42F01_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define F9C5FD3FEFD5CB79_B2793F838BF42F01__CTOR_OFFSET UNITYSDK_OFFSET(0x2AC4850)

inline static constexpr unsigned int F9C5FD3FEFD5CB79_B2793F838BF42F01_TypeDefinitionIndex = 19188;

class F9C5FD3FEFD5CB79_B2793F838BF42F01 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F9C5FD3FEFD5CB79_B2793F838BF42F01__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::Il2CppArray<::System::Single>* AE95AB75CFC5E858, ::Il2CppArray<::System::Single>* F55565AF824B7E5D, ::System::Int32 F0CE3AB8640F63AA, ::System::Int32 A630690877D8F5E1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + F9C5FD3FEFD5CB79_B2793F838BF42F01_INVOKE_OFFSET))(this, AE95AB75CFC5E858, F55565AF824B7E5D, F0CE3AB8640F63AA, A630690877D8F5E1);
	}
};
