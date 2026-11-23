#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FC3E703A0EE21C6A_F07E5511D61C79E9;
namespace RayFire { class RayfireBlade; }

#define FC3E703A0EE21C6A_B3A22517E6C32CDE_OFFSET UNITYSDK_OFFSET(0x29C32F0)
#define FC3E703A0EE21C6A_B75CAD76D01F8938_OFFSET UNITYSDK_OFFSET(0x2946230)
#define FC3E703A0EE21C6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC3E703A0EE21C6A_TypeDefinitionIndex = 15717;

class FC3E703A0EE21C6A : public ::System::Object
{
public:
	static ::FC3E703A0EE21C6A_F07E5511D61C79E9** StaticGet_EFC44B1D18252D33()
	{
		return (::FC3E703A0EE21C6A_F07E5511D61C79E9**)Il2CppClass::FromTypeDefinitionIndex(FC3E703A0EE21C6A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::FC3E703A0EE21C6A_F07E5511D61C79E9* A9441DFA69BE3F54; // 0x10

	static ::System::Void B3A22517E6C32CDE(::RayFire::RayfireBlade* F16AF713A304115C)
	{
		return ((::System::Void(*)(::RayFire::RayfireBlade*))((::PBYTE)hIl2Cpp + FC3E703A0EE21C6A_B3A22517E6C32CDE_OFFSET))(F16AF713A304115C);
	}

	::System::Void B75CAD76D01F8938(::RayFire::RayfireBlade* F16AF713A304115C)
	{
		return ((::System::Void(*)(::PVOID, ::RayFire::RayfireBlade*))((::PBYTE)hIl2Cpp + FC3E703A0EE21C6A_B75CAD76D01F8938_OFFSET))(this, F16AF713A304115C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC3E703A0EE21C6A__CTOR_OFFSET))(this);
	}
};
