#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNOPJGNOPJO.h"
#include "unitysdk/FKCPBAAEJJO.h"
#include "unitysdk/GDIACAHPLBB.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/OMGDBNFKEDI.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BDODPHAJFIP;
class BJFIOKEIFKM;
class CJOEFNAPNFO;
class CLBFDOIGIMB;
class EHEANJHPPCO;
class EPJAODADCEA;
class FJADHJABMON;
class KFHNCJALFJK;
class LDMNLJEPNBD;
class LPJLGOECHNI;
class MJHDNMKGLBJ;
class MOBLCFDAONK;
class PJIAEJICFAA;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define OOIJIDMLIAC_BHMLIJFHEFJ_OFFSET UNITYSDK_OFFSET(0x16C48D20)
#define OOIJIDMLIAC_DOCNHJJCEKP_OFFSET UNITYSDK_OFFSET(0x16C49780)
#define OOIJIDMLIAC_EBOEFKEODOB_OFFSET UNITYSDK_OFFSET(0x16C47630)
#define OOIJIDMLIAC_EBOIKEIKGFC_OFFSET UNITYSDK_OFFSET(0x16C454A0)
#define OOIJIDMLIAC_EJEEDMDODNI_OFFSET UNITYSDK_OFFSET(0x16C489C0)
#define OOIJIDMLIAC_FGDIJBOOCLP_OFFSET UNITYSDK_OFFSET(0x16C476C0)
#define OOIJIDMLIAC_FPKCPFCGLMG_OFFSET UNITYSDK_OFFSET(0x16C482A0)
#define OOIJIDMLIAC_GAPBDGFDGMA_OFFSET UNITYSDK_OFFSET(0x16C48C80)
#define OOIJIDMLIAC_GODAMFFCFFI_OFFSET UNITYSDK_OFFSET(0x16C47270)
#define OOIJIDMLIAC_HEOIKPOBNPI_OFFSET UNITYSDK_OFFSET(0x16C47310)
#define OOIJIDMLIAC_IKOADELPLED_OFFSET UNITYSDK_OFFSET(0x16C47C60)
#define OOIJIDMLIAC_INJADLLFBLO_OFFSET UNITYSDK_OFFSET(0x16C45F60)
#define OOIJIDMLIAC_INKDFHLPIJJ_OFFSET UNITYSDK_OFFSET(0x16C46000)
#define OOIJIDMLIAC_JOILHODMFNB_OFFSET UNITYSDK_OFFSET(0x16C47AC0)
#define OOIJIDMLIAC_KJEIBHIMBLO_OFFSET UNITYSDK_OFFSET(0x16C48830)
#define OOIJIDMLIAC_LOCABCMJDLA_OFFSET UNITYSDK_OFFSET(0x16C45C40)
#define OOIJIDMLIAC_MCDAMEFACCJ_OFFSET UNITYSDK_OFFSET(0x16C488F0)
#define OOIJIDMLIAC_MIJNEJKHAFH_OFFSET UNITYSDK_OFFSET(0x16C48DD0)
#define OOIJIDMLIAC_NCFHNDMNIDL_OFFSET UNITYSDK_OFFSET(0x16C47A50)
#define OOIJIDMLIAC_NHAAFJJFLEC_OFFSET UNITYSDK_OFFSET(0x16C46DB0)
#define OOIJIDMLIAC_OELADBPLLEM_OFFSET UNITYSDK_OFFSET(0x16C45E60)
#define OOIJIDMLIAC_PDPJPGHGNEJ_OFFSET UNITYSDK_OFFSET(0x16C44FD0)
#define OOIJIDMLIAC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C45B20)

inline static constexpr unsigned int OOIJIDMLIAC_TypeDefinitionIndex = 70884;

