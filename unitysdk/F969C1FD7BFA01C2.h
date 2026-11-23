#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F969C1FD7BFA01C2_F07E5511D61C79E9;
namespace RayFire { class RayfireRigid; }

#define F969C1FD7BFA01C2_B75CAD76D01F8938_OFFSET UNITYSDK_OFFSET(0x2946230)
#define F969C1FD7BFA01C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F969C1FD7BFA01C2_TypeDefinitionIndex = 15837;

class F969C1FD7BFA01C2 : public ::System::Object
{
public:
	::F969C1FD7BFA01C2_F07E5511D61C79E9* A9441DFA69BE3F54; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F969C1FD7BFA01C2__CTOR_OFFSET))(this);
	}

	::System::Void B75CAD76D01F8938(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
	{
		return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + F969C1FD7BFA01C2_B75CAD76D01F8938_OFFSET))(this, E9D1ABA13C0D414F);
	}
};
