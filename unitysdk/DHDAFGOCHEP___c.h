#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HAFLGNENJDI;
namespace System { template <typename T> class Action_1; }

#define DHDAFGOCHEP___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x1A1E07E0)
#define DHDAFGOCHEP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1E0790)
#define DHDAFGOCHEP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E07D0)

inline static constexpr unsigned int DHDAFGOCHEP___c_TypeDefinitionIndex = 85338;

class DHDAFGOCHEP___c : public ::System::Object
{
public:
	static ::System::Action_1<::HAFLGNENJDI*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::HAFLGNENJDI*>**)Il2CppClass::FromTypeDefinitionIndex(DHDAFGOCHEP___c_TypeDefinitionIndex)->GetStaticField(0x3D890);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DHDAFGOCHEP___c_TypeDefinitionIndex)->GetStaticField(0x3D898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHDAFGOCHEP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDAFGOCHEP___C__CTOR_OFFSET))(this);
	}

	::System::Void DHIPFOHDMOE(::HAFLGNENJDI* OALCOHFBEAB)
	{
		return ((::System::Void(*)(::PVOID, ::HAFLGNENJDI*))((::PBYTE)hIl2Cpp + DHDAFGOCHEP___C_DHIPFOHDMOE_OFFSET))(this, OALCOHFBEAB);
	}
};
