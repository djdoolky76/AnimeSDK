#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LNMEGEABJHF.h"
class KLGFKLJAIOD;
class MMDJEHCBONC;
namespace System { class IFormatProvider; }
namespace System { class String; }

#define KLGFKLJAIOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C539990)
#define KLGFKLJAIOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C539980)
#define KLGFKLJAIOD_DDCENCNBHDN_OFFSET UNITYSDK_OFFSET(0x1C538E20)
#define KLGFKLJAIOD_HOGAAPHCMHH_OFFSET UNITYSDK_OFFSET(0x1C5398A0)
#define KLGFKLJAIOD_MCPEHPAEGEP_OFFSET UNITYSDK_OFFSET(0x1C5395B0)
#define KLGFKLJAIOD_MPLECJELDPK_OFFSET UNITYSDK_OFFSET(0x1C539840)
#define KLGFKLJAIOD_NLAONFBIAEG_OFFSET UNITYSDK_OFFSET(0x1C5397A0)

	class KLGFKLJAIOD : public ::System::Object
	{
	public:
		static ::KLGFKLJAIOD** StaticGet_FMJPMFEDIJL()
		{
			return (::KLGFKLJAIOD**)UnitySDK::FromName("", "KLGFKLJAIOD")->GetStaticField(0xE70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGFKLJAIOD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLGFKLJAIOD_CCTOR_OFFSET))();
		}

		::System::String* DDCENCNBHDN(::MMDJEHCBONC* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::MMDJEHCBONC*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + KLGFKLJAIOD_DDCENCNBHDN_OFFSET))(this, a1, a2);
		}

		::System::String* MPLECJELDPK(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + KLGFKLJAIOD_MPLECJELDPK_OFFSET))(this, a1, a2);
		}

		::System::String* HOGAAPHCMHH(::LNMEGEABJHF a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::LNMEGEABJHF, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + KLGFKLJAIOD_HOGAAPHCMHH_OFFSET))(this, a1, a2);
		}

		::System::String* MCPEHPAEGEP(::MMDJEHCBONC* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MMDJEHCBONC*))((::PBYTE)hIl2Cpp + KLGFKLJAIOD_MCPEHPAEGEP_OFFSET))(this, a1);
		}

		::System::String* NLAONFBIAEG(::MMDJEHCBONC* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MMDJEHCBONC*))((::PBYTE)hIl2Cpp + KLGFKLJAIOD_NLAONFBIAEG_OFFSET))(this, a1);
		}

	};
