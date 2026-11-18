#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AGLHCNIJPGH___C_NMIKBNDFGKH_OFFSET UNITYSDK_OFFSET(0x135E16C0)
#define AGLHCNIJPGH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135E1670)
#define AGLHCNIJPGH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x135E16B0)

inline static constexpr unsigned int AGLHCNIJPGH___c_TypeDefinitionIndex = 70869;

class AGLHCNIJPGH___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__19_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AGLHCNIJPGH___c_TypeDefinitionIndex)->GetStaticField(0x42D00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AGLHCNIJPGH___c_TypeDefinitionIndex)->GetStaticField(0x42D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGLHCNIJPGH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLHCNIJPGH___C__CTOR_OFFSET))(this);
	}

	::System::Void NMIKBNDFGKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLHCNIJPGH___C_NMIKBNDFGKH_OFFSET))(this);
	}
};