class OOIJIDMLIAC : public ::GDIACAHPLBB
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>*>* CDMCIBNOAPM; // 0xE8
	::System::Collections::Generic::List_1<::System::Tuple_2<::KFHNCJALFJK*, ::MOBLCFDAONK*>*>* HKPMNCFEIME; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* PDPJPGHGNEJ(::System::Int32 OIKFFGKDHME, ::System::Int32 JHFKDGBCOBA, ::UnityEngine::Vector3 FMJGOHNLJNA, ::FKCPBAAEJJO ANABLMFCGBH, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single PGFOFMIGAPE, ::System::Boolean MKFNCEIIPKH, ::System::Int32 NOKMIJNFMBH, ::System::Nullable_1<::System::Object*> KMGJPMEJDJJ, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>* ABMOHLBOBOP, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::FKCPBAAEJJO, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::System::Object*>, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_PDPJPGHGNEJ_OFFSET))(this, OIKFFGKDHME, JHFKDGBCOBA, FMJGOHNLJNA, ANABLMFCGBH, CKPGOKHECCH, PGFOFMIGAPE, MKFNCEIIPKH, NOKMIJNFMBH, KMGJPMEJDJJ, ABMOHLBOBOP, DJKNNEEKHGK);
	}

	::MoleMole::Battle::Entity* EBOIKEIKGFC(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 KBHFBLJPFJH, ::System::Boolean CIJNHPMPPLH, ::System::UInt32 IPBDNMMELHK, ::System::UInt32 KHBAJKCFJBN, ::System::Single DKKHJHILMGM, ::System::Collections::Generic::List_1<::OMGDBNFKEDI>* PMMLEKAKMIC, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK, ::System::Boolean LNPCFDMNMDE)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Collections::Generic::List_1<::OMGDBNFKEDI>*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_EBOIKEIKGFC_OFFSET))(this, OHOGDOMNHNK, CFJFMMGPGKE, KBHFBLJPFJH, CIJNHPMPPLH, IPBDNMMELHK, KHBAJKCFJBN, DKKHJHILMGM, PMMLEKAKMIC, DJKNNEEKHGK, LNPCFDMNMDE);
	}

	::MoleMole::Battle::Entity* LOCABCMJDLA(::System::Int32 NJEMNLDCHNN, ::System::Int32 LFAEBNBAGLK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_LOCABCMJDLA_OFFSET))(this, NJEMNLDCHNN, LFAEBNBAGLK);
	}

	static ::OOIJIDMLIAC* OELADBPLLEM()
	{
		return ((::OOIJIDMLIAC*(*)())((::PBYTE)hIl2Cpp + OOIJIDMLIAC_OELADBPLLEM_OFFSET))();
	}

	::System::Void INJADLLFBLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_INJADLLFBLO_OFFSET))(this);
	}

	::System::Void INKDFHLPIJJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::EPJAODADCEA* ONPGHHGJGDJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_INKDFHLPIJJ_OFFSET))(this, KECKGDFIALJ, ONPGHHGJGDJ);
	}

	::System::Void FGDIJBOOCLP(::System::Int32 NJEMNLDCHNN, ::System::Int32 LFAEBNBAGLK, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_FGDIJBOOCLP_OFFSET))(this, NJEMNLDCHNN, LFAEBNBAGLK, KECKGDFIALJ);
	}

	::System::Void NHAAFJJFLEC(::PJIAEJICFAA* MMPGIGLOBLD, ::BJFIOKEIFKM* LMOOANEELJH, ::System::Boolean GDIADPBOPEI)
	{
		return ((::System::Void(*)(::PVOID, ::PJIAEJICFAA*, ::BJFIOKEIFKM*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_NHAAFJJFLEC_OFFSET))(this, MMPGIGLOBLD, LMOOANEELJH, GDIADPBOPEI);
	}

	::System::Void NCFHNDMNIDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_NCFHNDMNIDL_OFFSET))(this);
	}

	::System::Void HEOIKPOBNPI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::DFDEIDBBGHG_1<::LDMNLJEPNBD*>* HEIKPAODMCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::DFDEIDBBGHG_1<::LDMNLJEPNBD*>*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_HEOIKPOBNPI_OFFSET))(this, KECKGDFIALJ, HEIKPAODMCK);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::Battle::Entity*> JOILHODMFNB(::System::UInt32 LACJPGJJLCH, ::System::UInt32 CCOIAGNGLNK, ::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single PGFOFMIGAPE, ::EHEANJHPPCO* BGGACCHFLJM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::Battle::Entity*>(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::EHEANJHPPCO*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_JOILHODMFNB_OFFSET))(this, LACJPGJJLCH, CCOIAGNGLNK, OHOGDOMNHNK, PGFOFMIGAPE, BGGACCHFLJM);
	}

	::System::Void IKOADELPLED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_IKOADELPLED_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* GODAMFFCFFI(::PJIAEJICFAA* MMPGIGLOBLD, ::BJFIOKEIFKM* LMOOANEELJH, ::System::Boolean GDIADPBOPEI)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::PJIAEJICFAA*, ::BJFIOKEIFKM*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_GODAMFFCFFI_OFFSET))(this, MMPGIGLOBLD, LMOOANEELJH, GDIADPBOPEI);
	}

	::MoleMole::Battle::Entity* FPKCPFCGLMG(::System::UInt32 LACJPGJJLCH, ::System::UInt32 CCOIAGNGLNK, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 BFBELMDIAHI, ::BDODPHAJFIP* KHGAFJPANNN)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::BDODPHAJFIP*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_FPKCPFCGLMG_OFFSET))(this, LACJPGJJLCH, CCOIAGNGLNK, OHOGDOMNHNK, BFBELMDIAHI, KHGAFJPANNN);
	}

	::System::Void KJEIBHIMBLO(::EPJAODADCEA* ONPGHHGJGDJ)
	{
		return ((::System::Void(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_KJEIBHIMBLO_OFFSET))(this, ONPGHHGJGDJ);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* EBOEFKEODOB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::LPJLGOECHNI* CGNDLDFMBOL)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::LPJLGOECHNI*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_EBOEFKEODOB_OFFSET))(this, KECKGDFIALJ, CGNDLDFMBOL);
	}

	::Cysharp::Threading::Tasks::UniTask MCDAMEFACCJ(::EPJAODADCEA* ONPGHHGJGDJ)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_MCDAMEFACCJ_OFFSET))(this, ONPGHHGJGDJ);
	}

	::MoleMole::Battle::Entity* EJEEDMDODNI(::System::UInt32 LACJPGJJLCH, ::System::UInt32 CCOIAGNGLNK, ::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single PGFOFMIGAPE, ::FJADHJABMON* IBLNNGGAOFF)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::FJADHJABMON*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_EJEEDMDODNI_OFFSET))(this, LACJPGJJLCH, CCOIAGNGLNK, OHOGDOMNHNK, PGFOFMIGAPE, IBLNNGGAOFF);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid GAPBDGFDGMA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::EPJAODADCEA* ONPGHHGJGDJ, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Battle::Entity*, ::EPJAODADCEA*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_GAPBDGFDGMA_OFFSET))(this, KECKGDFIALJ, ONPGHHGJGDJ, AMIDHEAIANO);
	}

	::MoleMole::Battle::Entity* BHMLIJFHEFJ(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA, ::UnityEngine::Vector3 FDHMCIFPNCK, ::System::Boolean MPBJAGIKPJM, ::System::UInt32 DDMDINPGCFI, ::System::UInt32 CEIDLKIHMLC, ::System::Single MNPNEHDOOMM, ::System::Collections::Generic::List_1<::OMGDBNFKEDI>* BJJBMHECMHC, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* ADACDPLIPED, ::System::Boolean GDJEOKGCFEM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Collections::Generic::List_1<::OMGDBNFKEDI>*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_BHMLIJFHEFJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM, BJJBMHECMHC, ADACDPLIPED, GDJEOKGCFEM);
	}

	::MoleMole::Battle::Entity* MIJNEJKHAFH(::System::UInt32 LACJPGJJLCH, ::System::UInt32 NJMLHHBCLFC, ::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single PGFOFMIGAPE, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::Boolean OAGJKHDHNNA, ::DNOPJGNOPJO EGDLIGBDIHA, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::CJOEFNAPNFO* NJBHDCFAILP)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Boolean, ::DNOPJGNOPJO, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::CJOEFNAPNFO*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_MIJNEJKHAFH_OFFSET))(this, LACJPGJJLCH, NJMLHHBCLFC, OHOGDOMNHNK, PGFOFMIGAPE, OLNAFBAENGH, OAGJKHDHNNA, EGDLIGBDIHA, OJBJBOJKFJO, NJBHDCFAILP);
	}

	::MoleMole::Battle::Entity* DOCNHJJCEKP(::System::Int32 MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA, ::UnityEngine::Vector3 FDHMCIFPNCK, ::FKCPBAAEJJO MPBJAGIKPJM, ::UnityEngine::Vector3 DDMDINPGCFI, ::System::Single CEIDLKIHMLC, ::System::Boolean MNPNEHDOOMM, ::System::Int32 BJJBMHECMHC, ::System::Nullable_1<::System::Object*> ADACDPLIPED, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>* GDJEOKGCFEM, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* NKKACNOKKKM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::FKCPBAAEJJO, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::System::Object*>, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_DOCNHJJCEKP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM, BJJBMHECMHC, ADACDPLIPED, GDJEOKGCFEM, NKKACNOKKKM);
	}
};
