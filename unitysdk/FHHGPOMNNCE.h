#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHLLIMBNFLF.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/OBKCIJLJCBN.h"
#include "unitysdk/OOPDODNABBE.h"
#include "unitysdk/OGBEDPFIMHH.h"

class CGLELBLPNGO;
class FBAMLABJMKF;
class LLCFODKNNLB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHHGPOMNNCE_AJKHOLGKLHF_OFFSET UNITYSDK_OFFSET(0x140F7370)
#define FHHGPOMNNCE_AKJOGEFOLKC_OFFSET UNITYSDK_OFFSET(0x140F6070)
#define FHHGPOMNNCE_BEGEHMNIGDL_OFFSET UNITYSDK_OFFSET(0x140F7A90)
#define FHHGPOMNNCE_CIJHKEHBPNM_OFFSET UNITYSDK_OFFSET(0x140F6640)
#define FHHGPOMNNCE_CMLEOPKHJNC_OFFSET UNITYSDK_OFFSET(0x140F6380)
#define FHHGPOMNNCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140F5260)
#define FHHGPOMNNCE_FAOCFKCHLJI_OFFSET UNITYSDK_OFFSET(0x140F5BC0)
#define FHHGPOMNNCE_GPCGKJGAIBM_1_OFFSET UNITYSDK_OFFSET(0x140F7C70)
#define FHHGPOMNNCE_GPCGKJGAIBM_OFFSET UNITYSDK_OFFSET(0x140F6600)
#define FHHGPOMNNCE_HEOKEIAFEHG_OFFSET UNITYSDK_OFFSET(0x140F62E0)
#define FHHGPOMNNCE_JFNHJCBLMKO_OFFSET UNITYSDK_OFFSET(0x140F69D0)
#define FHHGPOMNNCE_KODEOBLOFFP_OFFSET UNITYSDK_OFFSET(0x140F5F30)
#define FHHGPOMNNCE_LHOKGOBBIHH_OFFSET UNITYSDK_OFFSET(0x140F6140)
#define FHHGPOMNNCE_MCEEOLLCECG_OFFSET UNITYSDK_OFFSET(0x140F6AD0)
#define FHHGPOMNNCE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x140F52A0)
#define FHHGPOMNNCE_ONSTART_OFFSET UNITYSDK_OFFSET(0x140F52E0)
#define FHHGPOMNNCE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x140F7890)
#define FHHGPOMNNCE_PPCJPMOGMFN_OFFSET UNITYSDK_OFFSET(0x140F5420)
#define FHHGPOMNNCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x140F53C0)
#define FHHGPOMNNCE__CTOR_OFFSET UNITYSDK_OFFSET(0x140F5980)

inline static constexpr unsigned int FHHGPOMNNCE_TypeDefinitionIndex = 43227;

