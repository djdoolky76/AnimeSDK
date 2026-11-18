#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOKMHLGLIAF___C_IHEDFABGHFF_OFFSET UNITYSDK_OFFSET(0x1303DD80)
#define MOKMHLGLIAF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1303DD30)
#define MOKMHLGLIAF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1303DD70)

inline static constexpr unsigned int MOKMHLGLIAF___c_TypeDefinitionIndex = 65446;

class MOKMHLGLIAF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MOKMHLGLIAF___c_TypeDefinitionIndex)->GetStaticField(0x46B30);
	}
	static ::System::Action** StaticGet___9__12_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MOKMHLGLIAF___c_TypeDefinitionIndex)->GetStaticField(0x46B38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOKMHLGLIAF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKMHLGLIAF___C__CTOR_OFFSET))(this);
	}

	::System::Void IHEDFABGHFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKMHLGLIAF___C_IHEDFABGHFF_OFFSET))(this);
	}
};
