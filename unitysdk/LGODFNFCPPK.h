#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGODFNFCPPK_DBFAJBLCPAH_OFFSET UNITYSDK_OFFSET(0x1A609790)
#define LGODFNFCPPK_EEHHPKDMDNM_OFFSET UNITYSDK_OFFSET(0x1A609860)
#define LGODFNFCPPK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6096F0)

inline static constexpr unsigned int LGODFNFCPPK_TypeDefinitionIndex = 72090;

class LGODFNFCPPK : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::DJPBMMDAFKB>** StaticGet_IPCJHLILJHI()
	{
		return (::System::Collections::Generic::List_1<::DJPBMMDAFKB>**)Il2CppClass::FromTypeDefinitionIndex(LGODFNFCPPK_TypeDefinitionIndex)->GetStaticField(0x4D5F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGODFNFCPPK__CCTOR_OFFSET))();
	}

	static ::System::Boolean DBFAJBLCPAH(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Boolean(*)(::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + LGODFNFCPPK_DBFAJBLCPAH_OFFSET))(LADPIPOMBJM);
	}

	static ::CJIEIHEDMME* EEHHPKDMDNM()
	{
		return ((::CJIEIHEDMME*(*)())((::PBYTE)hIl2Cpp + LGODFNFCPPK_EEHHPKDMDNM_OFFSET))();
	}
};
