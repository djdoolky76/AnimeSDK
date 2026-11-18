#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/RuntimeDynamicObjectSet.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class AFDLFHKJIIJ;
class FHNLCIIHLIH;
namespace MoleMole::Config { class SceneConfigRuntimeData; }
namespace MoleMole::SceneMark { class DefaultDynamicObjectLayer; }
namespace MoleMole::SceneMark { class MonoSceneMarkRoot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EOAHFDPLGGJ_BAMDIMEDFOC_OFFSET UNITYSDK_OFFSET(0x158C3400)
#define EOAHFDPLGGJ_BLLFCIDJMJI_OFFSET UNITYSDK_OFFSET(0x158C3720)
#define EOAHFDPLGGJ_CPCNKDBIPLL_1_OFFSET UNITYSDK_OFFSET(0x158C48C0)
#define EOAHFDPLGGJ_CPCNKDBIPLL_OFFSET UNITYSDK_OFFSET(0x158C3730)
#define EOAHFDPLGGJ_EMGLENKAGGF_OFFSET UNITYSDK_OFFSET(0x158C4750)
#define EOAHFDPLGGJ_EPPPBMOGHBH_OFFSET UNITYSDK_OFFSET(0x158C37B0)
#define EOAHFDPLGGJ_FDMFJEOJDOD_OFFSET UNITYSDK_OFFSET(0x158C4AD0)
#define EOAHFDPLGGJ_HMCEMHKDBEO_OFFSET UNITYSDK_OFFSET(0x158C3960)
#define EOAHFDPLGGJ_IABNLGGGIGO_OFFSET UNITYSDK_OFFSET(0x158C4AB0)
#define EOAHFDPLGGJ_IKKEMCOFMPB_1_OFFSET UNITYSDK_OFFSET(0x158C3170)
#define EOAHFDPLGGJ_IKKEMCOFMPB_OFFSET UNITYSDK_OFFSET(0x158C2CD0)
#define EOAHFDPLGGJ_IPHEAMCFANN_1_OFFSET UNITYSDK_OFFSET(0x158C4260)
#define EOAHFDPLGGJ_IPHEAMCFANN_2_OFFSET UNITYSDK_OFFSET(0x158C4E60)
#define EOAHFDPLGGJ_IPHEAMCFANN_OFFSET UNITYSDK_OFFSET(0x158C3FB0)
#define EOAHFDPLGGJ_KLJCEDCCGDH_OFFSET UNITYSDK_OFFSET(0x158C4590)
#define EOAHFDPLGGJ_MLADPIBNGMN_OFFSET UNITYSDK_OFFSET(0x158C4AC0)
#define EOAHFDPLGGJ_MMBBEHOEJMI_OFFSET UNITYSDK_OFFSET(0x158C4F80)
#define EOAHFDPLGGJ_NGJODPBGOEG_OFFSET UNITYSDK_OFFSET(0x158C3060)
#define EOAHFDPLGGJ_OFLEIALKCOG_OFFSET UNITYSDK_OFFSET(0x158C3950)
#define EOAHFDPLGGJ_PMPGABJNMLM_1_OFFSET UNITYSDK_OFFSET(0x158C4CD0)
#define EOAHFDPLGGJ_PMPGABJNMLM_2_OFFSET UNITYSDK_OFFSET(0x158C2FD0)
#define EOAHFDPLGGJ_PMPGABJNMLM_OFFSET UNITYSDK_OFFSET(0x158C3520)
#define EOAHFDPLGGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x158C2B90)

inline static constexpr unsigned int EOAHFDPLGGJ_TypeDefinitionIndex = 82443;

class EOAHFDPLGGJ : public ::System::Object
{
public:
	// static const ::System::String* GKOPBAMLNAH; // 0x0
	// static const ::System::String* ALFPFMNHFPH; // 0x0
	// static const ::System::String* FHNLGOKFLHI; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* EHKHAKEBJAK; // 0x10
	::MoleMole::SceneMark::MonoSceneMarkRoot* _KFOBENCODHF_k__BackingField; // 0x18
	::MoleMole::SceneMark::DefaultDynamicObjectLayer* _CDAPALLMDGL_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::AFDLFHKJIIJ*>* HIALFMBDGHG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ__CTOR_OFFSET))(this);
	}

	::System::Void IKKEMCOFMPB(::AFDLFHKJIIJ* KMOHKCADPNA, ::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::AFDLFHKJIIJ*, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_IKKEMCOFMPB_OFFSET))(this, KMOHKCADPNA, AELLPLBJELA);
	}

	::System::Void NGJODPBGOEG(::MoleMole::GameplayTag KMOHKCADPNA, ::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_NGJODPBGOEG_OFFSET))(this, KMOHKCADPNA, AELLPLBJELA);
	}

	::System::Boolean PMPGABJNMLM(::MoleMole::GameplayTag AELLPLBJELA, ::System::Collections::Generic::List_1<::FHNLCIIHLIH*>* LHGNGLCFEBF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::FHNLCIIHLIH*>*))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_PMPGABJNMLM_OFFSET))(this, AELLPLBJELA, LHGNGLCFEBF);
	}

	::MoleMole::SceneMark::DefaultDynamicObjectLayer* BLLFCIDJMJI()
	{
		return ((::MoleMole::SceneMark::DefaultDynamicObjectLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_BLLFCIDJMJI_OFFSET))(this);
	}

	::FHNLCIIHLIH* CPCNKDBIPLL(::AFDLFHKJIIJ* KMOHKCADPNA, ::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::FHNLCIIHLIH*(*)(::PVOID, ::AFDLFHKJIIJ*, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_CPCNKDBIPLL_OFFSET))(this, KMOHKCADPNA, AELLPLBJELA);
	}

	::System::Boolean BAMDIMEDFOC(::MoleMole::GameplayTag OKLLBNDINPE, ::AFDLFHKJIIJ*& ECLBICJMBLE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::AFDLFHKJIIJ*&))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_BAMDIMEDFOC_OFFSET))(this, OKLLBNDINPE, ECLBICJMBLE);
	}

	::System::Void EPPPBMOGHBH(::MoleMole::SceneMark::DefaultDynamicObjectLayer* KMOHKCADPNA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::DefaultDynamicObjectLayer*))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_EPPPBMOGHBH_OFFSET))(this, KMOHKCADPNA);
	}

	::System::Void OFLEIALKCOG(::MoleMole::SceneMark::DefaultDynamicObjectLayer* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::DefaultDynamicObjectLayer*))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_OFLEIALKCOG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HMCEMHKDBEO(::MoleMole::Config::SceneConfigRuntimeData* NPNFJBHNBAH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_HMCEMHKDBEO_OFFSET))(this, NPNFJBHNBAH);
	}

	::System::Void IPHEAMCFANN(::MoleMole::GameplayTag AELLPLBJELA, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_IPHEAMCFANN_OFFSET))(this, AELLPLBJELA, EGEGIMGMJHN);
	}

	::System::Void IPHEAMCFANN_1(::AFDLFHKJIIJ* KMOHKCADPNA, ::MoleMole::GameplayTag AELLPLBJELA, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AFDLFHKJIIJ*, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_IPHEAMCFANN_1_OFFSET))(this, KMOHKCADPNA, AELLPLBJELA, EGEGIMGMJHN);
	}

	::System::Void KLJCEDCCGDH(::AFDLFHKJIIJ* KMOHKCADPNA)
	{
		return ((::System::Void(*)(::PVOID, ::AFDLFHKJIIJ*))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_KLJCEDCCGDH_OFFSET))(this, KMOHKCADPNA);
	}

	::System::Void EMGLENKAGGF(::AFDLFHKJIIJ* KMOHKCADPNA)
	{
		return ((::System::Void(*)(::PVOID, ::AFDLFHKJIIJ*))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_EMGLENKAGGF_OFFSET))(this, KMOHKCADPNA);
	}

	::FHNLCIIHLIH* CPCNKDBIPLL_1(::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::FHNLCIIHLIH*(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_CPCNKDBIPLL_1_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void IABNLGGGIGO(::MoleMole::SceneMark::MonoSceneMarkRoot* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::MonoSceneMarkRoot*))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_IABNLGGGIGO_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::SceneMark::MonoSceneMarkRoot* MLADPIBNGMN()
	{
		return ((::MoleMole::SceneMark::MonoSceneMarkRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_MLADPIBNGMN_OFFSET))(this);
	}

	::System::Void FDMFJEOJDOD(::MoleMole::Config::RuntimeDynamicObjectSet GEEKODJDNLG, ::System::Int32 JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RuntimeDynamicObjectSet, ::System::Int32))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_FDMFJEOJDOD_OFFSET))(this, GEEKODJDNLG, JKBLDFBGBPK);
	}

	::System::Void IKKEMCOFMPB_1(::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_IKKEMCOFMPB_1_OFFSET))(this, AELLPLBJELA);
	}

	::System::Boolean PMPGABJNMLM_1(::System::String* KMOHKCADPNA, ::MoleMole::GameplayTag AELLPLBJELA, ::System::Collections::Generic::List_1<::FHNLCIIHLIH*>* LHGNGLCFEBF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::FHNLCIIHLIH*>*))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_PMPGABJNMLM_1_OFFSET))(this, KMOHKCADPNA, AELLPLBJELA, LHGNGLCFEBF);
	}

	::System::Void IPHEAMCFANN_2(::MoleMole::GameplayTag KMOHKCADPNA, ::MoleMole::GameplayTag AELLPLBJELA, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_IPHEAMCFANN_2_OFFSET))(this, KMOHKCADPNA, AELLPLBJELA, EGEGIMGMJHN);
	}

	::System::Boolean PMPGABJNMLM_2(::AFDLFHKJIIJ* KMOHKCADPNA, ::MoleMole::GameplayTag AELLPLBJELA, ::System::Collections::Generic::List_1<::FHNLCIIHLIH*>* LHGNGLCFEBF)
	{
		return ((::System::Boolean(*)(::PVOID, ::AFDLFHKJIIJ*, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::FHNLCIIHLIH*>*))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_PMPGABJNMLM_2_OFFSET))(this, KMOHKCADPNA, AELLPLBJELA, LHGNGLCFEBF);
	}

	::System::Boolean MMBBEHOEJMI(::FHNLCIIHLIH* GLJLBOKMFOJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::FHNLCIIHLIH*))((::PBYTE)hIl2Cpp + EOAHFDPLGGJ_MMBBEHOEJMI_OFFSET))(this, GLJLBOKMFOJ);
	}
};
