#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define BC88D62A2E8054D2_A609A6F6863E9B7E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define BC88D62A2E8054D2_A609A6F6863E9B7E__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B8D0)

inline static constexpr unsigned int BC88D62A2E8054D2_A609A6F6863E9B7E_TypeDefinitionIndex = 7861;

class BC88D62A2E8054D2_A609A6F6863E9B7E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BC88D62A2E8054D2_A609A6F6863E9B7E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* B383F0530E7FBDBD, ::System::String* E0C0689B1CEBE48C, ::System::String* FC4CD65ADCB6ACF2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BC88D62A2E8054D2_A609A6F6863E9B7E_INVOKE_OFFSET))(this, B383F0530E7FBDBD, E0C0689B1CEBE48C, FC4CD65ADCB6ACF2);
	}
};
