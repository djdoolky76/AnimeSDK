#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F969C1FD7BFA01C2.h"

class F969C1FD7BFA01C2_F07E5511D61C79E9;
namespace RayFire { class RayfireRigid; }

#define A691754963E04BF0_B3A22517E6C32CDE_OFFSET UNITYSDK_OFFSET(0x2A0DC90)
#define A691754963E04BF0__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A691754963E04BF0_TypeDefinitionIndex = 15926;

class A691754963E04BF0 : public ::F969C1FD7BFA01C2
{
public:
	static ::F969C1FD7BFA01C2_F07E5511D61C79E9** StaticGet_EFC44B1D18252D33()
	{
		return (::F969C1FD7BFA01C2_F07E5511D61C79E9**)Il2CppClass::FromTypeDefinitionIndex(A691754963E04BF0_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A691754963E04BF0__CTOR_OFFSET))(this);
	}

	static ::System::Void B3A22517E6C32CDE(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
	{
		return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + A691754963E04BF0_B3A22517E6C32CDE_OFFSET))(E9D1ABA13C0D414F);
	}
};
