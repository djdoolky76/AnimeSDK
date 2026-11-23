#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RayFire { class RayfireRigid; }
namespace System { class Object; }

#define F969C1FD7BFA01C2_F07E5511D61C79E9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F969C1FD7BFA01C2_F07E5511D61C79E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int F969C1FD7BFA01C2_F07E5511D61C79E9_TypeDefinitionIndex = 15836;

class F969C1FD7BFA01C2_F07E5511D61C79E9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F969C1FD7BFA01C2_F07E5511D61C79E9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
	{
		return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + F969C1FD7BFA01C2_F07E5511D61C79E9_INVOKE_OFFSET))(this, E9D1ABA13C0D414F);
	}
};
