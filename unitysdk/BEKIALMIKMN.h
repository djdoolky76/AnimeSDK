#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class HGIDAMPAOGK;
class MGMKKLLGDHO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEKIALMIKMN_ANFHCPHIFOB_OFFSET UNITYSDK_OFFSET(0xFF6A730)
#define BEKIALMIKMN_BMHMKPAGGFG_OFFSET UNITYSDK_OFFSET(0xFF6A4C0)
#define BEKIALMIKMN_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0xFF6AF20)
#define BEKIALMIKMN_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0xFF6A1F0)
#define BEKIALMIKMN_FIJPJCNLOKJ_1_OFFSET UNITYSDK_OFFSET(0xFF6A9E0)
#define BEKIALMIKMN_FIJPJCNLOKJ_OFFSET UNITYSDK_OFFSET(0xFF6A280)
#define BEKIALMIKMN_MDCGOOAJBAG_OFFSET UNITYSDK_OFFSET(0xFF6A110)
#define BEKIALMIKMN_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0xFF69FE0)
#define BEKIALMIKMN_ONSTART_OFFSET UNITYSDK_OFFSET(0xFF69F80)
#define BEKIALMIKMN_OOLFHKCFIBG_OFFSET UNITYSDK_OFFSET(0xFF6AD40)
#define BEKIALMIKMN__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6A040)

inline static constexpr unsigned int BEKIALMIKMN_TypeDefinitionIndex = 77553;

class BEKIALMIKMN : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BNIIPCMIGFP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MGMKKLLGDHO*>* LPOLOGEGLPI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKIALMIKMN__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKIALMIKMN_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKIALMIKMN_ONSHUTDOWN_OFFSET))(this);
	}

	::MGMKKLLGDHO* MDCGOOAJBAG(::System::Int32 DKPFBNACHBK)
	{
		return ((::MGMKKLLGDHO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEKIALMIKMN_MDCGOOAJBAG_OFFSET))(this, DKPFBNACHBK);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKIALMIKMN_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void FIJPJCNLOKJ(::System::Int32 DKPFBNACHBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEKIALMIKMN_FIJPJCNLOKJ_OFFSET))(this, DKPFBNACHBK);
	}

	::System::Collections::Generic::List_1<::MGMKKLLGDHO*>* BMHMKPAGGFG()
	{
		return ((::System::Collections::Generic::List_1<::MGMKKLLGDHO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKIALMIKMN_BMHMKPAGGFG_OFFSET))(this);
	}

	::System::Void ANFHCPHIFOB(::HGIDAMPAOGK* FKNFHGLBPHF)
	{
		return ((::System::Void(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + BEKIALMIKMN_ANFHCPHIFOB_OFFSET))(this, FKNFHGLBPHF);
	}

	::System::Void FIJPJCNLOKJ_1(::System::Collections::Generic::List_1<::System::Int32>* DMNIHJOCJNL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BEKIALMIKMN_FIJPJCNLOKJ_1_OFFSET))(this, DMNIHJOCJNL);
	}

	::System::Boolean OOLFHKCFIBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKIALMIKMN_OOLFHKCFIBG_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKIALMIKMN_CNIKAMOAANF_OFFSET))(this);
	}
};
