#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCEGMGDIJO;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HKGPHAMAJOG_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x16CF7040)
#define HKGPHAMAJOG_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x16CF71E0)
#define HKGPHAMAJOG_PKENCCBIECJ_OFFSET UNITYSDK_OFFSET(0x16CF7460)
#define HKGPHAMAJOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CF6F70)

inline static constexpr unsigned int HKGPHAMAJOG_TypeDefinitionIndex = 58660;

class HKGPHAMAJOG : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::FGCEGMGDIJO*>** StaticGet_MHBCMJGKMHF()
	{
		return (::System::Collections::Generic::HashSet_1<::FGCEGMGDIJO*>**)Il2CppClass::FromTypeDefinitionIndex(HKGPHAMAJOG_TypeDefinitionIndex)->GetStaticField(0x37B20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKGPHAMAJOG__CCTOR_OFFSET))();
	}

	static ::System::Void ANPBCLAFCJB(::FGCEGMGDIJO* DBEGNAMMHKA)
	{
		return ((::System::Void(*)(::FGCEGMGDIJO*))((::PBYTE)hIl2Cpp + HKGPHAMAJOG_ANPBCLAFCJB_OFFSET))(DBEGNAMMHKA);
	}

	static ::System::Void FLHNGDLANDC(::FGCEGMGDIJO* DBEGNAMMHKA)
	{
		return ((::System::Void(*)(::FGCEGMGDIJO*))((::PBYTE)hIl2Cpp + HKGPHAMAJOG_FLHNGDLANDC_OFFSET))(DBEGNAMMHKA);
	}

	static ::System::Void PKENCCBIECJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKGPHAMAJOG_PKENCCBIECJ_OFFSET))();
	}
};
