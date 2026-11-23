#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F969C1FD7BFA01C2.h"

class F969C1FD7BFA01C2_F07E5511D61C79E9;
namespace RayFire { class RayfireRigid; }

#define A61327B7FA5DEDD8_B3A22517E6C32CDE_OFFSET UNITYSDK_OFFSET(0x2A0DBF0)
#define A61327B7FA5DEDD8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A61327B7FA5DEDD8_TypeDefinitionIndex = 15896;

class A61327B7FA5DEDD8 : public ::F969C1FD7BFA01C2
{
public:
	static ::F969C1FD7BFA01C2_F07E5511D61C79E9** StaticGet_EFC44B1D18252D33()
	{
		return (::F969C1FD7BFA01C2_F07E5511D61C79E9**)Il2CppClass::FromTypeDefinitionIndex(A61327B7FA5DEDD8_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void B3A22517E6C32CDE(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
	{
		return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + A61327B7FA5DEDD8_B3A22517E6C32CDE_OFFSET))(E9D1ABA13C0D414F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A61327B7FA5DEDD8__CTOR_OFFSET))(this);
	}
};
