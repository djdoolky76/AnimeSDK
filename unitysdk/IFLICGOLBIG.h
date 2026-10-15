#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFLICGOLBIG_DiceCombatDicePlayerOutlineType.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceFunctionTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceRare.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector2.h"
class ANIOGPJFCKF;
class FDPCDGOJKNK;
class IFLICGOLBIG;
namespace RPG::Client { class MonoDiceCombatDice; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define IFLICGOLBIG_AEBIAADHGCA_OFFSET UNITYSDK_OFFSET(0x15F148A0)
#define IFLICGOLBIG_AJKDAOHKOJI_OFFSET UNITYSDK_OFFSET(0x15F15310)
#define IFLICGOLBIG_ANACKKHJOLE_OFFSET UNITYSDK_OFFSET(0x15F16030)
#define IFLICGOLBIG_APLFLIBHHKO_OFFSET UNITYSDK_OFFSET(0x15F16BE0)
#define IFLICGOLBIG_BHMCHMCFNEE_OFFSET UNITYSDK_OFFSET(0x15F16390)
#define IFLICGOLBIG_BNMCFMBCDKA_OFFSET UNITYSDK_OFFSET(0x15F15290)
#define IFLICGOLBIG_CKBMHOPHGBK_OFFSET UNITYSDK_OFFSET(0x15F16940)
#define IFLICGOLBIG_COMPARETO_OFFSET UNITYSDK_OFFSET(0x15F170B0)
#define IFLICGOLBIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15F13E00)
#define IFLICGOLBIG_DLOOIGBEGLN_OFFSET UNITYSDK_OFFSET(0x15F14B80)
#define IFLICGOLBIG_DNIDKLHDFPC_OFFSET UNITYSDK_OFFSET(0x15F16F00)
#define IFLICGOLBIG_FHJDNHCILJC_OFFSET UNITYSDK_OFFSET(0x15F17330)
#define IFLICGOLBIG_FHOGPLHMLMG_OFFSET UNITYSDK_OFFSET(0x15F16D60)
#define IFLICGOLBIG_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x15F14D10)
#define IFLICGOLBIG_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x15F17310)
#define IFLICGOLBIG_GET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x15F172B0)
#define IFLICGOLBIG_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x15F17290)
#define IFLICGOLBIG_GET_ORIGINSCALE_OFFSET UNITYSDK_OFFSET(0x15F172D0)
#define IFLICGOLBIG_GOFNOEHHHPD_OFFSET UNITYSDK_OFFSET(0x15F15B10)
#define IFLICGOLBIG_HCCPAFCKNFO_OFFSET UNITYSDK_OFFSET(0x15F14EB0)
#define IFLICGOLBIG_HINFHOPMNGM_OFFSET UNITYSDK_OFFSET(0x15F16AF0)
#define IFLICGOLBIG_IFGOPLNPNJI_OFFSET UNITYSDK_OFFSET(0x15F16770)
#define IFLICGOLBIG_JAIINMIHICH_OFFSET UNITYSDK_OFFSET(0x15F15690)
#define IFLICGOLBIG_KDDNNPMHHIP_OFFSET UNITYSDK_OFFSET(0x15F15470)
#define IFLICGOLBIG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15F16630)
#define IFLICGOLBIG_KIJEOCANFKC_OFFSET UNITYSDK_OFFSET(0x15F16E80)
#define IFLICGOLBIG_MACAOCEALBP_OFFSET UNITYSDK_OFFSET(0x15F16230)
#define IFLICGOLBIG_MCGJCAMAPEE_OFFSET UNITYSDK_OFFSET(0x15F147E0)
#define IFLICGOLBIG_MILOKMAEDOD_OFFSET UNITYSDK_OFFSET(0x15F15A50)
#define IFLICGOLBIG_MJHIFABJDHJ_OFFSET UNITYSDK_OFFSET(0x15F16710)
#define IFLICGOLBIG_MJILMOPECAP_OFFSET UNITYSDK_OFFSET(0x15F149B0)
#define IFLICGOLBIG_MKPMDMEEKMG_OFFSET UNITYSDK_OFFSET(0x15F15980)
#define IFLICGOLBIG_MMBOIIEPHDG_OFFSET UNITYSDK_OFFSET(0x15F17000)
#define IFLICGOLBIG_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x15F14B20)
#define IFLICGOLBIG_OMBKMCLNPHM_OFFSET UNITYSDK_OFFSET(0x15F16830)
#define IFLICGOLBIG_ONSELECT_OFFSET UNITYSDK_OFFSET(0x15F16B50)
#define IFLICGOLBIG_OPMLFMHMPMC_OFFSET UNITYSDK_OFFSET(0x15F14740)
#define IFLICGOLBIG_PCFPACPKHMO_OFFSET UNITYSDK_OFFSET(0x15F16C40)
#define IFLICGOLBIG_PFADCGNDCCC_OFFSET UNITYSDK_OFFSET(0x15F16300)
#define IFLICGOLBIG_PKFKFIBGHCP_OFFSET UNITYSDK_OFFSET(0x15F168F0)
#define IFLICGOLBIG_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x15F17320)
#define IFLICGOLBIG_SET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x15F172C0)
#define IFLICGOLBIG_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x15F172A0)
#define IFLICGOLBIG_SET_ORIGINSCALE_OFFSET UNITYSDK_OFFSET(0x15F172F0)

inline static constexpr unsigned int IFLICGOLBIG_TypeDefinitionIndex = 60315;

