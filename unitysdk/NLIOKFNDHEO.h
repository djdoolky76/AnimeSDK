#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NLIOKFNDHEO_DKHEEMJPFGP.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLIOKFNDHEO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16B86D50)
#define NLIOKFNDHEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B86EA0)
#define NLIOKFNDHEO_DNNDLACOCCA_OFFSET UNITYSDK_OFFSET(0x16B87030)
#define NLIOKFNDHEO_FNKPJCBNGAH_OFFSET UNITYSDK_OFFSET(0x16B87430)
#define NLIOKFNDHEO_LLALNAKKCIO_OFFSET UNITYSDK_OFFSET(0x16B87380)
#define NLIOKFNDHEO_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16B87650)
#define NLIOKFNDHEO__CTOR_OFFSET UNITYSDK_OFFSET(0x16B86D40)

inline static constexpr unsigned int NLIOKFNDHEO_TypeDefinitionIndex = 49451;

class NLIOKFNDHEO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* NHMDKMLJFCP; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18
	::System::Boolean EOPKGAEDCEG; // 0x1C

	::System::Void _ctor(::System::Int32 ANPAMOMJLOO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLIOKFNDHEO__CTOR_OFFSET))(this, ANPAMOMJLOO);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOKFNDHEO_DISPOSE_OFFSET))(this);
	}

	::System::Void LLALNAKKCIO(::NLIOKFNDHEO_DKHEEMJPFGP EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NLIOKFNDHEO_DKHEEMJPFGP))((::PBYTE)hIl2Cpp + NLIOKFNDHEO_LLALNAKKCIO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 FNKPJCBNGAH(::System::Int32 ADFNJNOELMG)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLIOKFNDHEO_FNKPJCBNGAH_OFFSET))(this, ADFNJNOELMG);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOKFNDHEO_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void DNNDLACOCCA(::System::Collections::Generic::List_1<::System::Object*>* GLDEPJALJPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NLIOKFNDHEO_DNNDLACOCCA_OFFSET))(this, GLDEPJALJPC);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 ANPAMOMJLOO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLIOKFNDHEO_BBOMJDBNHIC_OFFSET))(this, ANPAMOMJLOO);
	}
};
