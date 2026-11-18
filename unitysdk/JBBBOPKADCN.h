#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJIEMKHJEEM.h"
#include "unitysdk/APDCEFPOPDE.h"
#include "unitysdk/KAMLPLAEOFA.h"

class DMFCAPLHHON;
class EAIOHODECAO;
class JGNPOMIAMOI;
class KIBMNMBMBHD;
class OKKFEJMBGAI;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBBBOPKADCN_CFJCGBCPGPK_OFFSET UNITYSDK_OFFSET(0x1F019730)
#define JBBBOPKADCN_HDGDNIDFKCG_OFFSET UNITYSDK_OFFSET(0x1F019B10)
#define JBBBOPKADCN_HGIEPCLGAFP_OFFSET UNITYSDK_OFFSET(0x1F019A60)
#define JBBBOPKADCN_HMMOPDIPIOJ_OFFSET UNITYSDK_OFFSET(0x1F019820)
#define JBBBOPKADCN_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1F019BC0)
#define JBBBOPKADCN_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1F019CC0)
#define JBBBOPKADCN_OHPMLANIBHB_OFFSET UNITYSDK_OFFSET(0x1F019D10)
#define JBBBOPKADCN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F019C70)
#define JBBBOPKADCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F019D00)

inline static constexpr unsigned int JBBBOPKADCN_TypeDefinitionIndex = 36093;

class JBBBOPKADCN : public ::KAMLPLAEOFA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBBOPKADCN__CTOR_OFFSET))(this);
	}

	::System::Void CFJCGBCPGPK(::DMFCAPLHHON* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + JBBBOPKADCN_CFJCGBCPGPK_OFFSET))(this, AAOCANGHBDG);
	}

	::EAIOHODECAO* HMMOPDIPIOJ(::System::UInt64 FALJABIBPNH, ::DMFCAPLHHON* AAOCANGHBDG, ::System::String* FMMNDNJDCBF, ::System::String* MNEIGDIOHDE)
	{
		return ((::EAIOHODECAO*(*)(::PVOID, ::System::UInt64, ::DMFCAPLHHON*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JBBBOPKADCN_HMMOPDIPIOJ_OFFSET))(this, FALJABIBPNH, AAOCANGHBDG, FMMNDNJDCBF, MNEIGDIOHDE);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HGIEPCLGAFP()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBBOPKADCN_HGIEPCLGAFP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HDGDNIDFKCG()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBBOPKADCN_HDGDNIDFKCG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBBOPKADCN_JAPFFPNAJHB_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + JBBBOPKADCN_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBBOPKADCN_KMMIPNMJILI_OFFSET))(this);
	}

	::OKKFEJMBGAI* OHPMLANIBHB(::KIBMNMBMBHD* KBKOEJHBADA, ::APDCEFPOPDE MAFPOOJDMAC, ::System::UInt32 CANJKOGCPAF, ::AJIEMKHJEEM EHNJCPCLCOJ, ::System::UInt32 JGDOIBLCMCL, ::System::Int32 FGMEDIEGNFP)
	{
		return ((::OKKFEJMBGAI*(*)(::PVOID, ::KIBMNMBMBHD*, ::APDCEFPOPDE, ::System::UInt32, ::AJIEMKHJEEM, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + JBBBOPKADCN_OHPMLANIBHB_OFFSET))(this, KBKOEJHBADA, MAFPOOJDMAC, CANJKOGCPAF, EHNJCPCLCOJ, JGDOIBLCMCL, FGMEDIEGNFP);
	}
};
