#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RayFire { class RayfireGun; }
namespace System { class Object; }

#define A890D6840B279297_F07E5511D61C79E9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A890D6840B279297_F07E5511D61C79E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int A890D6840B279297_F07E5511D61C79E9_TypeDefinitionIndex = 15928;

class A890D6840B279297_F07E5511D61C79E9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A890D6840B279297_F07E5511D61C79E9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::RayFire::RayfireGun* BB0FAB1CA8D00EB0)
	{
		return ((::System::Void(*)(::PVOID, ::RayFire::RayfireGun*))((::PBYTE)hIl2Cpp + A890D6840B279297_F07E5511D61C79E9_INVOKE_OFFSET))(this, BB0FAB1CA8D00EB0);
	}
};
