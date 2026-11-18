#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/MoleMole/SuperDebug_LogModule.h"
#include "unitysdk/NHPANPDOPKH.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AEMCAOEICDG;
class BHCAIFIEJPJ;
class EHKKPCGAJHO;
class FGKEMGLFJEE;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class ScratchConfigObject; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace System { class Object; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define EIJCHJAFBNO_AOEOHIJBJKG_OFFSET UNITYSDK_OFFSET(0x14158E20)
#define EIJCHJAFBNO_BHOHEEJLKMB_OFFSET UNITYSDK_OFFSET(0x141563D0)
#define EIJCHJAFBNO_BKHGCDFPABA_OFFSET UNITYSDK_OFFSET(0x14156550)
#define EIJCHJAFBNO_CDBHJBJOKOP_OFFSET UNITYSDK_OFFSET(0x141570D0)
#define EIJCHJAFBNO_EBKDLKCDDGN_OFFSET UNITYSDK_OFFSET(0x14153F60)
#define EIJCHJAFBNO_EOPCOHNKLDD_1_OFFSET UNITYSDK_OFFSET(0x14156660)
#define EIJCHJAFBNO_EOPCOHNKLDD_OFFSET UNITYSDK_OFFSET(0x14158BC0)
#define EIJCHJAFBNO_FHEPNIBDFKB_OFFSET UNITYSDK_OFFSET(0x14155870)
#define EIJCHJAFBNO_GCKALHGEHNE_OFFSET UNITYSDK_OFFSET(0x141592D0)
#define EIJCHJAFBNO_GCPGGDHFOOG_OFFSET UNITYSDK_OFFSET(0x141588C0)
#define EIJCHJAFBNO_GLNPIOBKNFB_OFFSET UNITYSDK_OFFSET(0x14153DC0)
#define EIJCHJAFBNO_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x14152CB0)
#define EIJCHJAFBNO_HFMCKKCNLLK_OFFSET UNITYSDK_OFFSET(0x14154A10)
#define EIJCHJAFBNO_HKLDHHNHOFI_OFFSET UNITYSDK_OFFSET(0x14158BA0)
#define EIJCHJAFBNO_IOHAHNNJCOJ_OFFSET UNITYSDK_OFFSET(0x14155A70)
#define EIJCHJAFBNO_JDFECBKAFIL_OFFSET UNITYSDK_OFFSET(0x141592F0)
#define EIJCHJAFBNO_JNECAJLJKDG_OFFSET UNITYSDK_OFFSET(0x14155DA0)
#define EIJCHJAFBNO_KBNJLPEFHOJ_OFFSET UNITYSDK_OFFSET(0x14157EF0)
#define EIJCHJAFBNO_LAIHIPCMHHM_OFFSET UNITYSDK_OFFSET(0x14156700)
#define EIJCHJAFBNO_LANOPADOBKH_OFFSET UNITYSDK_OFFSET(0x141559A0)
#define EIJCHJAFBNO_LBPJNKDFPCK_OFFSET UNITYSDK_OFFSET(0x14156BB0)
#define EIJCHJAFBNO_LKPIEODEDII_OFFSET UNITYSDK_OFFSET(0x14158050)
#define EIJCHJAFBNO_MAFDILLLIHM_OFFSET UNITYSDK_OFFSET(0x14153590)
#define EIJCHJAFBNO_MBCDAOBLBGB_OFFSET UNITYSDK_OFFSET(0x14158B60)
#define EIJCHJAFBNO_MBECPDMEAOH_OFFSET UNITYSDK_OFFSET(0x14155C70)
#define EIJCHJAFBNO_MDCIFLONKDF_OFFSET UNITYSDK_OFFSET(0x141564F0)
#define EIJCHJAFBNO_MEDLHCNBDFC_OFFSET UNITYSDK_OFFSET(0x14153DA0)
#define EIJCHJAFBNO_MNEBHLAKDBD_OFFSET UNITYSDK_OFFSET(0x14159210)
#define EIJCHJAFBNO_NJIOPMCBIOI_OFFSET UNITYSDK_OFFSET(0x14158820)
#define EIJCHJAFBNO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x14159000)
#define EIJCHJAFBNO_ODEJGEIINNN_OFFSET UNITYSDK_OFFSET(0x14153070)
#define EIJCHJAFBNO_OKHLGFALMCC_OFFSET UNITYSDK_OFFSET(0x141577E0)
#define EIJCHJAFBNO_OONNPBEHGEF_OFFSET UNITYSDK_OFFSET(0x141548D0)
#define EIJCHJAFBNO_PBEGFPGJKNB_OFFSET UNITYSDK_OFFSET(0x14158D10)
#define EIJCHJAFBNO__CCTOR_OFFSET UNITYSDK_OFFSET(0x14153050)
#define EIJCHJAFBNO__CTOR_OFFSET UNITYSDK_OFFSET(0x14152DE0)

inline static constexpr unsigned int EIJCHJAFBNO_TypeDefinitionIndex = 62211;

class EIJCHJAFBNO : public ::NHPANPDOPKH
{
public:
	static ::System::Random** StaticGet_PJNHHJDJDMI()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(EIJCHJAFBNO_TypeDefinitionIndex)->GetStaticField(0x37580);
	}
	static ::System::Single* StaticGet_GEGBFHOPEHI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(EIJCHJAFBNO_TypeDefinitionIndex)->GetStaticField(0xC8B0);
	}
	static ::MoleMole::SuperDebug_LogModule* StaticGet_ABKOANAKCFO()
	{
		return (::MoleMole::SuperDebug_LogModule*)Il2CppClass::FromTypeDefinitionIndex(EIJCHJAFBNO_TypeDefinitionIndex)->GetStaticField(0xC8B4);
	}
	static ::System::Single* StaticGet_LCHCMPMBLIM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(EIJCHJAFBNO_TypeDefinitionIndex)->GetStaticField(0xC8B8);
	}
	::FGKEMGLFJEE* HIJMPLOIGCA; // 0x28
	::MoleMole::Battle::ScratchConfigObject* HBDIPMONDPM; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* PLBKGKCLCFO; // 0x38
	::Il2CppArray<::UnityEngine::RaycastHit>* FCCIEACOABD; // 0x40
	::UnityEngine::Transform* JKJJHACLPOM; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* LILPLCCKGBF; // 0x50
	::UnityEngine::Transform* JDIDMIDLHKJ; // 0x58
	::System::Collections::Generic::HashSet_1<::System::UInt32>* PIBECFJMJMK; // 0x60
	::UnityEngine::Transform* KAIFPAGMFEC; // 0x68
	::MoleMole::Battle::Entity* NGODDCIOJDP; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>* GKPHHBKBDGK; // 0x78
	::System::Collections::Generic::List_1<::System::Object*>* GCFNMMCNPNH; // 0x80
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>* PAHIILGEAAN; // 0x88
	::AEMCAOEICDG* PBNBFMNMEFG; // 0x90
	::System::Int32 LIIBGMBLLDE; // 0x98
	::UnityEngine::Vector3 _HAFOLJOEMBA_k__BackingField; // 0x9C
	::System::Int32 DGPMNKFHPBN; // 0xA8
	::UnityEngine::Vector3 IDGNLOPGONP; // 0xAC
	::MoleMole::Config::AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus PDFEFKEJPEC; // 0xB8
	::UnityEngine::Color GBEIGEHGFNN; // 0xBC
	::UnityEngine::Vector3 CAMCIHINEOA; // 0xCC
	::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis KANJDCAECLM; // 0xD8
	::System::Single IMNEHLOHEJJ; // 0xDC
	::UnityEngine::Vector3 LEOCOGFKEEM; // 0xE0
	::MoleMole::Config::DamageDecalData KGOFPBCAJJJ; // 0xEC
	::System::Int32 BJLNFHFDOEO; // 0x10C
	::System::Boolean ONIOAKFIMKE; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIJCHJAFBNO__CCTOR_OFFSET))();
	}

	::System::Void HEGPPHAGDCO(::BHCAIFIEJPJ* HBDIPMONDPM, ::MoleMole::Config::HitWallCameraShakeConfig* LEBHGKLBPMP)
	{
		return ((::System::Void(*)(::PVOID, ::BHCAIFIEJPJ*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_HEGPPHAGDCO_OFFSET))(this, HBDIPMONDPM, LEBHGKLBPMP);
	}

	::System::Void ODEJGEIINNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_ODEJGEIINNN_OFFSET))(this);
	}

	::System::Void MAFDILLLIHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_MAFDILLLIHM_OFFSET))(this);
	}

	::UnityEngine::Vector3 MEDLHCNBDFC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_MEDLHCNBDFC_OFFSET))(this);
	}

	::System::Boolean GLNPIOBKNFB(::UnityEngine::RaycastHit& GIAEPMKCBIB, ::UnityEngine::RaycastHit& GCLICJIGHFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_GLNPIOBKNFB_OFFSET))(this, GIAEPMKCBIB, GCLICJIGHFF);
	}

	::System::Void EBKDLKCDDGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_EBKDLKCDDGN_OFFSET))(this);
	}

	::System::Void HFMCKKCNLLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_HFMCKKCNLLK_OFFSET))(this);
	}

	::System::Void LANOPADOBKH(::AEMCAOEICDG* IPLJNKNDBFI, ::EHKKPCGAJHO* EDLBHCJCBIB)
	{
		return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_LANOPADOBKH_OFFSET))(this, IPLJNKNDBFI, EDLBHCJCBIB);
	}

	::System::Void MBECPDMEAOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_MBECPDMEAOH_OFFSET))(this);
	}

	::System::Void BKHGCDFPABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_BKHGCDFPABA_OFFSET))(this);
	}

	::UnityEngine::Vector3 LAIHIPCMHHM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_LAIHIPCMHHM_OFFSET))(this);
	}

	::System::Void LBPJNKDFPCK(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 HBKHPCEMPLB, ::System::Single BDEDDEGJFKL, ::UnityEngine::RaycastHit FEFNENBAMKL, ::System::Boolean& BMDPHHKKFID)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Boolean&))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_LBPJNKDFPCK_OFFSET))(this, GIAEPMKCBIB, HBKHPCEMPLB, BDEDDEGJFKL, FEFNENBAMKL, BMDPHHKKFID);
	}

	::System::Boolean OKHLGFALMCC(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 HBKHPCEMPLB, ::System::Single BDEDDEGJFKL, ::System::Boolean MECOFDHMKEB)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_OKHLGFALMCC_OFFSET))(this, GIAEPMKCBIB, HBKHPCEMPLB, BDEDDEGJFKL, MECOFDHMKEB);
	}

	::UnityEngine::Vector3 KBNJLPEFHOJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_KBNJLPEFHOJ_OFFSET))(this);
	}

	::System::Void LKPIEODEDII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_LKPIEODEDII_OFFSET))(this);
	}

	::System::Void IOHAHNNJCOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_IOHAHNNJCOJ_OFFSET))(this);
	}

	::System::Void NJIOPMCBIOI(::BHCAIFIEJPJ* MIALFKCCCPI, ::MoleMole::Config::HitWallCameraShakeConfig* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::BHCAIFIEJPJ*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_NJIOPMCBIOI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean CDBHJBJOKOP(::UnityEngine::Vector3 KIAIIPAMCBC, ::UnityEngine::Vector3 HBKHPCEMPLB, ::UnityEngine::RaycastHit HMMMOCJAEOA, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* IEMOLBFFCBG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_CDBHJBJOKOP_OFFSET))(this, KIAIIPAMCBC, HBKHPCEMPLB, HMMMOCJAEOA, IEMOLBFFCBG);
	}

	::UnityEngine::Vector3 OONNPBEHGEF(::UnityEngine::Vector3 HFMHOELKCAJ, ::UnityEngine::Vector3 KBNHAJHPKPO)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_OONNPBEHGEF_OFFSET))(this, HFMHOELKCAJ, KBNHAJHPKPO);
	}

	::System::Void MDCIFLONKDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_MDCIFLONKDF_OFFSET))(this);
	}

	::System::Void BHOHEEJLKMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_BHOHEEJLKMB_OFFSET))(this);
	}

	::UnityEngine::Vector3 FHEPNIBDFKB(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector3 BMOEJGJKBDJ, ::UnityEngine::Vector3 AGHNEGFHKMC)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_FHEPNIBDFKB_OFFSET))(this, OPMPKFEHOBM, BMOEJGJKBDJ, AGHNEGFHKMC);
	}

	::System::Void MBCDAOBLBGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_MBCDAOBLBGB_OFFSET))(this);
	}

	::System::Int32 HKLDHHNHOFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_HKLDHHNHOFI_OFFSET))(this);
	}

	::System::Void EOPCOHNKLDD(::System::Single OMKCAIOOBFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_EOPCOHNKLDD_OFFSET))(this, OMKCAIOOBFL);
	}

	::System::Void PBEGFPGJKNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_PBEGFPGJKNB_OFFSET))(this);
	}

	::System::Void AOEOHIJBJKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_AOEOHIJBJKG_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::Vector3 MNEBHLAKDBD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_MNEBHLAKDBD_OFFSET))(this);
	}

	::System::Void GCKALHGEHNE(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_GCKALHGEHNE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EOPCOHNKLDD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_EOPCOHNKLDD_1_OFFSET))(this);
	}

	::System::Void JNECAJLJKDG(::UnityEngine::Vector3 CJGAFLKGLKL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_JNECAJLJKDG_OFFSET))(this, CJGAFLKGLKL);
	}

	::System::Boolean JDFECBKAFIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_JDFECBKAFIL_OFFSET))(this);
	}

	::System::Boolean GCPGGDHFOOG(::UnityEngine::Vector3& GIAEPMKCBIB, ::UnityEngine::Vector3& DOBFFIICAII)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_GCPGGDHFOOG_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII);
	}
};
