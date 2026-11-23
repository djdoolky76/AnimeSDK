#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RayFire { class RayfireBlade; }
namespace System { class Object; }

#define FC3E703A0EE21C6A_F07E5511D61C79E9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define FC3E703A0EE21C6A_F07E5511D61C79E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int FC3E703A0EE21C6A_F07E5511D61C79E9_TypeDefinitionIndex = 15716;

class FC3E703A0EE21C6A_F07E5511D61C79E9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FC3E703A0EE21C6A_F07E5511D61C79E9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::RayFire::RayfireBlade* F16AF713A304115C)
	{
		return ((::System::Void(*)(::PVOID, ::RayFire::RayfireBlade*))((::PBYTE)hIl2Cpp + FC3E703A0EE21C6A_F07E5511D61C79E9_INVOKE_OFFSET))(this, F16AF713A304115C);
	}
};
