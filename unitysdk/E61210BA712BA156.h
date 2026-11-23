#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E61210BA712BA156_F07E5511D61C79E9;
namespace RayFire { class RayfireBomb; }

#define E61210BA712BA156_B3A22517E6C32CDE_OFFSET UNITYSDK_OFFSET(0x29A6550)
#define E61210BA712BA156_B75CAD76D01F8938_OFFSET UNITYSDK_OFFSET(0x2946230)
#define E61210BA712BA156__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E61210BA712BA156_TypeDefinitionIndex = 15617;

class E61210BA712BA156 : public ::System::Object
{
public:
	static ::E61210BA712BA156_F07E5511D61C79E9** StaticGet_EFC44B1D18252D33()
	{
		return (::E61210BA712BA156_F07E5511D61C79E9**)Il2CppClass::FromTypeDefinitionIndex(E61210BA712BA156_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::E61210BA712BA156_F07E5511D61C79E9* A9441DFA69BE3F54; // 0x10

	::System::Void B75CAD76D01F8938(::RayFire::RayfireBomb* AB7D547280ACC742)
	{
		return ((::System::Void(*)(::PVOID, ::RayFire::RayfireBomb*))((::PBYTE)hIl2Cpp + E61210BA712BA156_B75CAD76D01F8938_OFFSET))(this, AB7D547280ACC742);
	}

	static ::System::Void B3A22517E6C32CDE(::RayFire::RayfireBomb* AB7D547280ACC742)
	{
		return ((::System::Void(*)(::RayFire::RayfireBomb*))((::PBYTE)hIl2Cpp + E61210BA712BA156_B3A22517E6C32CDE_OFFSET))(AB7D547280ACC742);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E61210BA712BA156__CTOR_OFFSET))(this);
	}
};
