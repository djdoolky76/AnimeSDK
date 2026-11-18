#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJIBNLBCGFG.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class IANEJNBHNPJ;
class IPMBELDBAJK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNAAGOBGBNF_CNEPGIBPLLB_OFFSET UNITYSDK_OFFSET(0x1874F420)
#define JNAAGOBGBNF_DDGFNHJNLNH_OFFSET UNITYSDK_OFFSET(0x1874F2F0)
#define JNAAGOBGBNF_DHDKPLPPCJF_OFFSET UNITYSDK_OFFSET(0x1874F6C0)
#define JNAAGOBGBNF_FAFOHGJJMOG_OFFSET UNITYSDK_OFFSET(0x1874F2E0)
#define JNAAGOBGBNF_HCEKJODLHFA_OFFSET UNITYSDK_OFFSET(0x1874F2C0)
#define JNAAGOBGBNF_HIMKCAIAGID_OFFSET UNITYSDK_OFFSET(0x1874F6D0)
#define JNAAGOBGBNF_JCGMGKLPCNC_OFFSET UNITYSDK_OFFSET(0x1874F5D0)
#define JNAAGOBGBNF_LIFLCLKDFAJ_OFFSET UNITYSDK_OFFSET(0x1874F2D0)
#define JNAAGOBGBNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1874F220)

inline static constexpr unsigned int JNAAGOBGBNF_TypeDefinitionIndex = 84841;

class JNAAGOBGBNF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::IPMBELDBAJK*>* NGKCGGFMEMG; // 0x10
	::MoleMole::HollowChessboard::HollowChessboardUID _GLOKPHCGDNP_k__BackingField; // 0x18
	::LJIBNLBCGFG _IJCKNMEFNAJ_k__BackingField; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + JNAAGOBGBNF__CTOR_OFFSET))(this, IACHFFGPFMF);
	}

	::System::Void HCEKJODLHFA(::LJIBNLBCGFG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + JNAAGOBGBNF_HCEKJODLHFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID LIFLCLKDFAJ()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAAGOBGBNF_LIFLCLKDFAJ_OFFSET))(this);
	}

	::LJIBNLBCGFG FAFOHGJJMOG()
	{
		return ((::LJIBNLBCGFG(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAAGOBGBNF_FAFOHGJJMOG_OFFSET))(this);
	}

	::IPMBELDBAJK* DDGFNHJNLNH(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::IPMBELDBAJK*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + JNAAGOBGBNF_DDGFNHJNLNH_OFFSET))(this, EKPEBNCLJPM);
	}

	::IANEJNBHNPJ* CNEPGIBPLLB()
	{
		return ((::IANEJNBHNPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAAGOBGBNF_CNEPGIBPLLB_OFFSET))(this);
	}

	::System::Void JCGMGKLPCNC(::LJIBNLBCGFG LPALEBPKMNO)
	{
		return ((::System::Void(*)(::PVOID, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + JNAAGOBGBNF_JCGMGKLPCNC_OFFSET))(this, LPALEBPKMNO);
	}

	::System::Void DHDKPLPPCJF(::MoleMole::HollowChessboard::HollowChessboardUID EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + JNAAGOBGBNF_DHDKPLPPCJF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HIMKCAIAGID(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::IPMBELDBAJK* AGAELLINPJI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::IPMBELDBAJK*))((::PBYTE)hIl2Cpp + JNAAGOBGBNF_HIMKCAIAGID_OFFSET))(this, EKPEBNCLJPM, AGAELLINPJI);
	}
};
