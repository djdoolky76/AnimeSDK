#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class GeetestView; }
namespace System { class Object; }

#define A0F28B7671C52743_E90936D068CF0279_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A0F28B7671C52743_E90936D068CF0279__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int A0F28B7671C52743_E90936D068CF0279_TypeDefinitionIndex = 12807;

class A0F28B7671C52743_E90936D068CF0279 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_E90936D068CF0279__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::MiHoYo::SDK::GeetestView* F45A155F61126DA2)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*))((::PBYTE)hIl2Cpp + A0F28B7671C52743_E90936D068CF0279_INVOKE_OFFSET))(this, F45A155F61126DA2);
	}
};
