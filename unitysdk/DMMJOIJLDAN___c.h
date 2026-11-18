#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DMMJOIJLDAN___C_DCHGKCAKGAA_OFFSET UNITYSDK_OFFSET(0x7FC7BA0)
#define DMMJOIJLDAN___C_PPPNMGDAGBL_OFFSET UNITYSDK_OFFSET(0x7FC7A90)
#define DMMJOIJLDAN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FC7A40)
#define DMMJOIJLDAN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC7A80)

inline static constexpr unsigned int DMMJOIJLDAN___c_TypeDefinitionIndex = 63543;

class DMMJOIJLDAN___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DMMJOIJLDAN___c_TypeDefinitionIndex)->GetStaticField(0x3D980);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DMMJOIJLDAN___c_TypeDefinitionIndex)->GetStaticField(0x3D988);
	}
	static ::System::Action** StaticGet___9__1_3()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DMMJOIJLDAN___c_TypeDefinitionIndex)->GetStaticField(0x3D990);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMMJOIJLDAN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMJOIJLDAN___C__CTOR_OFFSET))(this);
	}

	::System::Void PPPNMGDAGBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMJOIJLDAN___C_PPPNMGDAGBL_OFFSET))(this);
	}

	::System::Void DCHGKCAKGAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMJOIJLDAN___C_DCHGKCAKGAA_OFFSET))(this);
	}
};
