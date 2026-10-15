#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFLICGOLBIG_DiceCombatDicePlayerOutlineType.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceFunctionTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceRare.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple.h"
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

#define IFLICGOLBIG_AEBIAADHGCA_OFFSET UNITYSDK_OFFSET(0x15F207B0)
#define IFLICGOLBIG_AJKDAOHKOJI_OFFSET UNITYSDK_OFFSET(0x15F21210)
#define IFLICGOLBIG_ANACKKHJOLE_OFFSET UNITYSDK_OFFSET(0x15F21F20)
#define IFLICGOLBIG_APLFLIBHHKO_OFFSET UNITYSDK_OFFSET(0x15F22AC0)
#define IFLICGOLBIG_BHMCHMCFNEE_OFFSET UNITYSDK_OFFSET(0x15F22280)
#define IFLICGOLBIG_BNMCFMBCDKA_OFFSET UNITYSDK_OFFSET(0x15F21190)
#define IFLICGOLBIG_CKBMHOPHGBK_OFFSET UNITYSDK_OFFSET(0x15F22820)
#define IFLICGOLBIG_COMPARETO_OFFSET UNITYSDK_OFFSET(0x15F22F80)
#define IFLICGOLBIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1FE00)
#define IFLICGOLBIG_DLOOIGBEGLN_OFFSET UNITYSDK_OFFSET(0x15F20A80)
#define IFLICGOLBIG_DNIDKLHDFPC_OFFSET UNITYSDK_OFFSET(0x15F22DE0)
#define IFLICGOLBIG_FHJDNHCILJC_OFFSET UNITYSDK_OFFSET(0x15F23200)
#define IFLICGOLBIG_FHOGPLHMLMG_OFFSET UNITYSDK_OFFSET(0x15F22C40)
#define IFLICGOLBIG_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x15F20C20)
#define IFLICGOLBIG_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x15F231E0)
#define IFLICGOLBIG_GET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x15F23180)
#define IFLICGOLBIG_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x15F23160)
#define IFLICGOLBIG_GET_ORIGINSCALE_OFFSET UNITYSDK_OFFSET(0x15F231A0)
#define IFLICGOLBIG_GOFNOEHHHPD_OFFSET UNITYSDK_OFFSET(0x15F21A00)
#define IFLICGOLBIG_HCCPAFCKNFO_OFFSET UNITYSDK_OFFSET(0x15F20DB0)
#define IFLICGOLBIG_HINFHOPMNGM_OFFSET UNITYSDK_OFFSET(0x15F229D0)
#define IFLICGOLBIG_IFGOPLNPNJI_OFFSET UNITYSDK_OFFSET(0x15F22650)
#define IFLICGOLBIG_JAIINMIHICH_OFFSET UNITYSDK_OFFSET(0x15F21580)
#define IFLICGOLBIG_KDDNNPMHHIP_OFFSET UNITYSDK_OFFSET(0x15F21370)
#define IFLICGOLBIG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15F22520)
#define IFLICGOLBIG_KIJEOCANFKC_OFFSET UNITYSDK_OFFSET(0x15F22D60)
#define IFLICGOLBIG_MACAOCEALBP_OFFSET UNITYSDK_OFFSET(0x15F22120)
#define IFLICGOLBIG_MCGJCAMAPEE_OFFSET UNITYSDK_OFFSET(0x15F206E0)
#define IFLICGOLBIG_MILOKMAEDOD_OFFSET UNITYSDK_OFFSET(0x15F21940)
#define IFLICGOLBIG_MJHIFABJDHJ_OFFSET UNITYSDK_OFFSET(0x15F22600)
#define IFLICGOLBIG_MJILMOPECAP_OFFSET UNITYSDK_OFFSET(0x15F208B0)
#define IFLICGOLBIG_MKPMDMEEKMG_OFFSET UNITYSDK_OFFSET(0x15F21870)
#define IFLICGOLBIG_MMBOIIEPHDG_OFFSET UNITYSDK_OFFSET(0x15F22ED0)
#define IFLICGOLBIG_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x15F20A20)
#define IFLICGOLBIG_OMBKMCLNPHM_OFFSET UNITYSDK_OFFSET(0x15F22710)
#define IFLICGOLBIG_ONSELECT_OFFSET UNITYSDK_OFFSET(0x15F22A30)
#define IFLICGOLBIG_OPMLFMHMPMC_OFFSET UNITYSDK_OFFSET(0x15F20640)
#define IFLICGOLBIG_PCFPACPKHMO_OFFSET UNITYSDK_OFFSET(0x15F22B20)
#define IFLICGOLBIG_PFADCGNDCCC_OFFSET UNITYSDK_OFFSET(0x15F221F0)
#define IFLICGOLBIG_PKFKFIBGHCP_OFFSET UNITYSDK_OFFSET(0x15F227D0)
#define IFLICGOLBIG_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x15F231F0)
#define IFLICGOLBIG_SET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x15F23190)
#define IFLICGOLBIG_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x15F23170)
#define IFLICGOLBIG_SET_ORIGINSCALE_OFFSET UNITYSDK_OFFSET(0x15F231C0)

