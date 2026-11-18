#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMAOOJDIFLN;

#define BMAOOJDIFLN___C_MCBLMPNBBHO_OFFSET UNITYSDK_OFFSET(0x1FB33B90)
#define BMAOOJDIFLN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB33B40)
#define BMAOOJDIFLN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB33B80)

inline static constexpr unsigned int BMAOOJDIFLN___c_TypeDefinitionIndex = 18135;

class BMAOOJDIFLN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BMAOOJDIFLN___c_TypeDefinitionIndex)->GetStaticField(0x85F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMAOOJDIFLN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAOOJDIFLN___C__CTOR_OFFSET))(this);
	}

	::BMAOOJDIFLN* MCBLMPNBBHO()
	{
		return ((::BMAOOJDIFLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAOOJDIFLN___C_MCBLMPNBBHO_OFFSET))(this);
	}
};
