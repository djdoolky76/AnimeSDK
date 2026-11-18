#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLCAIKAIKBO.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/NOFNKODKCLA_KMNHALFPKNG.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOFNKODKCLA_AEKJEMDEEJE_OFFSET UNITYSDK_OFFSET(0x13771FD0)
#define NOFNKODKCLA_AEKOJAHPGHL_OFFSET UNITYSDK_OFFSET(0x1376F980)
#define NOFNKODKCLA_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x137730C0)
#define NOFNKODKCLA_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x13772830)
#define NOFNKODKCLA_BMHCMPKADJA_OFFSET UNITYSDK_OFFSET(0x137720D0)
#define NOFNKODKCLA_CCPELMHPLHC_OFFSET UNITYSDK_OFFSET(0x1376FD90)
#define NOFNKODKCLA_DFKIIDAPDJL_OFFSET UNITYSDK_OFFSET(0x13772B10)
#define NOFNKODKCLA_DIDPDCGKKLP_OFFSET UNITYSDK_OFFSET(0x13772330)
#define NOFNKODKCLA_DIGBGMFDBLL_OFFSET UNITYSDK_OFFSET(0x137721F0)
#define NOFNKODKCLA_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x13771E40)
#define NOFNKODKCLA_EILHGFFIHDA_OFFSET UNITYSDK_OFFSET(0x137731F0)
#define NOFNKODKCLA_EOBLIIPHNNA_OFFSET UNITYSDK_OFFSET(0x137726D0)
#define NOFNKODKCLA_FBGJIKEEMPK_OFFSET UNITYSDK_OFFSET(0x13772980)
#define NOFNKODKCLA_FKPNKPHGOHH_OFFSET UNITYSDK_OFFSET(0x13772D20)
#define NOFNKODKCLA_HBIBALEGMIA_OFFSET UNITYSDK_OFFSET(0x13771EA0)
#define NOFNKODKCLA_HHABDKIHKGN_OFFSET UNITYSDK_OFFSET(0x13771140)
#define NOFNKODKCLA_HHJJAMEBFJM_OFFSET UNITYSDK_OFFSET(0x13771F60)
#define NOFNKODKCLA_HLDDOEKJJCF_OFFSET UNITYSDK_OFFSET(0x137730D0)
#define NOFNKODKCLA_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x13770430)
#define NOFNKODKCLA_HOIJICBODBD_OFFSET UNITYSDK_OFFSET(0x13771010)
#define NOFNKODKCLA_IBOGGJLMLCA_OFFSET UNITYSDK_OFFSET(0x13771A00)
#define NOFNKODKCLA_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x137731E0)
#define NOFNKODKCLA_JJHAGBEHNAA_OFFSET UNITYSDK_OFFSET(0x13772F70)
#define NOFNKODKCLA_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x13772F60)
#define NOFNKODKCLA_LAKINOAJEAP_OFFSET UNITYSDK_OFFSET(0x13771DB0)
#define NOFNKODKCLA_LDFAGFOKCBH_OFFSET UNITYSDK_OFFSET(0x13772030)
#define NOFNKODKCLA_MFNHBBMAJMK_OFFSET UNITYSDK_OFFSET(0x1376FFD0)
#define NOFNKODKCLA_MGKHFLPACAO_OFFSET UNITYSDK_OFFSET(0x13772520)
#define NOFNKODKCLA_MIPNGHLJBNJ_OFFSET UNITYSDK_OFFSET(0x13772400)
#define NOFNKODKCLA_MJEMGNHLIFG_OFFSET UNITYSDK_OFFSET(0x137715D0)
#define NOFNKODKCLA_NFKFJKLPHLJ_OFFSET UNITYSDK_OFFSET(0x13771410)
#define NOFNKODKCLA_NKANOIFDFGI_OFFSET UNITYSDK_OFFSET(0x13771680)
#define NOFNKODKCLA_NOPLAJBKLBD_OFFSET UNITYSDK_OFFSET(0x13771B50)
#define NOFNKODKCLA_NPGCDBLOPIA_OFFSET UNITYSDK_OFFSET(0x13771D30)
#define NOFNKODKCLA_OBGHEGEGPPN_OFFSET UNITYSDK_OFFSET(0x13772840)
#define NOFNKODKCLA_ONATTACH_OFFSET UNITYSDK_OFFSET(0x1376F7D0)
#define NOFNKODKCLA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1376FCF0)
#define NOFNKODKCLA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1376F810)
#define NOFNKODKCLA_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x137700F0)
#define NOFNKODKCLA_PDGEEJPJHMH_OFFSET UNITYSDK_OFFSET(0x1376F920)
#define NOFNKODKCLA_PHBIBEKEJGM_OFFSET UNITYSDK_OFFSET(0x1376FAE0)
#define NOFNKODKCLA_PNADNJLFGGF_OFFSET UNITYSDK_OFFSET(0x13772920)
#define NOFNKODKCLA_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x13770360)
#define NOFNKODKCLA__CCTOR_OFFSET UNITYSDK_OFFSET(0x13770150)
#define NOFNKODKCLA__CTOR_OFFSET UNITYSDK_OFFSET(0x13770FD0)

