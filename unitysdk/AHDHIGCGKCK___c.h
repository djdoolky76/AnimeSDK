#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHGOHPEGJKP.h"
#include "unitysdk/System/Object.h"

#define AHDHIGCGKCK___C_CBPAPIFAGJB_OFFSET UNITYSDK_OFFSET(0x1AD023A0)
#define AHDHIGCGKCK___C_ODCOJFPPFIO_OFFSET UNITYSDK_OFFSET(0x1AD02390)
#define AHDHIGCGKCK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD02340)
#define AHDHIGCGKCK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD02380)

inline static constexpr unsigned int AHDHIGCGKCK___c_TypeDefinitionIndex = 24205;

class AHDHIGCGKCK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AHDHIGCGKCK___c_TypeDefinitionIndex)->GetStaticField(0x1E910);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHDHIGCGKCK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDHIGCGKCK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 ODCOJFPPFIO(::IHGOHPEGJKP HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::IHGOHPEGJKP))((::PBYTE)hIl2Cpp + AHDHIGCGKCK___C_ODCOJFPPFIO_OFFSET))(this, HAAEBCOBKFF);
	}

	::IHGOHPEGJKP CBPAPIFAGJB(::System::Int32 HAAEBCOBKFF)
	{
		return ((::IHGOHPEGJKP(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHDHIGCGKCK___C_CBPAPIFAGJB_OFFSET))(this, HAAEBCOBKFF);
	}
};