class FHHGPOMNNCE
{
public:
	// static const ::System::String* IDGFIEPEGOK; // 0x0
	// static const ::System::String* PHOBHKLKAPK; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::CGLELBLPNGO*>* EBPLCHKANML; // 0x10
	::System::Collections::Generic::List_1<::CHLLIMBNFLF>* AHPPIMAJCLK; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::CGLELBLPNGO*>*>* BAGJJLHCOBI; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::CGLELBLPNGO*>* DEPJJFNIPIM; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowChessboardUID>* LAHHLKMDCMH; // 0x30
	::OBKCIJLJCBN OCOJFKMOKMK; // 0x38
	::System::Boolean JOKJHBKAMOO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_ONSTART_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::CGLELBLPNGO* FAOCFKCHLJI(::LLCFODKNNLB* CIMFKACAGNI, ::OGBEDPFIMHH KJPBAOCKHHE, ::MoleMole::HollowChessboard::HollowChessboardUID JANDHDIPBGA)
	{
		return ((::CGLELBLPNGO*(*)(::PVOID, ::LLCFODKNNLB*, ::OGBEDPFIMHH, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_FAOCFKCHLJI_OFFSET))(this, CIMFKACAGNI, KJPBAOCKHHE, JANDHDIPBGA);
	}

	::System::Boolean KODEOBLOFFP(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_KODEOBLOFFP_OFFSET))(this, BONICGBNDAA);
	}

	::CGLELBLPNGO* AKJOGEFOLKC(::OGBEDPFIMHH KJPBAOCKHHE, ::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF)
	{
		return ((::CGLELBLPNGO*(*)(::PVOID, ::OGBEDPFIMHH, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_AKJOGEFOLKC_OFFSET))(this, KJPBAOCKHHE, IACHFFGPFMF);
	}

	::System::Void LHOKGOBBIHH(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_LHOKGOBBIHH_OFFSET))(this, BONICGBNDAA);
	}

	::System::Void HEOKEIAFEHG(::OGBEDPFIMHH CDBMHJGCCEB, ::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF, ::FBAMLABJMKF* COBEJJHGMPO)
	{
		return ((::System::Void(*)(::PVOID, ::OGBEDPFIMHH, ::MoleMole::HollowChessboard::HollowChessboardUID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_HEOKEIAFEHG_OFFSET))(this, CDBMHJGCCEB, IACHFFGPFMF, COBEJJHGMPO);
	}

	::System::Void CMLEOPKHJNC(::MoleMole::HollowChessboard::HollowChessboardUID FGLDMHFEJDI, ::OOPDODNABBE FCPCLIJNDLA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::OOPDODNABBE))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_CMLEOPKHJNC_OFFSET))(this, FGLDMHFEJDI, FCPCLIJNDLA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::CHLLIMBNFLF>* GPCGKJGAIBM()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::CHLLIMBNFLF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_GPCGKJGAIBM_OFFSET))(this);
	}

	::System::Boolean CIJHKEHBPNM(::OGBEDPFIMHH CDBMHJGCCEB, ::System::Boolean LLBJPJJINII, ::System::Collections::Generic::List_1<::CHLLIMBNFLF>*& PMNDDAMDPKH, ::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF, ::System::Boolean PJPALCLGAEN, ::System::Action_1<::CHLLIMBNFLF>* HANNBCPLGAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::OGBEDPFIMHH, ::System::Boolean, ::System::Collections::Generic::List_1<::CHLLIMBNFLF>*&, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Boolean, ::System::Action_1<::CHLLIMBNFLF>*))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_CIJHKEHBPNM_OFFSET))(this, CDBMHJGCCEB, LLBJPJJINII, PMNDDAMDPKH, IACHFFGPFMF, PJPALCLGAEN, HANNBCPLGAJ);
	}

	::System::Void AJKHOLGKLHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_AJKHOLGKLHF_OFFSET))(this);
	}

	::System::Void BEGEHMNIGDL(::OGBEDPFIMHH CDBMHJGCCEB, ::System::Boolean LLBJPJJINII, ::System::Collections::Generic::List_1<::CHLLIMBNFLF>*& PMNDDAMDPKH, ::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF, ::System::Action_1<::CHLLIMBNFLF>* HANNBCPLGAJ)
	{
		return ((::System::Void(*)(::PVOID, ::OGBEDPFIMHH, ::System::Boolean, ::System::Collections::Generic::List_1<::CHLLIMBNFLF>*&, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Action_1<::CHLLIMBNFLF>*))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_BEGEHMNIGDL_OFFSET))(this, CDBMHJGCCEB, LLBJPJJINII, PMNDDAMDPKH, IACHFFGPFMF, HANNBCPLGAJ);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::CHLLIMBNFLF>* GPCGKJGAIBM_1(::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::CHLLIMBNFLF>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_GPCGKJGAIBM_1_OFFSET))(this, IACHFFGPFMF);
	}

	::System::Collections::Generic::List_1<::CHLLIMBNFLF>* MCEEOLLCECG(::CGLELBLPNGO* EOKMKGCFHGF, ::CGLELBLPNGO* NKOALECGMHJ, ::System::Boolean PJPALCLGAEN, ::System::Action_1<::CHLLIMBNFLF>* HANNBCPLGAJ)
	{
		return ((::System::Collections::Generic::List_1<::CHLLIMBNFLF>*(*)(::PVOID, ::CGLELBLPNGO*, ::CGLELBLPNGO*, ::System::Boolean, ::System::Action_1<::CHLLIMBNFLF>*))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_MCEEOLLCECG_OFFSET))(this, EOKMKGCFHGF, NKOALECGMHJ, PJPALCLGAEN, HANNBCPLGAJ);
	}

	::System::Void PPCJPMOGMFN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_PPCJPMOGMFN_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JFNHJCBLMKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_JFNHJCBLMKO_OFFSET))(this);
	}
};
