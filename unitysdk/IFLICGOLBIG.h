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

#define IFLICGOLBIG_AEBIAADHGCA_OFFSET UNITYSDK_OFFSET(0x1BC1C9F0)
#define IFLICGOLBIG_AJKDAOHKOJI_OFFSET UNITYSDK_OFFSET(0x1BC1D480)
#define IFLICGOLBIG_ANACKKHJOLE_OFFSET UNITYSDK_OFFSET(0x1BC1E1B0)
#define IFLICGOLBIG_APLFLIBHHKO_OFFSET UNITYSDK_OFFSET(0x1BC1F060)
#define IFLICGOLBIG_BHMCHMCFNEE_OFFSET UNITYSDK_OFFSET(0x1BC1E510)
#define IFLICGOLBIG_BNMCFMBCDKA_OFFSET UNITYSDK_OFFSET(0x1BC1D400)
#define IFLICGOLBIG_CKBMHOPHGBK_OFFSET UNITYSDK_OFFSET(0x1BC1EDC0)
#define IFLICGOLBIG_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1BC1F530)
#define IFLICGOLBIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1BF50)
#define IFLICGOLBIG_DLOOIGBEGLN_OFFSET UNITYSDK_OFFSET(0x1BC1CCD0)
#define IFLICGOLBIG_DNIDKLHDFPC_OFFSET UNITYSDK_OFFSET(0x1BC1F380)
#define IFLICGOLBIG_FHJDNHCILJC_OFFSET UNITYSDK_OFFSET(0x1BC1F7B0)
#define IFLICGOLBIG_FHOGPLHMLMG_OFFSET UNITYSDK_OFFSET(0x1BC1F1E0)
#define IFLICGOLBIG_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1BC1CE60)
#define IFLICGOLBIG_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x1BC1F790)
#define IFLICGOLBIG_GET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x1BC1F730)
#define IFLICGOLBIG_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1BC1F710)
#define IFLICGOLBIG_GET_ORIGINSCALE_OFFSET UNITYSDK_OFFSET(0x1BC1F750)
#define IFLICGOLBIG_GOFNOEHHHPD_OFFSET UNITYSDK_OFFSET(0x1BC1DC80)
#define IFLICGOLBIG_HCCPAFCKNFO_OFFSET UNITYSDK_OFFSET(0x1BC1D010)
#define IFLICGOLBIG_HINFHOPMNGM_OFFSET UNITYSDK_OFFSET(0x1BC1EF70)
#define IFLICGOLBIG_IFGOPLNPNJI_OFFSET UNITYSDK_OFFSET(0x1BC1EA70)
#define IFLICGOLBIG_JAIINMIHICH_OFFSET UNITYSDK_OFFSET(0x1BC1D800)
#define IFLICGOLBIG_KDDNNPMHHIP_OFFSET UNITYSDK_OFFSET(0x1BC1D5E0)
#define IFLICGOLBIG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1BC1E930)
#define IFLICGOLBIG_KIJEOCANFKC_OFFSET UNITYSDK_OFFSET(0x1BC1F300)
#define IFLICGOLBIG_MACAOCEALBP_OFFSET UNITYSDK_OFFSET(0x1BC1E3B0)
#define IFLICGOLBIG_MCGJCAMAPEE_OFFSET UNITYSDK_OFFSET(0x1BC1C930)
#define IFLICGOLBIG_MILOKMAEDOD_OFFSET UNITYSDK_OFFSET(0x1BC1DBC0)
#define IFLICGOLBIG_MJHIFABJDHJ_OFFSET UNITYSDK_OFFSET(0x1BC1EA10)
#define IFLICGOLBIG_MJILMOPECAP_OFFSET UNITYSDK_OFFSET(0x1BC1CB00)
#define IFLICGOLBIG_MKPMDMEEKMG_OFFSET UNITYSDK_OFFSET(0x1BC1DAF0)
#define IFLICGOLBIG_MMBOIIEPHDG_OFFSET UNITYSDK_OFFSET(0x1BC1F480)
#define IFLICGOLBIG_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x1BC1CC70)
#define IFLICGOLBIG_OMBKMCLNPHM_OFFSET UNITYSDK_OFFSET(0x1BC1ECB0)
#define IFLICGOLBIG_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1BC1EFD0)
#define IFLICGOLBIG_OPMLFMHMPMC_OFFSET UNITYSDK_OFFSET(0x1BC1C890)
#define IFLICGOLBIG_PCFPACPKHMO_OFFSET UNITYSDK_OFFSET(0x1BC1F0C0)
#define IFLICGOLBIG_PFADCGNDCCC_OFFSET UNITYSDK_OFFSET(0x1BC1E480)
#define IFLICGOLBIG_PKFKFIBGHCP_OFFSET UNITYSDK_OFFSET(0x1BC1ED70)
#define IFLICGOLBIG_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x1BC1F7A0)
#define IFLICGOLBIG_SET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x1BC1F740)
#define IFLICGOLBIG_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1BC1F720)
#define IFLICGOLBIG_SET_ORIGINSCALE_OFFSET UNITYSDK_OFFSET(0x1BC1F770)

