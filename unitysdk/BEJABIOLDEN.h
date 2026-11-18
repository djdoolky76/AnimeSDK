#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAMLPLAEOFA.h"

class DMFCAPLHHON;
class EAIOHODECAO;
class JGNPOMIAMOI;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEJABIOLDEN_CFJCGBCPGPK_OFFSET UNITYSDK_OFFSET(0x1CCA6CB0)
#define BEJABIOLDEN_HDGDNIDFKCG_OFFSET UNITYSDK_OFFSET(0x1CCA6FA0)
#define BEJABIOLDEN_HGIEPCLGAFP_OFFSET UNITYSDK_OFFSET(0x1CCA70C0)
#define BEJABIOLDEN_HMMOPDIPIOJ_OFFSET UNITYSDK_OFFSET(0x1CCA6E10)
#define BEJABIOLDEN_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1CCA71E0)
#define BEJABIOLDEN_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1CCA6C70)
#define BEJABIOLDEN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1CCA6C20)
#define BEJABIOLDEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA7290)

inline static constexpr unsigned int BEJABIOLDEN_TypeDefinitionIndex = 93788;

class BEJABIOLDEN : public ::KAMLPLAEOFA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJABIOLDEN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + BEJABIOLDEN_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJABIOLDEN_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void CFJCGBCPGPK(::DMFCAPLHHON* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + BEJABIOLDEN_CFJCGBCPGPK_OFFSET))(this, AAOCANGHBDG);
	}

	::EAIOHODECAO* HMMOPDIPIOJ(::System::UInt64 FALJABIBPNH, ::DMFCAPLHHON* AAOCANGHBDG, ::System::String* FMMNDNJDCBF, ::System::String* MNEIGDIOHDE)
	{
		return ((::EAIOHODECAO*(*)(::PVOID, ::System::UInt64, ::DMFCAPLHHON*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BEJABIOLDEN_HMMOPDIPIOJ_OFFSET))(this, FALJABIBPNH, AAOCANGHBDG, FMMNDNJDCBF, MNEIGDIOHDE);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HDGDNIDFKCG()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJABIOLDEN_HDGDNIDFKCG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HGIEPCLGAFP()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJABIOLDEN_HGIEPCLGAFP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJABIOLDEN_JAPFFPNAJHB_OFFSET))(this);
	}
};
