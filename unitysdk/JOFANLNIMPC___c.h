#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JOFANLNIMPC.h"

class JOFANLNIMPC_HKLKHCGCJPP;

#define JOFANLNIMPC___C_FDICBAPLIAJ_OFFSET UNITYSDK_OFFSET(0x1C3734C0)
#define JOFANLNIMPC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C373470)
#define JOFANLNIMPC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3734B0)

inline static constexpr unsigned int JOFANLNIMPC___c_TypeDefinitionIndex = 54084;

class JOFANLNIMPC___c : public ::System::Object
{
public:
	static ::JOFANLNIMPC_HKLKHCGCJPP** StaticGet___9__32_0()
	{
		return (::JOFANLNIMPC_HKLKHCGCJPP**)Il2CppClass::FromTypeDefinitionIndex(JOFANLNIMPC___c_TypeDefinitionIndex)->GetStaticField(0x36610);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JOFANLNIMPC___c_TypeDefinitionIndex)->GetStaticField(0x36618);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOFANLNIMPC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC___C__CTOR_OFFSET))(this);
	}

	::System::Void FDICBAPLIAJ(::JOFANLNIMPC& PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::JOFANLNIMPC&))((::PBYTE)hIl2Cpp + JOFANLNIMPC___C_FDICBAPLIAJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
