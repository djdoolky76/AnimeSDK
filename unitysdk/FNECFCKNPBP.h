#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJJBCLHIMOP.h"

class DMFCAPLHHON;
class EAIOHODECAO;
class JGNPOMIAMOI;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNECFCKNPBP_CFJCGBCPGPK_OFFSET UNITYSDK_OFFSET(0x1E234DC0)
#define FNECFCKNPBP_HDGDNIDFKCG_OFFSET UNITYSDK_OFFSET(0x1E234B10)
#define FNECFCKNPBP_HGIEPCLGAFP_OFFSET UNITYSDK_OFFSET(0x1E2344D0)
#define FNECFCKNPBP_HLCLDFONIAM_OFFSET UNITYSDK_OFFSET(0x1E235060)
#define FNECFCKNPBP_HMMOPDIPIOJ_OFFSET UNITYSDK_OFFSET(0x1E2342F0)
#define FNECFCKNPBP_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1E234C30)
#define FNECFCKNPBP_JJODLHDCNAE_OFFSET UNITYSDK_OFFSET(0x1E234840)
#define FNECFCKNPBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E235050)

inline static constexpr unsigned int FNECFCKNPBP_TypeDefinitionIndex = 93474;

class FNECFCKNPBP : public ::IJJBCLHIMOP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNECFCKNPBP__CTOR_OFFSET))(this);
	}

	::EAIOHODECAO* HMMOPDIPIOJ(::System::UInt64 FALJABIBPNH, ::DMFCAPLHHON* AAOCANGHBDG, ::System::String* FMMNDNJDCBF, ::System::String* MNEIGDIOHDE)
	{
		return ((::EAIOHODECAO*(*)(::PVOID, ::System::UInt64, ::DMFCAPLHHON*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FNECFCKNPBP_HMMOPDIPIOJ_OFFSET))(this, FALJABIBPNH, AAOCANGHBDG, FMMNDNJDCBF, MNEIGDIOHDE);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HGIEPCLGAFP()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNECFCKNPBP_HGIEPCLGAFP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HDGDNIDFKCG()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNECFCKNPBP_HDGDNIDFKCG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNECFCKNPBP_JAPFFPNAJHB_OFFSET))(this);
	}

	::System::Void CFJCGBCPGPK(::DMFCAPLHHON* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + FNECFCKNPBP_CFJCGBCPGPK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* JJODLHDCNAE()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNECFCKNPBP_JJODLHDCNAE_OFFSET))(this);
	}

	::System::Void HLCLDFONIAM(::DMFCAPLHHON* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + FNECFCKNPBP_HLCLDFONIAM_OFFSET))(this, MIALFKCCCPI);
	}
};
