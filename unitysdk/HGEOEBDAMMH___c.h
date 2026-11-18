#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMJBMMOJLGA;
namespace System { template <typename T> class Action_1; }

#define HGEOEBDAMMH___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0x14D273F0)
#define HGEOEBDAMMH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D273A0)
#define HGEOEBDAMMH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D273E0)

inline static constexpr unsigned int HGEOEBDAMMH___c_TypeDefinitionIndex = 92368;

class HGEOEBDAMMH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HGEOEBDAMMH___c_TypeDefinitionIndex)->GetStaticField(0x3B0B0);
	}
	static ::System::Action_1<::KMJBMMOJLGA*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::KMJBMMOJLGA*>**)Il2CppClass::FromTypeDefinitionIndex(HGEOEBDAMMH___c_TypeDefinitionIndex)->GetStaticField(0x3B0B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGEOEBDAMMH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEOEBDAMMH___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::KMJBMMOJLGA* EEGGIAOBIGG)
	{
		return ((::System::Void(*)(::PVOID, ::KMJBMMOJLGA*))((::PBYTE)hIl2Cpp + HGEOEBDAMMH___C_PLACCFJJGGK_OFFSET))(this, EEGGIAOBIGG);
	}
};
