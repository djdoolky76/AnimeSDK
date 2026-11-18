#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PPODAINACLI;
namespace System { template <typename T> class Action_1; }

#define DIAJAGMCIGK___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x1329CC70)
#define DIAJAGMCIGK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1329CC20)
#define DIAJAGMCIGK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1329CC60)

inline static constexpr unsigned int DIAJAGMCIGK___c_TypeDefinitionIndex = 62414;

class DIAJAGMCIGK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DIAJAGMCIGK___c_TypeDefinitionIndex)->GetStaticField(0x431A0);
	}
	static ::System::Action_1<::PPODAINACLI*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::PPODAINACLI*>**)Il2CppClass::FromTypeDefinitionIndex(DIAJAGMCIGK___c_TypeDefinitionIndex)->GetStaticField(0x431A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIAJAGMCIGK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAJAGMCIGK___C__CTOR_OFFSET))(this);
	}

	::System::Void DHIPFOHDMOE(::PPODAINACLI* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::PVOID, ::PPODAINACLI*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK___C_DHIPFOHDMOE_OFFSET))(this, EMBMHDIAGDE);
	}
};
