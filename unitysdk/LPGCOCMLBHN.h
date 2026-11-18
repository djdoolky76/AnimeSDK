#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFENLHJMHBP;
class IDGDIFDMIDP;

#define LPGCOCMLBHN_LLGHPPFCOAM_OFFSET UNITYSDK_OFFSET(0x151B8180)
#define LPGCOCMLBHN__CCTOR_OFFSET UNITYSDK_OFFSET(0x151B8160)

inline static constexpr unsigned int LPGCOCMLBHN_TypeDefinitionIndex = 43912;

class LPGCOCMLBHN : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_APADLHLFIML()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LPGCOCMLBHN_TypeDefinitionIndex)->GetStaticField(0x10AD0);
	}
	static ::System::Int32* StaticGet_HGBKINOJEKG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LPGCOCMLBHN_TypeDefinitionIndex)->GetStaticField(0x10AD4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPGCOCMLBHN__CCTOR_OFFSET))();
	}

	static ::CFENLHJMHBP* LLGHPPFCOAM(::IDGDIFDMIDP* LJBPECKCCEA)
	{
		return ((::CFENLHJMHBP*(*)(::IDGDIFDMIDP*))((::PBYTE)hIl2Cpp + LPGCOCMLBHN_LLGHPPFCOAM_OFFSET))(LJBPECKCCEA);
	}
};
