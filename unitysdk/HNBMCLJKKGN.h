#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APFAOGMDCIH;
namespace System { class String; }

#define HNBMCLJKKGN_JKHFEJJKJCC_OFFSET UNITYSDK_OFFSET(0x1F0A4E10)
#define HNBMCLJKKGN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0A4DE0)

inline static constexpr unsigned int HNBMCLJKKGN_TypeDefinitionIndex = 28710;

class HNBMCLJKKGN : public ::System::Object
{
public:
	static ::System::Object** StaticGet_JHCJDLDLGIC()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HNBMCLJKKGN_TypeDefinitionIndex)->GetStaticField(0x25D40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNBMCLJKKGN__CCTOR_OFFSET))();
	}

	static ::APFAOGMDCIH* JKHFEJJKJCC(::System::String* KIADEMPHCIB)
	{
		return ((::APFAOGMDCIH*(*)(::System::String*))((::PBYTE)hIl2Cpp + HNBMCLJKKGN_JKHFEJJKJCC_OFFSET))(KIADEMPHCIB);
	}
};