inline static constexpr unsigned int IFLICGOLBIG_TypeDefinitionIndex = 60315;

	class IFLICGOLBIG : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* JJOACHEJAAE; // 0x10
		::UnityEngine::Transform* FGPGBNKEHPL; // 0x18
		::UnityEngine::AnimationCurve* DIGPJMIEBFJ; // 0x20
		::UnityEngine::AnimationCurve* IPBLPNJGFIC; // 0x28
		::UnityEngine::Material* NHIKGJCENKF; // 0x30
		::RPG::Client::MonoDiceCombatDice* EFGDMKMFMKM; // 0x38
		::UnityEngine::Material* AOMONHPBCJP; // 0x40
		::UnityEngine::AnimationCurve* EJLMIDGOLAH; // 0x48
		::Il2CppArray<::UnityEngine::MeshRenderer*>* MOECGMPCECP; // 0x50
		::System::Collections::Generic::List_1<::FDPCDGOJKNK*>* EBJICJCMKCJ; // 0x58
		::UnityEngine::AnimationClip* AKLPLKFNMOC; // 0x60
		::UnityEngine::Transform* LKDOKJKLMIH; // 0x68
		::Il2CppArray<::UnityEngine::MeshRenderer*>* IEIDPPIBOED; // 0x70
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0x78
		::UnityEngine::MaterialPropertyBlock* LCAGOLEJJJK; // 0x80
		::UnityEngine::Transform* _EffectRoot_k__BackingField; // 0x88
		::UnityEngine::MeshRenderer* OABLIHKLBNI; // 0x90
		::UnityEngine::AnimationCurve* ADHDLIKBDPG; // 0x98
		::UnityEngine::Transform* FOIBBKOJEGF; // 0xA0
		::UnityEngine::Animation* PMOJILOJEPE; // 0xA8
		::UnityEngine::AnimationCurve* IBHJMCFFMPL; // 0xB0
		::UnityEngine::Material* GMHFMJCDJMI; // 0xB8
		::UnityEngine::AnimationCurve* OJGFKCCJAEF; // 0xC0
		::UnityEngine::Rigidbody* LONMALFCKOI; // 0xC8
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceFunctionTag>* PGFEAIOPMGG; // 0xD0
		::UnityEngine::Transform* KHOOJMNKMKC; // 0xD8
		::System::UInt32 LCPOBJEKCFB; // 0xE0
		::System::Boolean HGMDEGPEENE; // 0xE4
		::System::Boolean KIKKCLIPHEM; // 0xE5
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 _OriginScale_k__BackingField; // 0xE8
		::System::Int32 HFPKKJLJJHM; // 0xF4
		::System::UInt32 DKFDAEFMFHJ; // 0xF8
		::System::Boolean _IsPlayerTeam_k__BackingField; // 0xFC
		::System::Boolean LPJMDKIBPCG; // 0xFD
		::System::Boolean _IsSpecial_k__BackingField; // 0xFE
		::System::Boolean ALJCMNDHLBE; // 0xFF
		::RPG::GameCore::DiceCombatDiceType CEBDDDJMJIJ; // 0x100
		::RPG::GameCore::DiceCombatDiceRare IEFPLNLMFNO; // 0x104
		::System::Int32 GMDBHJKEAEI; // 0x108
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

		::System::ValueTuple GOFNOEHHHPD()
		{
			return ((::System::ValueTuple(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLICGOLBIG_GOFNOEHHHPD_OFFSET))(this);
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