inline static constexpr unsigned int IFLICGOLBIG_TypeDefinitionIndex = 61600;

	class IFLICGOLBIG : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* JJOACHEJAAE; // 0x10
		::UnityEngine::AnimationCurve* ADHDLIKBDPG; // 0x18
		::UnityEngine::AnimationCurve* OJGFKCCJAEF; // 0x20
		::UnityEngine::Transform* FOIBBKOJEGF; // 0x28
		::UnityEngine::Transform* KHOOJMNKMKC; // 0x30
		::UnityEngine::Rigidbody* LONMALFCKOI; // 0x38
		::UnityEngine::AnimationCurve* EJLMIDGOLAH; // 0x40
		::UnityEngine::Material* AOMONHPBCJP; // 0x48
		::UnityEngine::Transform* LKDOKJKLMIH; // 0x50
		::RPG::Client::MonoDiceCombatDice* EFGDMKMFMKM; // 0x58
		::UnityEngine::Material* GMHFMJCDJMI; // 0x60
		::UnityEngine::AnimationClip* AKLPLKFNMOC; // 0x68
		::UnityEngine::AnimationCurve* DIGPJMIEBFJ; // 0x70
		::UnityEngine::MeshRenderer* OABLIHKLBNI; // 0x78
		::UnityEngine::AnimationCurve* IPBLPNJGFIC; // 0x80
		::System::Collections::Generic::List_1<::FDPCDGOJKNK*>* EBJICJCMKCJ; // 0x88
		::UnityEngine::AnimationCurve* IBHJMCFFMPL; // 0x90
		::Il2CppArray<::UnityEngine::MeshRenderer*>* IEIDPPIBOED; // 0x98
		::UnityEngine::Animation* PMOJILOJEPE; // 0xA0
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceFunctionTag>* PGFEAIOPMGG; // 0xA8
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0xB0
		::Il2CppArray<::UnityEngine::MeshRenderer*>* MOECGMPCECP; // 0xB8
		::UnityEngine::Transform* _EffectRoot_k__BackingField; // 0xC0
		::UnityEngine::Transform* FGPGBNKEHPL; // 0xC8
		::UnityEngine::MaterialPropertyBlock* LCAGOLEJJJK; // 0xD0
		::UnityEngine::Material* NHIKGJCENKF; // 0xD8
		::UnityEngine::Vector3 _OriginScale_k__BackingField; // 0xE0
		::System::Boolean KIKKCLIPHEM; // 0xEC
		::System::Boolean _IsPlayerTeam_k__BackingField; // 0xED
		::System::Byte _padding0[0x2];
		::System::Int32 HFPKKJLJJHM; // 0xF0
		::System::Boolean LPJMDKIBPCG; // 0xF4
		::System::Boolean _IsSpecial_k__BackingField; // 0xF5
		::System::Boolean HGMDEGPEENE; // 0xF6
		::System::Boolean ALJCMNDHLBE; // 0xF7
		::System::Int32 GMDBHJKEAEI; // 0xF8
		::RPG::GameCore::DiceCombatDiceRare IEFPLNLMFNO; // 0xFC
		::System::UInt32 DKFDAEFMFHJ; // 0x100
		::System::UInt32 LCPOBJEKCFB; // 0x104
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
