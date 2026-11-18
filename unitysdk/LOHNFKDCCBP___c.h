#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LOHNFKDCCBP;

#define LOHNFKDCCBP___C_FDEBAEMBJJL_OFFSET UNITYSDK_OFFSET(0x1FAAB640)
#define LOHNFKDCCBP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAAB5F0)
#define LOHNFKDCCBP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAAB630)

inline static constexpr unsigned int LOHNFKDCCBP___c_TypeDefinitionIndex = 18283;

class LOHNFKDCCBP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LOHNFKDCCBP___c_TypeDefinitionIndex)->GetStaticField(0x84F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOHNFKDCCBP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHNFKDCCBP___C__CTOR_OFFSET))(this);
	}

	::LOHNFKDCCBP* FDEBAEMBJJL()
	{
		return ((::LOHNFKDCCBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHNFKDCCBP___C_FDEBAEMBJJL_OFFSET))(this);
	}
};
