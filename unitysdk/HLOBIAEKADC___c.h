#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HLOBIAEKADC___C_GPKLFECFENO_OFFSET UNITYSDK_OFFSET(0x17B0FEB0)
#define HLOBIAEKADC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B0FE60)
#define HLOBIAEKADC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B0FEA0)

inline static constexpr unsigned int HLOBIAEKADC___c_TypeDefinitionIndex = 61912;

class HLOBIAEKADC___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HLOBIAEKADC___c_TypeDefinitionIndex)->GetStaticField(0x3B0F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HLOBIAEKADC___c_TypeDefinitionIndex)->GetStaticField(0x3B0F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLOBIAEKADC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOBIAEKADC___C__CTOR_OFFSET))(this);
	}

	::System::Void GPKLFECFENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOBIAEKADC___C_GPKLFECFENO_OFFSET))(this);
	}
};