	class IFLICGOLBIG : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::MeshRenderer*>* IEIDPPIBOED; // 0x10
		::UnityEngine::Rigidbody* LONMALFCKOI; // 0x18
		::Il2CppArray<::UnityEngine::MeshRenderer*>* MOECGMPCECP; // 0x20
		::UnityEngine::Transform* _EffectRoot_k__BackingField; // 0x28
		::UnityEngine::MeshRenderer* OABLIHKLBNI; // 0x30
		::UnityEngine::Material* GMHFMJCDJMI; // 0x38
		::UnityEngine::Transform* FOIBBKOJEGF; // 0x40
		::UnityEngine::AnimationCurve* JJOACHEJAAE; // 0x48
		::UnityEngine::AnimationClip* AKLPLKFNMOC; // 0x50
		::UnityEngine::AnimationCurve* DIGPJMIEBFJ; // 0x58
		::System::Collections::Generic::List_1<::FDPCDGOJKNK*>* EBJICJCMKCJ; // 0x60
		::UnityEngine::Transform* KHOOJMNKMKC; // 0x68
		::UnityEngine::AnimationCurve* EJLMIDGOLAH; // 0x70
		::UnityEngine::AnimationCurve* OJGFKCCJAEF; // 0x78
		::RPG::Client::MonoDiceCombatDice* EFGDMKMFMKM; // 0x80
		::UnityEngine::Transform* LKDOKJKLMIH; // 0x88
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceFunctionTag>* PGFEAIOPMGG; // 0x90
		::UnityEngine::AnimationCurve* IBHJMCFFMPL; // 0x98
		::UnityEngine::Animation* PMOJILOJEPE; // 0xA0
		::UnityEngine::Transform* FGPGBNKEHPL; // 0xA8
		::UnityEngine::Material* NHIKGJCENKF; // 0xB0
		::UnityEngine::AnimationCurve* ADHDLIKBDPG; // 0xB8
		::UnityEngine::Material* AOMONHPBCJP; // 0xC0
		::UnityEngine::AnimationCurve* IPBLPNJGFIC; // 0xC8
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0xD0
		::UnityEngine::MaterialPropertyBlock* LCAGOLEJJJK; // 0xD8
		::UnityEngine::Vector3 _OriginScale_k__BackingField; // 0xE0
		::System::Int32 GMDBHJKEAEI; // 0xEC
		::System::Boolean LPJMDKIBPCG; // 0xF0
		::System::Boolean _IsPlayerTeam_k__BackingField; // 0xF1
		::System::Boolean HGMDEGPEENE; // 0xF2
		::System::Boolean KIKKCLIPHEM; // 0xF3
		::System::Boolean ALJCMNDHLBE; // 0xF4
		::System::Boolean _IsSpecial_k__BackingField; // 0xF5
		::System::Byte _padding0[0x2];
		::RPG::GameCore::DiceCombatDiceRare IEFPLNLMFNO; // 0xF8
		::System::UInt32 LCPOBJEKCFB; // 0xFC
		::System::Int32 HFPKKJLJJHM; // 0x100
		::System::UInt32 DKFDAEFMFHJ; // 0x104
		::RPG::GameCore::DiceCombatDiceType CEBDDDJMJIJ; // 0x108
		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5, ::System::Boolean a6, ::ANIOGPJFCKF* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean, ::ANIOGPJFCKF*))((::PBYTE)hIl2Cpp + IFLICGOLBIG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::GameObject* NBHCPBBGAKA(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IFLICGOLBIG_NBHCPBBGAKA_OFFSET))(this, a1);
		}

		::System::Void DLOOIGBEGLN(::IFLICGOLBIG_DiceCombatDicePlayerOutlineType a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFLICGOLBIG_DiceCombatDicePlayerOutlineType))((::PBYTE)hIl2Cpp + IFLICGOLBIG_DLOOIGBEGLN_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void OPMLFMHMPMC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLICGOLBIG_OPMLFMHMPMC_OFFSET))(this, a1);
		}

		::System::Void HCCPAFCKNFO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFLICGOLBIG_HCCPAFCKNFO_OFFSET))(this, a1);
		}

		::System::Void BNMCFMBCDKA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLICGOLBIG_BNMCFMBCDKA_OFFSET))(this, a1);
		}

		::System::Void MCGJCAMAPEE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLICGOLBIG_MCGJCAMAPEE_OFFSET))(this, a1);
		}

		::System::Void AJKDAOHKOJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_AJKDAOHKOJI_OFFSET))(this);
		}

		::System::Void KDDNNPMHHIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFLICGOLBIG_KDDNNPMHHIP_OFFSET))(this, a1);
		}

		::System::Void JAIINMIHICH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_JAIINMIHICH_OFFSET))(this);
		}

		::System::Void MKPMDMEEKMG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLICGOLBIG_MKPMDMEEKMG_OFFSET))(this, a1);
		}

		::System::Void MILOKMAEDOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_MILOKMAEDOD_OFFSET))(this);
		}

		::System::ValueTuple_3<::System::Int32, ::FDPCDGOJKNK*, ::System::UInt32> GOFNOEHHHPD()
		{
			return ((::System::ValueTuple_3<::System::Int32, ::FDPCDGOJKNK*, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_GOFNOEHHHPD_OFFSET))(this);
		}

		::System::UInt32 ANACKKHJOLE(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFLICGOLBIG_ANACKKHJOLE_OFFSET))(this, a1);
		}

		::System::Void MACAOCEALBP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFLICGOLBIG_MACAOCEALBP_OFFSET))(this, a1);
		}

		::System::Int32 PFADCGNDCCC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_PFADCGNDCCC_OFFSET))(this);
		}

		::System::Void BHMCHMCFNEE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFLICGOLBIG_BHMCHMCFNEE_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void IFGOPLNPNJI(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLICGOLBIG_IFGOPLNPNJI_OFFSET))(this, a1, a2);
		}

		::System::Boolean HINFHOPMNGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_HINFHOPMNGM_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_ONSELECT_OFFSET))(this);
		}

		::System::Void APLFLIBHHKO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLICGOLBIG_APLFLIBHHKO_OFFSET))(this, a1);
		}

		::System::Void PCFPACPKHMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_PCFPACPKHMO_OFFSET))(this);
		}

		::System::Boolean FHOGPLHMLMG(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IFLICGOLBIG_FHOGPLHMLMG_OFFSET))(this, a1);
		}

		::System::Boolean KIJEOCANFKC(::RPG::GameCore::DiceCombatDiceFunctionTag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceFunctionTag))((::PBYTE)hIl2Cpp + IFLICGOLBIG_KIJEOCANFKC_OFFSET))(this, a1);
		}

		::System::Void DNIDKLHDFPC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLICGOLBIG_DNIDKLHDFPC_OFFSET))(this, a1);
		}

		::System::Void PKFKFIBGHCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_PKFKFIBGHCP_OFFSET))(this);
		}

		::System::Void CKBMHOPHGBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_CKBMHOPHGBK_OFFSET))(this);
		}

		::System::Void MMBOIIEPHDG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLICGOLBIG_MMBOIIEPHDG_OFFSET))(this, a1);
		}

		::System::Void AEBIAADHGCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_AEBIAADHGCA_OFFSET))(this);
		}

		::System::Void MJILMOPECAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_MJILMOPECAP_OFFSET))(this);
		}

		::System::Int32 CompareTo(::IFLICGOLBIG* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + IFLICGOLBIG_COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::Void set_IsSpecial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLICGOLBIG_SET_ISSPECIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_GET_ISPLAYERTEAM_OFFSET))(this);
		}

		::System::Void set_IsPlayerTeam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLICGOLBIG_SET_ISPLAYERTEAM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_OriginScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_GET_ORIGINSCALE_OFFSET))(this);
		}

		::System::Void set_OriginScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFLICGOLBIG_SET_ORIGINSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* MJHIFABJDHJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_MJHIFABJDHJ_OFFSET))(this);
		}

		::UnityEngine::Transform* get_EffectRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_GET_EFFECTROOT_OFFSET))(this);
		}

		::System::Void set_EffectRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IFLICGOLBIG_SET_EFFECTROOT_OFFSET))(this, a1);
		}

		::System::Boolean FHJDNHCILJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_FHJDNHCILJC_OFFSET))(this);
		}

		::System::Boolean OMBKMCLNPHM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_OMBKMCLNPHM_OFFSET))(this);
		}

	};
