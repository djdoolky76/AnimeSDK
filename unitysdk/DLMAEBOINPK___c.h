#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DLMAEBOINPK___C_MNNDAIOCBAI_OFFSET UNITYSDK_OFFSET(0xFDC3F00)
#define DLMAEBOINPK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDC3EB0)
#define DLMAEBOINPK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC3EF0)

inline static constexpr unsigned int DLMAEBOINPK___c_TypeDefinitionIndex = 90897;

class DLMAEBOINPK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DLMAEBOINPK___c_TypeDefinitionIndex)->GetStaticField(0x40520);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLMAEBOINPK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMAEBOINPK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MNNDAIOCBAI(::System::Int32 KILPCOMOCMD, ::System::Int32 BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DLMAEBOINPK___C_MNNDAIOCBAI_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