inline static constexpr unsigned int NOFNKODKCLA_TypeDefinitionIndex = 63876;

class NOFNKODKCLA
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_BIDNGIMIHGA()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NOFNKODKCLA_TypeDefinitionIndex)->GetStaticField(0x48F40);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_NOHKIACOHGL()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NOFNKODKCLA_TypeDefinitionIndex)->GetStaticField(0x48F48);
	}
	static ::UnityEngine::Vector3* StaticGet_HGDLDFNLJFB()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NOFNKODKCLA_TypeDefinitionIndex)->GetStaticField(0x10FD0);
	}
	static ::System::Boolean* StaticGet_CECENHJPBPO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NOFNKODKCLA_TypeDefinitionIndex)->GetStaticField(0x10FDC);
	}
	static ::System::Boolean* StaticGet_JOLJEJKEHOJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NOFNKODKCLA_TypeDefinitionIndex)->GetStaticField(0x10FDD);
	}
	static ::System::Int32* StaticGet_ICCLHMLBIAM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NOFNKODKCLA_TypeDefinitionIndex)->GetStaticField(0x10FE0);
	}
	static ::System::Single* StaticGet_AFCAPFDNMBC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NOFNKODKCLA_TypeDefinitionIndex)->GetStaticField(0x10FE4);
	}
	static ::System::Int32* StaticGet_HLIFOLFOFLC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NOFNKODKCLA_TypeDefinitionIndex)->GetStaticField(0x10FE8);
	}
	static ::System::Int32* StaticGet_OANAJKCNEPH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NOFNKODKCLA_TypeDefinitionIndex)->GetStaticField(0x10FEC);
	}
	// static const ::System::Int32 DLNJDFGKGBD = 0x7FFFFFFF; // 0x0
	// static const ::System::Single LPMDJOLCEEN; // 0x0
	::System::String* BODECKIDFGF; // 0x28
	::MoleMole::EntityHandle NHMDNJPPAJD; // 0x30
	::System::Boolean GMFCOMOIDMA; // 0x40
	::System::Boolean KCOMBFMGACK; // 0x41
	::System::Byte _padding0[0x2];
	::System::Int32 DFBLOLLKDAJ; // 0x44
	::DLCAIKAIKBO MCLMEFDAOOM; // 0x48
	::System::Int32 NFACFCMFNEC; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NOFNKODKCLA_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	static ::System::Void HOIJICBODBD(::MoleMole::EntityHandle KECKGDFIALJ, ::MoleMole::EntityHandle MJPPILKEMBG, ::System::Boolean MBJDMKCGOCK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NOFNKODKCLA_HOIJICBODBD_OFFSET))(KECKGDFIALJ, MJPPILKEMBG, MBJDMKCGOCK);
	}

	static ::System::Void PHBIBEKEJGM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_PHBIBEKEJGM_OFFSET))();
	}

	static ::System::Void NPGCDBLOPIA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_NPGCDBLOPIA_OFFSET))();
	}

	static ::System::Void LAKINOAJEAP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NOFNKODKCLA_LAKINOAJEAP_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NOFNKODKCLA_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean PDGEEJPJHMH(::NOFNKODKCLA* HBNBIBADGNH)
	{
		return ((::System::Boolean(*)(::NOFNKODKCLA*))((::PBYTE)hIl2Cpp + NOFNKODKCLA_PDGEEJPJHMH_OFFSET))(HBNBIBADGNH);
	}

	static ::System::Void HBIBALEGMIA(::UnityEngine::Vector3 KACJMJDKKCK)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NOFNKODKCLA_HBIBALEGMIA_OFFSET))(KACJMJDKKCK);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid HHJJAMEBFJM(::System::Int32 IEGPOKIFOIO)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::Int32))((::PBYTE)hIl2Cpp + NOFNKODKCLA_HHJJAMEBFJM_OFFSET))(IEGPOKIFOIO);
	}

	static ::System::Int32 AEKJEMDEEJE()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_AEKJEMDEEJE_OFFSET))();
	}

	static ::System::Void LDFAGFOKCBH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + NOFNKODKCLA_LDFAGFOKCBH_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean BMHCMPKADJA(::UnityEngine::Vector3& KACJMJDKKCK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NOFNKODKCLA_BMHCMPKADJA_OFFSET))(KACJMJDKKCK);
	}

	static ::System::Void DIGBGMFDBLL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_DIGBGMFDBLL_OFFSET))();
	}

	::System::Void CCPELMHPLHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_CCPELMHPLHC_OFFSET))(this);
	}

	static ::System::Boolean DIDPDCGKKLP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_DIDPDCGKKLP_OFFSET))();
	}

	static ::System::Void NFKFJKLPHLJ(::Foundation::ViewObject::ViewObjectHandle PHHDHIBOCKA, ::System::Boolean IJGBILLEKJP)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NOFNKODKCLA_NFKFJKLPHLJ_OFFSET))(PHHDHIBOCKA, IJGBILLEKJP);
	}

	::System::Void MGKHFLPACAO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NOFNKODKCLA_MGKHFLPACAO_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void NKANOIFDFGI(::System::Int32 AEIFPPJFELD)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NOFNKODKCLA_NKANOIFDFGI_OFFSET))(AEIFPPJFELD);
	}

	static ::System::Void HHABDKIHKGN(::System::Collections::Generic::List_1<::System::Object*>* EFBHDHJCDCP)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NOFNKODKCLA_HHABDKIHKGN_OFFSET))(EFBHDHJCDCP);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::System::Void OBGHEGEGPPN(::System::Collections::Generic::List_1<::System::Object*>* EFBHDHJCDCP, ::Foundation::ViewObject::ViewObjectHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + NOFNKODKCLA_OBGHEGEGPPN_OFFSET))(EFBHDHJCDCP, PHHDHIBOCKA);
	}

	::System::Void MIPNGHLJBNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_MIPNGHLJBNJ_OFFSET))(this);
	}

	static ::System::Single PNADNJLFGGF()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_PNADNJLFGGF_OFFSET))();
	}

	static ::System::Boolean FBGJIKEEMPK(::Foundation::ViewObject::ViewObjectHandle PHHDHIBOCKA, ::UnityEngine::Vector3& OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NOFNKODKCLA_FBGJIKEEMPK_OFFSET))(PHHDHIBOCKA, OHOGDOMNHNK);
	}

	static ::System::Boolean DFKIIDAPDJL()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_DFKIIDAPDJL_OFFSET))();
	}

	static ::System::Void EOBLIIPHNNA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_EOBLIIPHNNA_OFFSET))();
	}

	static ::System::Void IBOGGJLMLCA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_IBOGGJLMLCA_OFFSET))();
	}

	static ::System::Int32 FKPNKPHGOHH(::NOFNKODKCLA_KMNHALFPKNG EJCBEJMGFAJ, ::NOFNKODKCLA_KMNHALFPKNG EBFCACIEKBC, ::UnityEngine::Vector3 KACJMJDKKCK)
	{
		return ((::System::Int32(*)(::NOFNKODKCLA_KMNHALFPKNG, ::NOFNKODKCLA_KMNHALFPKNG, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NOFNKODKCLA_FKPNKPHGOHH_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, KACJMJDKKCK);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_KDOIBCBFBAG_OFFSET))(this);
	}

	static ::System::Void JJHAGBEHNAA(::System::Collections::Generic::List_1<::System::Object*>* EFBHDHJCDCP, ::NOFNKODKCLA_KMNHALFPKNG AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::NOFNKODKCLA_KMNHALFPKNG))((::PBYTE)hIl2Cpp + NOFNKODKCLA_JJHAGBEHNAA_OFFSET))(EFBHDHJCDCP, AAIJGGIEOGK);
	}

	::System::Void AEKOJAHPGHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_AEKOJAHPGHL_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_AFBHCNCIKEK_OFFSET))(this);
	}

	static ::System::Int32 MJEMGNHLIFG()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_MJEMGNHLIFG_OFFSET))();
	}

	::System::Void HMLGKBFFNHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_HMLGKBFFNHI_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void MFNHBBMAJMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_MFNHBBMAJMK_OFFSET))(this);
	}

	static ::System::Int32 EILHGFFIHDA(::NOFNKODKCLA_KMNHALFPKNG EJCBEJMGFAJ, ::NOFNKODKCLA_KMNHALFPKNG EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::NOFNKODKCLA_KMNHALFPKNG, ::NOFNKODKCLA_KMNHALFPKNG))((::PBYTE)hIl2Cpp + NOFNKODKCLA_EILHGFFIHDA_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Void NOPLAJBKLBD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFNKODKCLA_NOPLAJBKLBD_OFFSET))();
	}

	::System::Void HLDDOEKJJCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_HLDDOEKJJCF_OFFSET))(this);
	}
};
