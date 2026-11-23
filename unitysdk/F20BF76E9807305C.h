#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A02C529E4F26A97B;
namespace System { class Delegate; }
namespace System::Threading { class AD3C66B368BBC67E; }

#define F20BF76E9807305C_A420CD5FF0544555_1_OFFSET UNITYSDK_OFFSET(0x3B8A530)
#define F20BF76E9807305C_A420CD5FF0544555_OFFSET UNITYSDK_OFFSET(0x3B8A650)
#define F20BF76E9807305C_ED90AE17C6EB6713_OFFSET UNITYSDK_OFFSET(0x3B8A410)
#define F20BF76E9807305C__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B8A750)
#define F20BF76E9807305C__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int F20BF76E9807305C_TypeDefinitionIndex = 11028;

class F20BF76E9807305C : public ::System::Object
{
public:
	static ::System::Threading::AD3C66B368BBC67E** StaticGet_E01BC96BF3C82E50()
	{
		return (::System::Threading::AD3C66B368BBC67E**)Il2CppClass::FromTypeDefinitionIndex(F20BF76E9807305C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Delegate* E55B2DFF5745B3D0; // 0x10
	::System::Object* F577CB9A619137E6; // 0x18
	::A02C529E4F26A97B* BAED2436467E22F4; // 0x20

	::System::Void A420CD5FF0544555()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F20BF76E9807305C_A420CD5FF0544555_OFFSET))(this);
	}

	::System::Void _ctor(::System::Delegate* BC37316376A565D9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + F20BF76E9807305C__CTOR_OFFSET))(this, BC37316376A565D9);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F20BF76E9807305C__CCTOR_OFFSET))();
	}

	static ::System::Void ED90AE17C6EB6713(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + F20BF76E9807305C_ED90AE17C6EB6713_OFFSET))(E5EB06E4FD2C32F7);
	}

	::System::Void A420CD5FF0544555_1(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F20BF76E9807305C_A420CD5FF0544555_1_OFFSET))(this, A86A90C31A146E9C);
	}
};
