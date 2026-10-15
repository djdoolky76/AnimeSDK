#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDHPIGIAOLE_PropMovementPauseReason.h"
#include "unitysdk/FFHBHCGJMHL.h"
#include "unitysdk/OEEKHELGHKF.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class CHALEFNMKHD;
class EBLHIMCKJIJ;
class EDHPIGIAOLE_FNGCPJCJLEF;
class EDHPIGIAOLE_LIJMHDLPAMF;
class EDHPIGIAOLE_NDEMGEPDEEE;
class EDHPIGIAOLE_OMBIIFFIKED;
class EKFMIDBJDIA;
class JLMHPEHICNM;
class MJEOAJOAKOD;
class PJKJEMANFDG;
namespace RPG::Client { class MonoAnimatorPlatform; }
namespace RPG::Client { class MonoMovementPropHandle; }
namespace RPG::Client { class NodeRotationController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define EDHPIGIAOLE_AFBKGHCIAIJ_OFFSET UNITYSDK_OFFSET(0x13316710)
#define EDHPIGIAOLE_AKFCMGNMLOI_OFFSET UNITYSDK_OFFSET(0x13315DB0)
#define EDHPIGIAOLE_ALGBFIAIMDJ_1_OFFSET UNITYSDK_OFFSET(0x1331B960)
#define EDHPIGIAOLE_ALGBFIAIMDJ_OFFSET UNITYSDK_OFFSET(0x1331BCF0)
#define EDHPIGIAOLE_BEEKOMGPMFC_OFFSET UNITYSDK_OFFSET(0x13318250)
#define EDHPIGIAOLE_BIMOIHGKJJM_OFFSET UNITYSDK_OFFSET(0x1331C090)
#define EDHPIGIAOLE_BKLGBBEGDMI_OFFSET UNITYSDK_OFFSET(0x1331B5A0)
#define EDHPIGIAOLE_CAFGAKJAHJO_OFFSET UNITYSDK_OFFSET(0x1331E140)
#define EDHPIGIAOLE_CBMDFAGLOJF_OFFSET UNITYSDK_OFFSET(0x13316850)
#define EDHPIGIAOLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1331E7D0)
#define EDHPIGIAOLE_CFENJOJFPJH_OFFSET UNITYSDK_OFFSET(0x13319850)
#define EDHPIGIAOLE_CHJGLGIDCDE_OFFSET UNITYSDK_OFFSET(0x1331D780)
#define EDHPIGIAOLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1331E720)
#define EDHPIGIAOLE_DADOAGLPOOF_OFFSET UNITYSDK_OFFSET(0x1331C530)
#define EDHPIGIAOLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13316970)
#define EDHPIGIAOLE_EBLMEKGAKAD_OFFSET UNITYSDK_OFFSET(0x13317E80)
#define EDHPIGIAOLE_EIPAAOKNPMK_OFFSET UNITYSDK_OFFSET(0x1331C5F0)
#define EDHPIGIAOLE_EPGLFKIAELD_OFFSET UNITYSDK_OFFSET(0x13317510)
#define EDHPIGIAOLE_FAMBEBGPDHE_OFFSET UNITYSDK_OFFSET(0x1331A900)
#define EDHPIGIAOLE_FJEJJPHFLAI_OFFSET UNITYSDK_OFFSET(0x13317520)
#define EDHPIGIAOLE_GBGBCBAMIHD_OFFSET UNITYSDK_OFFSET(0x1331B7C0)
#define EDHPIGIAOLE_GEOGDMGNCBC_OFFSET UNITYSDK_OFFSET(0x13317EE0)
#define EDHPIGIAOLE_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x13316950)
#define EDHPIGIAOLE_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13316960)
#define EDHPIGIAOLE_GJCNMJFDFFD_OFFSET UNITYSDK_OFFSET(0x13316560)
#define EDHPIGIAOLE_GNBPOHIGELI_OFFSET UNITYSDK_OFFSET(0x13316690)
#define EDHPIGIAOLE_HGEAAOALNCN_OFFSET UNITYSDK_OFFSET(0x1331E010)
#define EDHPIGIAOLE_HHFJMLEDHJL_OFFSET UNITYSDK_OFFSET(0x13318870)
#define EDHPIGIAOLE_ICKHOCFOKEF_OFFSET UNITYSDK_OFFSET(0x13317E10)
#define EDHPIGIAOLE_JCKAKCFGMFL_OFFSET UNITYSDK_OFFSET(0x133164E0)
#define EDHPIGIAOLE_JDGDDAEMKLN_OFFSET UNITYSDK_OFFSET(0x133182A0)
#define EDHPIGIAOLE_JEJAMLCMNOL_OFFSET UNITYSDK_OFFSET(0x13315E20)
#define EDHPIGIAOLE_JOIFJFPJPLK_OFFSET UNITYSDK_OFFSET(0x1331DA10)
#define EDHPIGIAOLE_KEEFCMMKEMI_OFFSET UNITYSDK_OFFSET(0x133185E0)
#define EDHPIGIAOLE_KIGDKOIAHDA_OFFSET UNITYSDK_OFFSET(0x1331E6C0)
#define EDHPIGIAOLE_KMNMBCHAHGI_OFFSET UNITYSDK_OFFSET(0x1331D060)
#define EDHPIGIAOLE_KNDMCBFGBON_OFFSET UNITYSDK_OFFSET(0x13317D80)
#define EDHPIGIAOLE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13317CD0)
#define EDHPIGIAOLE_LIHCECIMPCD_OFFSET UNITYSDK_OFFSET(0x13316E60)
#define EDHPIGIAOLE_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x133173A0)
#define EDHPIGIAOLE_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0x1331A630)
#define EDHPIGIAOLE_MDIIOKKDKNC_OFFSET UNITYSDK_OFFSET(0x1331C7B0)
#define EDHPIGIAOLE_MPHAKAMIDNH_OFFSET UNITYSDK_OFFSET(0x1331E270)
#define EDHPIGIAOLE_NMDBHPPNDJH_OFFSET UNITYSDK_OFFSET(0x133163B0)
#define EDHPIGIAOLE_NMELICOMEBB_OFFSET UNITYSDK_OFFSET(0x13318190)
#define EDHPIGIAOLE_OJPFNEAGENG_OFFSET UNITYSDK_OFFSET(0x133160B0)
#define EDHPIGIAOLE_OKBGOJGCHKM_OFFSET UNITYSDK_OFFSET(0x1331A3A0)
#define EDHPIGIAOLE_OMBAAONHJFG_1_OFFSET UNITYSDK_OFFSET(0x1331ABD0)
#define EDHPIGIAOLE_OMBAAONHJFG_OFFSET UNITYSDK_OFFSET(0x1331B140)
#define EDHPIGIAOLE_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x13316ED0)
#define EDHPIGIAOLE_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x13317000)
#define EDHPIGIAOLE_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13317210)
#define EDHPIGIAOLE_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x1331B8D0)
#define EDHPIGIAOLE_PIPONFBCNDD_OFFSET UNITYSDK_OFFSET(0x13319BB0)
#define EDHPIGIAOLE_PJLMPEFKEBF_OFFSET UNITYSDK_OFFSET(0x13315D50)
#define EDHPIGIAOLE_PLLEBJFKMFE_OFFSET UNITYSDK_OFFSET(0x1331C280)
#define EDHPIGIAOLE_TICK_OFFSET UNITYSDK_OFFSET(0x13317480)
#define EDHPIGIAOLE___FINISHMOVEINSTANCE_B__61_0_OFFSET UNITYSDK_OFFSET(0x1331E810)

