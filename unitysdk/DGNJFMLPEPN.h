#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHELLEGKALM.h"
#include "unitysdk/BNHPDBDCOAJ.h"
#include "unitysdk/DGNJFMLPEPN_AEGGPLJKGLC.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/JPLGICECOCO.h"
#include "unitysdk/MLGOKCHMCPO.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class EGOJNNIFDJJ;
class ENGKPGFGGLM;
class EPJAODADCEA;
namespace MoleMole::Config { class ConfigMonsterAlertTrait; }
namespace MoleMole::Config { class ConfigMonsterDefaultTrait; }
namespace System { class EventArgs; }
namespace System::Threading { class CancellationTokenSource; }

#define DGNJFMLPEPN_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x1207E410)
#define DGNJFMLPEPN_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x1207E9F0)
#define DGNJFMLPEPN_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1207E740)
#define DGNJFMLPEPN_BBIOFKNMNPH_OFFSET UNITYSDK_OFFSET(0x1207C990)
#define DGNJFMLPEPN_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x1207E6D0)
#define DGNJFMLPEPN_CNKFKLJJLNH_OFFSET UNITYSDK_OFFSET(0x1207E750)
#define DGNJFMLPEPN_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x1207E6E0)
#define DGNJFMLPEPN_FLOLGCDMBFF_OFFSET UNITYSDK_OFFSET(0x1207E680)
#define DGNJFMLPEPN_HACPPJFJECB_OFFSET UNITYSDK_OFFSET(0x1207C3B0)
#define DGNJFMLPEPN_HHPFLEOOHIM_OFFSET UNITYSDK_OFFSET(0x1207DFA0)
#define DGNJFMLPEPN_IJDGONJOOFA_OFFSET UNITYSDK_OFFSET(0x1207DA10)
#define DGNJFMLPEPN_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1207EEE0)
#define DGNJFMLPEPN_INFLOPECENN_OFFSET UNITYSDK_OFFSET(0x1207E810)
#define DGNJFMLPEPN_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1207E660)
#define DGNJFMLPEPN_KELDDAPPNNE_OFFSET UNITYSDK_OFFSET(0x1207EB70)
#define DGNJFMLPEPN_KIOCJCEJAFB_OFFSET UNITYSDK_OFFSET(0x1207E420)
#define DGNJFMLPEPN_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x1207E670)
#define DGNJFMLPEPN_MEGPLNNPDCP_OFFSET UNITYSDK_OFFSET(0x1207C1B0)
#define DGNJFMLPEPN_MNAFBKBFMHK_OFFSET UNITYSDK_OFFSET(0x1207D230)
#define DGNJFMLPEPN_ONATTACH_OFFSET UNITYSDK_OFFSET(0x1207C050)
#define DGNJFMLPEPN_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1207D040)
#define DGNJFMLPEPN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1207C940)
#define DGNJFMLPEPN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1207C200)
#define DGNJFMLPEPN_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1207D160)
#define DGNJFMLPEPN_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1207BF30)
#define DGNJFMLPEPN_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x1207D8A0)
#define DGNJFMLPEPN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1207D6F0)
#define DGNJFMLPEPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1207E3D0)

inline static constexpr unsigned int DGNJFMLPEPN_TypeDefinitionIndex = 73036;

class DGNJFMLPEPN
{
public:
	::EPJAODADCEA* KPCMPDAIOND; // 0x28
	::BNHPDBDCOAJ FJBGACFCBPA; // 0x30
	::MoleMole::Config::ConfigMonsterAlertTrait* KJHBDHGDBON; // 0x40
	::MoleMole::Config::ConfigMonsterDefaultTrait* NHJOOGPIANM; // 0x48
	::System::Threading::CancellationTokenSource* LDEFINLNLPF; // 0x50
	::EGOJNNIFDJJ* GFJFBIKNCEO; // 0x58
	::MoleMole::EntityHandle FDAGHCIIJCI; // 0x60
	::System::Boolean OKGNJECMBDL; // 0x70
	::System::Boolean KKDBJNANCJJ; // 0x71
	::System::Boolean LLDJAIMIGMK; // 0x72
	::System::Byte _padding0[0x1];
	::System::Int32 KHMLGFMAJHK; // 0x74
	::System::Int32 ONHLOJBJAPP; // 0x78
	::System::Int32 KCCCNCEJICM; // 0x7C
	::System::Int32 CFEDGEMOCBL; // 0x80
	::JPLGICECOCO BBAEMEEFLNP; // 0x84
	::System::UInt32 AJIIDODJOOF; // 0x8C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGNJFMLPEPN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEvent(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_ONEVENT_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_AFBHCNCIKEK_OFFSET))(this);
	}

	::System::Void KIOCJCEJAFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_KIOCJCEJAFB_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void MNAFBKBFMHK(::System::UInt32 JHGKGEGGGFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_MNAFBKBFMHK_OFFSET))(this, JHGKGEGGGFF);
	}

	::System::Void HHPFLEOOHIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_HHPFLEOOHIM_OFFSET))(this);
	}

	::System::Void MEGPLNNPDCP(::DGNJFMLPEPN_AEGGPLJKGLC FKDONKGGAIF)
	{
		return ((::System::Void(*)(::PVOID, ::DGNJFMLPEPN_AEGGPLJKGLC))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_MEGPLNNPDCP_OFFSET))(this, FKDONKGGAIF);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Single FLOLGCDMBFF(::DGNJFMLPEPN_AEGGPLJKGLC FKDONKGGAIF)
	{
		return ((::System::Single(*)(::PVOID, ::DGNJFMLPEPN_AEGGPLJKGLC))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_FLOLGCDMBFF_OFFSET))(this, FKDONKGGAIF);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_ANEOCOIFDDJ_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CNKFKLJJLNH(::System::Threading::CancellationToken AMIDHEAIANO, ::MLGOKCHMCPO NGIMPFDABMF)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken, ::MLGOKCHMCPO))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_CNKFKLJJLNH_OFFSET))(this, AMIDHEAIANO, NGIMPFDABMF);
	}

	::System::Void IJDGONJOOFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_IJDGONJOOFA_OFFSET))(this);
	}

	::System::Int32 INFLOPECENN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_INFLOPECENN_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::EPJAODADCEA* ONPGHHGJGDJ)
	{
		return ((::System::Void(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_AMEGHCHMIOD_OFFSET))(this, ONPGHHGJGDJ);
	}

	::System::Void BBIOFKNMNPH(::BHELLEGKALM NKCHHHKMBNA)
	{
		return ((::System::Void(*)(::PVOID, ::BHELLEGKALM))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_BBIOFKNMNPH_OFFSET))(this, NKCHHHKMBNA);
	}

	::System::Void KELDDAPPNNE(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_KELDDAPPNNE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void HACPPJFJECB(::MLGOKCHMCPO NGIMPFDABMF)
	{
		return ((::System::Void(*)(::PVOID, ::MLGOKCHMCPO))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_HACPPJFJECB_OFFSET))(this, NGIMPFDABMF);
	}
};
