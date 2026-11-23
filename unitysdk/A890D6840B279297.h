#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A890D6840B279297_F07E5511D61C79E9;
namespace RayFire { class RayfireGun; }

#define A890D6840B279297_B3A22517E6C32CDE_OFFSET UNITYSDK_OFFSET(0x2A106C0)
#define A890D6840B279297_B75CAD76D01F8938_OFFSET UNITYSDK_OFFSET(0x2946230)
#define A890D6840B279297__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A890D6840B279297_TypeDefinitionIndex = 15929;

class A890D6840B279297 : public ::System::Object
{
public:
	static ::A890D6840B279297_F07E5511D61C79E9** StaticGet_EFC44B1D18252D33()
	{
		return (::A890D6840B279297_F07E5511D61C79E9**)Il2CppClass::FromTypeDefinitionIndex(A890D6840B279297_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::A890D6840B279297_F07E5511D61C79E9* A9441DFA69BE3F54; // 0x10

	::System::Void B75CAD76D01F8938(::RayFire::RayfireGun* BB0FAB1CA8D00EB0)
	{
		return ((::System::Void(*)(::PVOID, ::RayFire::RayfireGun*))((::PBYTE)hIl2Cpp + A890D6840B279297_B75CAD76D01F8938_OFFSET))(this, BB0FAB1CA8D00EB0);
	}

	static ::System::Void B3A22517E6C32CDE(::RayFire::RayfireGun* BB0FAB1CA8D00EB0)
	{
		return ((::System::Void(*)(::RayFire::RayfireGun*))((::PBYTE)hIl2Cpp + A890D6840B279297_B3A22517E6C32CDE_OFFSET))(BB0FAB1CA8D00EB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A890D6840B279297__CTOR_OFFSET))(this);
	}
};
