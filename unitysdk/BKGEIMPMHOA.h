#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BKGEIMPMHOA_EDIODBOKIJE.h"

namespace System { class String; }

#define BKGEIMPMHOA_CLHIPBFOEAJ_OFFSET UNITYSDK_OFFSET(0x1F3DA020)
#define BKGEIMPMHOA_NJOJMPDLFFH_OFFSET UNITYSDK_OFFSET(0x1F3DA080)
#define BKGEIMPMHOA_OLDENGLLOAD_OFFSET UNITYSDK_OFFSET(0x1F3DA100)
#define BKGEIMPMHOA_PHCPAKMBBOD_OFFSET UNITYSDK_OFFSET(0x1F3DA0C0)

inline static constexpr unsigned int BKGEIMPMHOA_TypeDefinitionIndex = 8426;

class BKGEIMPMHOA : public ::System::Object
{
public:
	static ::BKGEIMPMHOA_EDIODBOKIJE CLHIPBFOEAJ()
	{
		return ((::BKGEIMPMHOA_EDIODBOKIJE(*)())((::PBYTE)hIl2Cpp + BKGEIMPMHOA_CLHIPBFOEAJ_OFFSET))();
	}

	static ::System::Void NJOJMPDLFFH(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BKGEIMPMHOA_NJOJMPDLFFH_OFFSET))(HIAIKHDFCLN);
	}

	static ::System::Void PHCPAKMBBOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKGEIMPMHOA_PHCPAKMBBOD_OFFSET))();
	}

	static ::BKGEIMPMHOA_EDIODBOKIJE OLDENGLLOAD()
	{
		return ((::BKGEIMPMHOA_EDIODBOKIJE(*)())((::PBYTE)hIl2Cpp + BKGEIMPMHOA_OLDENGLLOAD_OFFSET))();
	}
};
