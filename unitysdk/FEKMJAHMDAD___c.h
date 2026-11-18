#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGAANNPEJCH.h"
#include "unitysdk/System/Object.h"

#define FEKMJAHMDAD___C_IHJIABBFFLM_OFFSET UNITYSDK_OFFSET(0x1AD3B700)
#define FEKMJAHMDAD___C_JOEHDLEENEN_OFFSET UNITYSDK_OFFSET(0x1AD3B6F0)
#define FEKMJAHMDAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD3B6A0)
#define FEKMJAHMDAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3B6E0)

inline static constexpr unsigned int FEKMJAHMDAD___c_TypeDefinitionIndex = 23303;

class FEKMJAHMDAD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FEKMJAHMDAD___c_TypeDefinitionIndex)->GetStaticField(0xBCF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEKMJAHMDAD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKMJAHMDAD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JOEHDLEENEN(::EGAANNPEJCH HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::EGAANNPEJCH))((::PBYTE)hIl2Cpp + FEKMJAHMDAD___C_JOEHDLEENEN_OFFSET))(this, HAAEBCOBKFF);
	}

	::EGAANNPEJCH IHJIABBFFLM(::System::Int32 HAAEBCOBKFF)
	{
		return ((::EGAANNPEJCH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FEKMJAHMDAD___C_IHJIABBFFLM_OFFSET))(this, HAAEBCOBKFF);
	}
};
