#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CGAJNPDDBOP___C_DMEKFOPKGIP_OFFSET UNITYSDK_OFFSET(0x1694D510)
#define CGAJNPDDBOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1694D4C0)
#define CGAJNPDDBOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1694D500)

inline static constexpr unsigned int CGAJNPDDBOP___c_TypeDefinitionIndex = 82250;

class CGAJNPDDBOP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CGAJNPDDBOP___c_TypeDefinitionIndex)->GetStaticField(0x3D600);
	}
	static ::System::Action** StaticGet___9__5_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CGAJNPDDBOP___c_TypeDefinitionIndex)->GetStaticField(0x3D608);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGAJNPDDBOP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAJNPDDBOP___C__CTOR_OFFSET))(this);
	}

	::System::Void DMEKFOPKGIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAJNPDDBOP___C_DMEKFOPKGIP_OFFSET))(this);
	}
};
