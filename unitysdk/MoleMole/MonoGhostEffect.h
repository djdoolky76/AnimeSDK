#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class KPNIFGIKELE;
class NapGradient;
namespace MoleMole { class MonoGhostEffect_HHDCLEPMOHD; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGHOSTEFFECT_CBNGBOGHPHD_OFFSET UNITYSDK_OFFSET(0x130F85D0)
#define MOLEMOLE_MONOGHOSTEFFECT_CKALCMPKJHJ_OFFSET UNITYSDK_OFFSET(0x130FD870)
#define MOLEMOLE_MONOGHOSTEFFECT_COKMIIDJOGD_OFFSET UNITYSDK_OFFSET(0x13100F70)
#define MOLEMOLE_MONOGHOSTEFFECT_CREATEISOLATEDGHOST_OFFSET UNITYSDK_OFFSET(0x130FA6C0)
#define MOLEMOLE_MONOGHOSTEFFECT_DCACNFHOOAN_OFFSET UNITYSDK_OFFSET(0x13100E60)
#define MOLEMOLE_MONOGHOSTEFFECT_DCFPNELJKFG_OFFSET UNITYSDK_OFFSET(0x130F8330)
#define MOLEMOLE_MONOGHOSTEFFECT_EAPBJFMMIMG_OFFSET UNITYSDK_OFFSET(0x13100E70)
#define MOLEMOLE_MONOGHOSTEFFECT_EHOJCCNFIAD_OFFSET UNITYSDK_OFFSET(0x130F87F0)
#define MOLEMOLE_MONOGHOSTEFFECT_EMPTY_OFFSET UNITYSDK_OFFSET(0x130F7F70)
#define MOLEMOLE_MONOGHOSTEFFECT_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x130F8080)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_ECHOTIME_OFFSET UNITYSDK_OFFSET(0x130F84D0)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_IGNOREOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0x130F89B0)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_IGNOREWORLDTIMESCALE_OFFSET UNITYSDK_OFFSET(0x130F8780)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x130F8540)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_MAXGHOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x130F82C0)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x130F8A20)
#define MOLEMOLE_MONOGHOSTEFFECT_GFABPKBJOKG_OFFSET UNITYSDK_OFFSET(0x13102020)
#define MOLEMOLE_MONOGHOSTEFFECT_GGKONAFCPDB_OFFSET UNITYSDK_OFFSET(0x13101A60)
#define MOLEMOLE_MONOGHOSTEFFECT_GKBDOKIICDP_OFFSET UNITYSDK_OFFSET(0x13100A90)
#define MOLEMOLE_MONOGHOSTEFFECT_IBIKKMFLPOJ_OFFSET UNITYSDK_OFFSET(0x131002F0)
#define MOLEMOLE_MONOGHOSTEFFECT_IJABEFKEGGK_OFFSET UNITYSDK_OFFSET(0x130F9FB0)
#define MOLEMOLE_MONOGHOSTEFFECT_JCELMKNMICH_OFFSET UNITYSDK_OFFSET(0x130F8FE0)
#define MOLEMOLE_MONOGHOSTEFFECT_JDHLHJBBHKE_OFFSET UNITYSDK_OFFSET(0x13100A30)
#define MOLEMOLE_MONOGHOSTEFFECT_JJOFECDOCBO_OFFSET UNITYSDK_OFFSET(0x130F9160)
#define MOLEMOLE_MONOGHOSTEFFECT_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x131019D0)
#define MOLEMOLE_MONOGHOSTEFFECT_KBDDIGBLHCI_OFFSET UNITYSDK_OFFSET(0x130FAFC0)
#define MOLEMOLE_MONOGHOSTEFFECT_KPPGDLNFJFG_OFFSET UNITYSDK_OFFSET(0x130FA1A0)
#define MOLEMOLE_MONOGHOSTEFFECT_LADLMBLHOGL_OFFSET UNITYSDK_OFFSET(0x13101D70)
#define MOLEMOLE_MONOGHOSTEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x130F9200)
#define MOLEMOLE_MONOGHOSTEFFECT_MHMDFJIHNPA_OFFSET UNITYSDK_OFFSET(0x131010F0)
#define MOLEMOLE_MONOGHOSTEFFECT_MKBGGFPCIIE_OFFSET UNITYSDK_OFFSET(0x131019C0)
#define MOLEMOLE_MONOGHOSTEFFECT_MKKHCMNPDAI_OFFSET UNITYSDK_OFFSET(0x130FE790)
#define MOLEMOLE_MONOGHOSTEFFECT_MNOAGMJNPDC_OFFSET UNITYSDK_OFFSET(0x13101E90)
#define MOLEMOLE_MONOGHOSTEFFECT_NHOJFBCNLBN_OFFSET UNITYSDK_OFFSET(0x13100F80)
#define MOLEMOLE_MONOGHOSTEFFECT_OFFGHGOKBIH_OFFSET UNITYSDK_OFFSET(0x130FEF40)
#define MOLEMOLE_MONOGHOSTEFFECT_OHKAJJCCDPN_OFFSET UNITYSDK_OFFSET(0x130FE520)
#define MOLEMOLE_MONOGHOSTEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x130FA150)
#define MOLEMOLE_MONOGHOSTEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x130F9E30)
#define MOLEMOLE_MONOGHOSTEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x130F81B0)
#define MOLEMOLE_MONOGHOSTEFFECT_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x130FE320)
#define MOLEMOLE_MONOGHOSTEFFECT_PBGLLGCCKCF_OFFSET UNITYSDK_OFFSET(0x13100C30)
#define MOLEMOLE_MONOGHOSTEFFECT_PCECEEFALGI_OFFSET UNITYSDK_OFFSET(0x13100EE0)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_ECHOTIME_OFFSET UNITYSDK_OFFSET(0x130F84E0)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_IGNOREOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0x130F89C0)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_IGNOREWORLDTIMESCALE_OFFSET UNITYSDK_OFFSET(0x130F8790)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x130F8550)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_MAXGHOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x130F82D0)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x130F8A30)
#define MOLEMOLE_MONOGHOSTEFFECT_STARTANDACTIVEGHOSTEFFECT_OFFSET UNITYSDK_OFFSET(0x130FD760)
#define MOLEMOLE_MONOGHOSTEFFECT_STARTGHOSTMOVE_OFFSET UNITYSDK_OFFSET(0x130FDFD0)
#define MOLEMOLE_MONOGHOSTEFFECT_STOPGHOSTEFFECT_OFFSET UNITYSDK_OFFSET(0x130FDCE0)
#define MOLEMOLE_MONOGHOSTEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x130FE450)
#define MOLEMOLE_MONOGHOSTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x130FE370)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGhostEffect_TypeDefinitionIndex = 85701;

