#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJJBCLHIMOP.h"

class DMFCAPLHHON;
class EAIOHODECAO;
class JGNPOMIAMOI;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJIIIIKJBIH_CFJCGBCPGPK_OFFSET UNITYSDK_OFFSET(0x1FB882C0)
#define JJIIIIKJBIH_FEJJMACCLBL_OFFSET UNITYSDK_OFFSET(0x1FB88040)
#define JJIIIIKJBIH_HDGDNIDFKCG_OFFSET UNITYSDK_OFFSET(0x1FB88280)
#define JJIIIIKJBIH_HGIEPCLGAFP_OFFSET UNITYSDK_OFFSET(0x1FB87E90)
#define JJIIIIKJBIH_HLCLDFONIAM_OFFSET UNITYSDK_OFFSET(0x1FB88680)
#define JJIIIIKJBIH_HMMOPDIPIOJ_OFFSET UNITYSDK_OFFSET(0x1FB884B0)
#define JJIIIIKJBIH_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1FB87CC0)
#define JJIIIIKJBIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB88670)

inline static constexpr unsigned int JJIIIIKJBIH_TypeDefinitionIndex = 94934;

class JJIIIIKJBIH : public ::IJJBCLHIMOP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIIIIKJBIH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIIIIKJBIH_JAPFFPNAJHB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HGIEPCLGAFP()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIIIIKJBIH_HGIEPCLGAFP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HDGDNIDFKCG()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIIIIKJBIH_HDGDNIDFKCG_OFFSET))(this);
	}

	::System::Void CFJCGBCPGPK(::DMFCAPLHHON* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + JJIIIIKJBIH_CFJCGBCPGPK_OFFSET))(this, AAOCANGHBDG);
	}

	::EAIOHODECAO* HMMOPDIPIOJ(::System::UInt64 FALJABIBPNH, ::DMFCAPLHHON* AAOCANGHBDG, ::System::String* FMMNDNJDCBF, ::System::String* MNEIGDIOHDE)
	{
		return ((::EAIOHODECAO*(*)(::PVOID, ::System::UInt64, ::DMFCAPLHHON*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JJIIIIKJBIH_HMMOPDIPIOJ_OFFSET))(this, FALJABIBPNH, AAOCANGHBDG, FMMNDNJDCBF, MNEIGDIOHDE);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* FEJJMACCLBL()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIIIIKJBIH_FEJJMACCLBL_OFFSET))(this);
	}

	::System::Void HLCLDFONIAM(::DMFCAPLHHON* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + JJIIIIKJBIH_HLCLDFONIAM_OFFSET))(this, MIALFKCCCPI);
	}
};
