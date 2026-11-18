#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGAANNPEJCH.h"
#include "unitysdk/System/Object.h"

#define HHPCNLOLONK___C_GFIPGEJCAKP_OFFSET UNITYSDK_OFFSET(0x1AD57220)
#define HHPCNLOLONK___C_PJEKGLPCBGG_OFFSET UNITYSDK_OFFSET(0x1AD57230)
#define HHPCNLOLONK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD571D0)
#define HHPCNLOLONK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD57210)

inline static constexpr unsigned int HHPCNLOLONK___c_TypeDefinitionIndex = 21865;

class HHPCNLOLONK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HHPCNLOLONK___c_TypeDefinitionIndex)->GetStaticField(0x1D2F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHPCNLOLONK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPCNLOLONK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GFIPGEJCAKP(::EGAANNPEJCH HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::EGAANNPEJCH))((::PBYTE)hIl2Cpp + HHPCNLOLONK___C_GFIPGEJCAKP_OFFSET))(this, HAAEBCOBKFF);
	}

	::EGAANNPEJCH PJEKGLPCBGG(::System::Int32 HAAEBCOBKFF)
	{
		return ((::EGAANNPEJCH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHPCNLOLONK___C_PJEKGLPCBGG_OFFSET))(this, HAAEBCOBKFF);
	}
};