	class MonoGhostEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoGhostEffect*>** StaticGet_MBNFHLPNEJH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoGhostEffect*>**)Il2CppClass::FromTypeDefinitionIndex(MonoGhostEffect_TypeDefinitionIndex)->GetStaticField(0x34AF0);
		}
		static ::System::Boolean* StaticGet_HandleIgnoreTimeScaleInBattlePhotoMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoGhostEffect_TypeDefinitionIndex)->GetStaticField(0xB1D0);
		}
		static ::System::Int32* StaticGet_BIMOFMPPGIP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoGhostEffect_TypeDefinitionIndex)->GetStaticField(0xB1D4);
		}
		static ::System::Int32* StaticGet_CAJDBAHIHBI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoGhostEffect_TypeDefinitionIndex)->GetStaticField(0xB1D8);
		}
		::System::Boolean HFBOGDANOCM; // 0x18
		::System::Boolean GAHMOBHBBAH; // 0x19
		::System::Boolean IHLDIOOCHEM; // 0x1A
		::System::Byte _padding0[0x5];
		::Foundation::AssetPath DCHPELKOJOJ; // 0x20
		::UnityEngine::Material* FKOMJDGJKLK; // 0x30
		::System::Int32 LGKMOODGBDJ; // 0x38
		::System::Single HKGDFAKCLKL; // 0x3C
		::System::Single KGADIFKKGMH; // 0x40
		::System::Boolean AMOJFJHJIIF; // 0x44
		::System::Boolean GFJPJFLNCKC; // 0x45
		::System::Boolean HidePartsByEntity; // 0x46
		::System::Boolean NeedAlwaysHandleVisibilityState; // 0x47
		::MoleMole::Config::ConfigGhostMove* GhostMoveConfig; // 0x48
		::KPNIFGIKELE* AttackData; // 0x50
		::System::Boolean EOJEABJDOMC; // 0x58
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* JFMNCNDECMI; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>* MIOMNINIEFO; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>* DOHFLPBOLFE; // 0x70
		::System::Collections::Generic::List_1<::System::Object*>* OOIBMBJFFFP; // 0x78
		::System::Single DIKGKFJKIAG; // 0x80
		::System::Byte _padding2[0x4];
		::UnityEngine::GameObject* CCNBHOLAOMO; // 0x88
		::UnityEngine::GameObject* GKODMBNFIHK; // 0x90
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* GMACODGFLEL; // 0x98
		::Il2CppArray<::System::Int32>* NIFGGGNIAJG; // 0xA0
		::UnityEngine::GameObject* GNPLJLJIEOC; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IIKEBOMEJIJ; // 0xB0
		::UnityEngine::GameObject* BNLNLMMCIEA; // 0xB8
		::System::String* IOGCNHNAAHJ; // 0xC0
		::MoleMole::EntityHandle LDLMPHEEKBG; // 0xC8
		::System::Boolean GDEPKDNBFOO; // 0xD8
		::System::Byte _padding3[0x7];
		::UnityEngine::Material* HNKLMCLABAG; // 0xE0
		::System::Collections::Generic::List_1<::System::String*>* GHLFPEPMDFL; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DGIEMPPGOKK; // 0xF0
		::System::String* PJNPIIOIPCH; // 0xF8
		::System::Boolean PHEPBBEHNNB; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT__CCTOR_OFFSET))();
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoGhostEffect* GetComponentSafely(::System::Int32 HLJEFIIDMFA)
		{
			return ((::MoleMole::MonoGhostEffect*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GETCOMPONENTSAFELY_OFFSET))(HLJEFIIDMFA);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Int32 get_MaxGhostCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_MAXGHOSTCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxGhostCount(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_MAXGHOSTCOUNT_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_EchoTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_ECHOTIME_OFFSET))(this);
		}

		::System::Void set_EchoTime(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_ECHOTIME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_LIFETIME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_IgnoreWorldTimescale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_IGNOREWORLDTIMESCALE_OFFSET))(this);
		}

		::System::Void set_IgnoreWorldTimescale(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_IGNOREWORLDTIMESCALE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_IgnoreOwnerTimescale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_IGNOREOWNERTIMESCALE_OFFSET))(this);
		}

		::System::Void set_IgnoreOwnerTimescale(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_IGNOREOWNERTIMESCALE_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::EntityHandle get_OwnerEntity()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::MoleMole::EntityHandle EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_OWNERENTITY_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateIsolatedGhost(::System::String* HIAIKHDFCLN)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CREATEISOLATEDGHOST_OFFSET))(this, HIAIKHDFCLN);
		}

		::System::Void StartAndActiveGhostEffect(::System::String* DMOEIDOFDGP, ::System::Int32 DNJAJHFBACD, ::System::Single EGDFCMPNMBF, ::System::Single MLKLCEKJGPE, ::System::Boolean OKMDJCBNHDE, ::System::Boolean IAKCJHNNJDK, ::System::String* AELLPLBJELA, ::System::Boolean EINKGPGBHNI, ::System::Boolean DBKCAHCMJBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_STARTANDACTIVEGHOSTEFFECT_OFFSET))(this, DMOEIDOFDGP, DNJAJHFBACD, EGDFCMPNMBF, MLKLCEKJGPE, OKMDJCBNHDE, IAKCJHNNJDK, AELLPLBJELA, EINKGPGBHNI, DBKCAHCMJBC);
		}

		::System::Void StopGhostEffect(::System::String* DMOEIDOFDGP, ::System::String* AELLPLBJELA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_STOPGHOSTEFFECT_OFFSET))(this, DMOEIDOFDGP, AELLPLBJELA);
		}

		::System::Void StartGhostMove(::KPNIFGIKELE* IKHJEGECGJA)
		{
			return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_STARTGHOSTMOVE_OFFSET))(this, IKHJEGECGJA);
		}

		::System::Void OnEntityRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_ONENTITYREMOVE_OFFSET))(this);
		}

		::System::Void JCELMKNMICH(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_JCELMKNMICH_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::UnityEngine::Transform* OHKAJJCCDPN(::UnityEngine::Transform* JNLBPMKIFNK, ::System::Collections::Generic::List_1<::System::Object*>* HBEPDMIABKM)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_OHKAJJCCDPN_OFFSET))(JNLBPMKIFNK, HBEPDMIABKM);
		}

		::System::Void MKKHCMNPDAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_MKKHCMNPDAI_OFFSET))(this);
		}

		::System::Void JDHLHJBBHKE(::MoleMole::MonoGhostEffect_HHDCLEPMOHD* DNOCFAEEBPP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGhostEffect_HHDCLEPMOHD*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_JDHLHJBBHKE_OFFSET))(this, DNOCFAEEBPP);
		}

		::System::Void CKALCMPKJHJ(::System::String* DMOEIDOFDGP, ::System::Int32 DNJAJHFBACD, ::System::Single EGDFCMPNMBF, ::System::Single MLKLCEKJGPE, ::System::Boolean OKMDJCBNHDE, ::System::Boolean IAKCJHNNJDK, ::System::String* AELLPLBJELA, ::System::Boolean EINKGPGBHNI, ::System::Boolean DBKCAHCMJBC, ::MoleMole::Config::ConfigGhostMove* NGJAGBJIBHN, ::KPNIFGIKELE* IKHJEGECGJA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::ConfigGhostMove*, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CKALCMPKJHJ_OFFSET))(this, DMOEIDOFDGP, DNJAJHFBACD, EGDFCMPNMBF, MLKLCEKJGPE, OKMDJCBNHDE, IAKCJHNNJDK, AELLPLBJELA, EINKGPGBHNI, DBKCAHCMJBC, NGJAGBJIBHN, IKHJEGECGJA);
		}

		::System::Void KBDDIGBLHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_KBDDIGBLHCI_OFFSET))(this);
		}

		::System::Boolean DCACNFHOOAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_DCACNFHOOAN_OFFSET))(this);
		}

		::System::Void IBIKKMFLPOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_IBIKKMFLPOJ_OFFSET))(this);
		}

		::System::Void CBNGBOGHPHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CBNGBOGHPHD_OFFSET))(this);
		}

		::System::Void KPPGDLNFJFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_KPPGDLNFJFG_OFFSET))(this);
		}

		::System::Void GKBDOKIICDP(::UnityEngine::Material* BCILHHMOEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GKBDOKIICDP_OFFSET))(this, BCILHHMOEOA);
		}

		::System::Boolean PBGLLGCCKCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_PBGLLGCCKCF_OFFSET))(this);
		}

		::System::Void DCFPNELJKFG(::System::Int32 KDEHMPGOCEP, ::System::Int32 PADJNMGMGHO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_DCFPNELJKFG_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
		}

		::System::Void PCECEEFALGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_PCECEEFALGI_OFFSET))(this);
		}

		::System::Boolean COKMIIDJOGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_COKMIIDJOGD_OFFSET))(this);
		}

		::System::Void NHOJFBCNLBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_NHOJFBCNLBN_OFFSET))(this);
		}

		::System::Void MHMDFJIHNPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_MHMDFJIHNPA_OFFSET))(this);
		}

		::System::String* MKBGGFPCIIE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_MKBGGFPCIIE_OFFSET))(this);
		}

		static ::System::Void JPOLBPCHLHK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_JPOLBPCHLHK_OFFSET))();
		}

		::System::Void EAPBJFMMIMG(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_EAPBJFMMIMG_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void LADLMBLHOGL(::UnityEngine::Transform* LMHNJIBCLJF, ::UnityEngine::Transform* ANGENKPPACJ, ::System::Collections::Generic::List_1<::System::Object*>* ENJLMLHDNMG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LADLMBLHOGL_OFFSET))(this, LMHNJIBCLJF, ANGENKPPACJ, ENJLMLHDNMG);
		}

		::System::Void MNOAGMJNPDC(::System::Boolean AHEAEIMIJJK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_MNOAGMJNPDC_OFFSET))(this, AHEAEIMIJJK);
		}

		::System::Void JJOFECDOCBO(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_JJOFECDOCBO_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void EHOJCCNFIAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_EHOJCCNFIAD_OFFSET))(this);
		}

		::UnityEngine::Transform* GFABPKBJOKG(::UnityEngine::Transform* AEJHJNOLDEE, ::UnityEngine::Transform* IKFBHKOCFIJ, ::UnityEngine::Transform* HCBOADOACKH)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GFABPKBJOKG_OFFSET))(this, AEJHJNOLDEE, IKFBHKOCFIJ, HCBOADOACKH);
		}

		::System::Void GGKONAFCPDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GGKONAFCPDB_OFFSET))(this);
		}

		::System::Void OFFGHGOKBIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_OFFGHGOKBIH_OFFSET))(this);
		}

		::System::Void IJABEFKEGGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_IJABEFKEGGK_OFFSET))(this);
		}
	};
}
