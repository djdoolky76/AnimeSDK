#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFCHFMBGNFH;

#define MDLFADMPNJB_EKNGBFAJBNP_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E5F7640)
#define MDLFADMPNJB_EKNGBFAJBNP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7780)
#define MDLFADMPNJB_EKNGBFAJBNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7770)

inline static constexpr unsigned int MDLFADMPNJB_EKNGBFAJBNP_TypeDefinitionIndex = 34059;

class MDLFADMPNJB_EKNGBFAJBNP : public ::System::Object
{
public:
	static ::MDLFADMPNJB_EKNGBFAJBNP** StaticGet_NJLLMPCDOEB()
	{
		return (::MDLFADMPNJB_EKNGBFAJBNP**)Il2CppClass::FromTypeDefinitionIndex(MDLFADMPNJB_EKNGBFAJBNP_TypeDefinitionIndex)->GetStaticField(0x2A100);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLFADMPNJB_EKNGBFAJBNP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDLFADMPNJB_EKNGBFAJBNP__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::OFCHFMBGNFH* HAAEBCOBKFF, ::OFCHFMBGNFH* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::OFCHFMBGNFH*, ::OFCHFMBGNFH*))((::PBYTE)hIl2Cpp + MDLFADMPNJB_EKNGBFAJBNP_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
