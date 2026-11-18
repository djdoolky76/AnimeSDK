#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HBNJPJDEKGE;

#define HBNJPJDEKGE___C_FDEBAEMBJJL_OFFSET UNITYSDK_OFFSET(0x1FF6DFF0)
#define HBNJPJDEKGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF6DFA0)
#define HBNJPJDEKGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6DFE0)

inline static constexpr unsigned int HBNJPJDEKGE___c_TypeDefinitionIndex = 18215;

class HBNJPJDEKGE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HBNJPJDEKGE___c_TypeDefinitionIndex)->GetStaticField(0x8120);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBNJPJDEKGE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNJPJDEKGE___C__CTOR_OFFSET))(this);
	}

	::HBNJPJDEKGE* FDEBAEMBJJL()
	{
		return ((::HBNJPJDEKGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNJPJDEKGE___C_FDEBAEMBJJL_OFFSET))(this);
	}
};