	class EDHPIGIAOLE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* CELJHFCBFMI; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* NOJCNBMDBDJ; // 0x20
		::OEEKHELGHKF PKMMBEABKFM; // 0x28
		::PJKJEMANFDG* MFNDJCAENBI; // 0x38
		::RPG::Client::NodeRotationController* AJLJABAOPKE; // 0x40
		::OEEKHELGHKF PNONHPKIPAJ; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::MonoAnimatorPlatform*>* NBBJKFHCFNK; // 0x58
		::FFHBHCGJMHL DFDBKKKCDFM; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>* EGIMKGJEIBO; // 0x70
		::UnityEngine::Coroutine* OGGMIKOGKPF; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::MonoMovementPropHandle*>* KBAIBBPMPGD; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* CDGFMANJOII; // 0x88
		::System::Collections::Generic::List_1<::System::Object*>* BIAJOKOMFNJ; // 0x90
		::RPG::GameCore::GameEntity* JNDHPNOLOJE; // 0x98
		::OEEKHELGHKF HBJBCBJAHOJ; // 0xA0
		::System::Action* LIGJMDCBMNK; // 0xB0
		::RPG::GameCore::GameEntity* GACDIFAKJOI; // 0xB8
		::System::Action* JDCLPCCMAEP; // 0xC0
		::System::Boolean NFKGDIABFNP; // 0xC8
		::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0xC9
		::System::Boolean OEBLHFNMHBH; // 0xCA
		::System::Byte _padding0[0x1];
		::System::Int32 AKKGIHHHCAO; // 0xCC
		::System::Int32 EJFOIFFPPGN; // 0xD0
		::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0xD4
		::System::Int32 CHNDFMGPEGD; // 0xD8
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0xDC
		::UnityEngine::Vector3 LAMALDEMMNP; // 0xE8
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_LMGFPANNLHN()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)UnitySDK::FromName("", "EDHPIGIAOLE")->GetStaticField(0x6FF10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDHPIGIAOLE_CCTOR_OFFSET))();
		}

		::System::Boolean PJLMPEFKEBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_PJLMPEFKEBF_OFFSET))(this);
		}

		::System::Boolean AKFCMGNMLOI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_AKFCMGNMLOI_OFFSET))(this, a1);
		}

		::System::Void JEJAMLCMNOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_JEJAMLCMNOL_OFFSET))(this);
		}

		::System::Void OJPFNEAGENG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_OJPFNEAGENG_OFFSET))(this);
		}

		::System::Void NMDBHPPNDJH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_NMDBHPPNDJH_OFFSET))(this, a1);
		}

		::System::Void GJCNMJFDFFD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_GJCNMJFDFFD_OFFSET))(this, a1);
		}

		::System::Void JCKAKCFGMFL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_JCKAKCFGMFL_OFFSET))(this, a1, a2);
		}

		::System::Void GNBPOHIGELI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_GNBPOHIGELI_OFFSET))(this, a1);
		}

		::System::Void AFBKGHCIAIJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_AFBKGHCIAIJ_OFFSET))(this, a1);
		}

		::System::Void CBMDFAGLOJF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_CBMDFAGLOJF_OFFSET))(this, a1);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void ICKHOCFOKEF(::System::Boolean a1, ::EDHPIGIAOLE_PropMovementPauseReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::EDHPIGIAOLE_PropMovementPauseReason))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_ICKHOCFOKEF_OFFSET))(this, a1, a2);
		}

		::System::Void EBLMEKGAKAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_EBLMEKGAKAD_OFFSET))(this);
		}

		::MJEOAJOAKOD* NMELICOMEBB()
		{
			return ((::MJEOAJOAKOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_NMELICOMEBB_OFFSET))(this);
		}

		::System::Void BEEKOMGPMFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_BEEKOMGPMFC_OFFSET))(this);
		}

		::System::Void JDGDDAEMKLN(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_JDGDDAEMKLN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void CFENJOJFPJH(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_CFENJOJFPJH_OFFSET))(this, a1, a2);
		}

		::System::Void PIPONFBCNDD(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::CHALEFNMKHD* a5, ::System::Boolean a6, ::System::Boolean a7, ::JLMHPEHICNM* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::CHALEFNMKHD*, ::System::Boolean, ::System::Boolean, ::JLMHPEHICNM*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_PIPONFBCNDD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void LPFBANCOMPE(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::CHALEFNMKHD* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::CHALEFNMKHD*, ::System::Boolean))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_LPFBANCOMPE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void FAMBEBGPDHE(::EDHPIGIAOLE_FNGCPJCJLEF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EDHPIGIAOLE_FNGCPJCJLEF*, ::System::Boolean))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_FAMBEBGPDHE_OFFSET))(this, a1, a2);
		}

		::System::Void OMBAAONHJFG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_OMBAAONHJFG_OFFSET))(this, a1);
		}

		::System::Void OMBAAONHJFG_1(::EDHPIGIAOLE_FNGCPJCJLEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDHPIGIAOLE_FNGCPJCJLEF*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_OMBAAONHJFG_1_OFFSET))(this, a1);
		}

		::EDHPIGIAOLE_FNGCPJCJLEF* BKLGBBEGDMI(::System::String* a1)
		{
			return ((::EDHPIGIAOLE_FNGCPJCJLEF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_BKLGBBEGDMI_OFFSET))(this, a1);
		}

		::EBLHIMCKJIJ* GBGBCBAMIHD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::EBLHIMCKJIJ*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_GBGBCBAMIHD_OFFSET))(this, a1, a2);
		}

		::System::Void PAFCMAMJENB(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::System::Void FJEJJPHFLAI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_FJEJJPHFLAI_OFFSET))(this, a1);
		}

		::System::Void KNDMCBFGBON(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_KNDMCBFGBON_OFFSET))(this, a1);
		}

		::System::Boolean PLLEBJFKMFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_PLLEBJFKMFE_OFFSET))(this);
		}

		::System::Void BIMOIHGKJJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_BIMOIHGKJJM_OFFSET))(this);
		}

		::System::Void HHFJMLEDHJL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_HHFJMLEDHJL_OFFSET))(this, a1);
		}

		::System::Void DADOAGLPOOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_DADOAGLPOOF_OFFSET))(this);
		}

		::System::Void EIPAAOKNPMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_EIPAAOKNPMK_OFFSET))(this);
		}

		::System::Void MDIIOKKDKNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_MDIIOKKDKNC_OFFSET))(this);
		}

		::System::Void KMNMBCHAHGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_KMNMBCHAHGI_OFFSET))(this);
		}

		::System::Void CHJGLGIDCDE(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::CHALEFNMKHD* a4, ::System::Boolean a5, ::JLMHPEHICNM* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::CHALEFNMKHD*, ::System::Boolean, ::JLMHPEHICNM*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_CHJGLGIDCDE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::EDHPIGIAOLE_LIJMHDLPAMF* HGEAAOALNCN()
		{
			return ((::EDHPIGIAOLE_LIJMHDLPAMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_HGEAAOALNCN_OFFSET))(this);
		}

		::System::Void GEOGDMGNCBC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_GEOGDMGNCBC_OFFSET))(this, a1);
		}

		::System::Void LIHCECIMPCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_LIHCECIMPCD_OFFSET))(this);
		}

		::EDHPIGIAOLE_OMBIIFFIKED* KEEFCMMKEMI(::System::String* a1)
		{
			return ((::EDHPIGIAOLE_OMBIIFFIKED*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_KEEFCMMKEMI_OFFSET))(this, a1);
		}

		::System::Void OKBGOJGCHKM(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::Boolean a5, ::CHALEFNMKHD* a6, ::System::Boolean a7, ::JLMHPEHICNM* a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::CHALEFNMKHD*, ::System::Boolean, ::JLMHPEHICNM*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_OKBGOJGCHKM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void ALGBFIAIMDJ(::EDHPIGIAOLE_LIJMHDLPAMF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EDHPIGIAOLE_LIJMHDLPAMF*, ::System::Single))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_ALGBFIAIMDJ_OFFSET))(this, a1, a2);
		}

		::EDHPIGIAOLE_NDEMGEPDEEE* CAFGAKJAHJO()
		{
			return ((::EDHPIGIAOLE_NDEMGEPDEEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_CAFGAKJAHJO_OFFSET))(this);
		}

		::System::Boolean JOIFJFPJPLK(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::CHALEFNMKHD* a5, ::System::Boolean a6, ::JLMHPEHICNM* a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::CHALEFNMKHD*, ::System::Boolean, ::JLMHPEHICNM*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_JOIFJFPJPLK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ALGBFIAIMDJ_1(::EDHPIGIAOLE_NDEMGEPDEEE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EDHPIGIAOLE_NDEMGEPDEEE*, ::System::Single))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_ALGBFIAIMDJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void MPHAKAMIDNH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_MPHAKAMIDNH_OFFSET))(this, a1);
		}

		::System::Boolean KIGDKOIAHDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_KIGDKOIAHDA_OFFSET))(this);
		}

		::System::Boolean EPGLFKIAELD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_EPGLFKIAELD_OFFSET))(this);
		}

		::System::Void __FinishMoveInstance_b__61_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE___FINISHMOVEINSTANCE_B__61_0_OFFSET))(this);
		}

	};
