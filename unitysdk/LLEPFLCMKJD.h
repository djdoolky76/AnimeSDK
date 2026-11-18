#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPKBDIJDMAP.h"

class APOLLOBLGOE;
class IECNLPPHCHI;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define LLEPFLCMKJD_CMFNEAJFDON_OFFSET UNITYSDK_OFFSET(0x1519E530)
#define LLEPFLCMKJD_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1519E6D0)
#define LLEPFLCMKJD_HFJKKGKPANC_OFFSET UNITYSDK_OFFSET(0x1519E5A0)
#define LLEPFLCMKJD_JFKGGDBBEDG_OFFSET UNITYSDK_OFFSET(0x1519E900)
#define LLEPFLCMKJD_JGEKEKBAFAM_OFFSET UNITYSDK_OFFSET(0x1519E2F0)
#define LLEPFLCMKJD_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1519E190)
#define LLEPFLCMKJD_LCKCMNJJLJD_OFFSET UNITYSDK_OFFSET(0x1519E410)
#define LLEPFLCMKJD_LNLDPCPNKNM_OFFSET UNITYSDK_OFFSET(0x1519E660)
#define LLEPFLCMKJD_MEPJDGBPKOA_OFFSET UNITYSDK_OFFSET(0x1519E780)
#define LLEPFLCMKJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1519E2E0)

inline static constexpr unsigned int LLEPFLCMKJD_TypeDefinitionIndex = 49355;

class LLEPFLCMKJD : public ::MPKBDIJDMAP
{
public:
	::Il2CppArray<::IECNLPPHCHI*>* FDMLGCBCNBD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEPFLCMKJD__CTOR_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEPFLCMKJD_KMMIPNMJILI_OFFSET))(this);
	}

	::APOLLOBLGOE* JGEKEKBAFAM()
	{
		return ((::APOLLOBLGOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEPFLCMKJD_JGEKEKBAFAM_OFFSET))(this);
	}

	::System::Void LCKCMNJJLJD(::System::Action_2<::IECNLPPHCHI*, ::System::Int32>* EIDDNAMCFKJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::IECNLPPHCHI*, ::System::Int32>*))((::PBYTE)hIl2Cpp + LLEPFLCMKJD_LCKCMNJJLJD_OFFSET))(this, EIDDNAMCFKJ);
	}

	::IECNLPPHCHI* CMFNEAJFDON(::System::Int32 DBHFIJGFPOK)
	{
		return ((::IECNLPPHCHI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLEPFLCMKJD_CMFNEAJFDON_OFFSET))(this, DBHFIJGFPOK);
	}

	::System::Void HFJKKGKPANC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEPFLCMKJD_HFJKKGKPANC_OFFSET))(this);
	}

	static ::LLEPFLCMKJD* LNLDPCPNKNM()
	{
		return ((::LLEPFLCMKJD*(*)())((::PBYTE)hIl2Cpp + LLEPFLCMKJD_LNLDPCPNKNM_OFFSET))();
	}

	static ::LLEPFLCMKJD* COKNIICCODC()
	{
		return ((::LLEPFLCMKJD*(*)())((::PBYTE)hIl2Cpp + LLEPFLCMKJD_COKNIICCODC_OFFSET))();
	}

	::System::Void MEPJDGBPKOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEPFLCMKJD_MEPJDGBPKOA_OFFSET))(this);
	}

	::System::Void JFKGGDBBEDG(::MoleMole::TextureSheetAnimCurveParam* ALLOPLHJOMK, ::System::Action* OCIKNBPALGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetAnimCurveParam*, ::System::Action*))((::PBYTE)hIl2Cpp + LLEPFLCMKJD_JFKGGDBBEDG_OFFSET))(this, ALLOPLHJOMK, OCIKNBPALGG);
	}
};
