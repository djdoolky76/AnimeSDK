#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IOLIAAFBFON_PIIIIACJBAI;
class LegacyGPUParticleSystem;
class WaveFloating;
class WaveSimPanel;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AdaptiveTessellationRenderer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }

#define EIHHFOLMCFC_BEOIBEBIGFF_OFFSET UNITYSDK_OFFSET(0x154BF0B0)
#define EIHHFOLMCFC_BGABMDHBPPN_OFFSET UNITYSDK_OFFSET(0x154BCB50)
#define EIHHFOLMCFC_BHCMCMADHBF_OFFSET UNITYSDK_OFFSET(0x154BFA70)
#define EIHHFOLMCFC_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x154BD210)
#define EIHHFOLMCFC_CINPOHJAGDE_OFFSET UNITYSDK_OFFSET(0x154BFB50)
#define EIHHFOLMCFC_CKJPNFBNCPP_OFFSET UNITYSDK_OFFSET(0x154BCCE0)
#define EIHHFOLMCFC_CLMKNFILOLB_OFFSET UNITYSDK_OFFSET(0x154BDF10)
#define EIHHFOLMCFC_CTOR_OFFSET UNITYSDK_OFFSET(0x154BFF10)
#define EIHHFOLMCFC_DKBPHJAAOEN_OFFSET UNITYSDK_OFFSET(0x154BE7A0)
#define EIHHFOLMCFC_DLFKFJOLDCF_OFFSET UNITYSDK_OFFSET(0x154BE5F0)
#define EIHHFOLMCFC_EBOAPHJJJDI_OFFSET UNITYSDK_OFFSET(0x154BD500)
#define EIHHFOLMCFC_EIIDGAHDOMD_OFFSET UNITYSDK_OFFSET(0x154BFCC0)
#define EIHHFOLMCFC_EKFKKCHODJD_OFFSET UNITYSDK_OFFSET(0x154BD9E0)
#define EIHHFOLMCFC_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0x154BD1D0)
#define EIHHFOLMCFC_EPKFOKCCLHC_OFFSET UNITYSDK_OFFSET(0x154BCF90)
#define EIHHFOLMCFC_FFFEGOKABJD_OFFSET UNITYSDK_OFFSET(0x154BF660)
#define EIHHFOLMCFC_FKGFEHLOAJB_OFFSET UNITYSDK_OFFSET(0x154BDB20)
#define EIHHFOLMCFC_FNABJBCHHNN_OFFSET UNITYSDK_OFFSET(0x154BF8B0)
#define EIHHFOLMCFC_GCBAEEAJNGH_OFFSET UNITYSDK_OFFSET(0x154BEBC0)
#define EIHHFOLMCFC_GHILCCPLGJF_OFFSET UNITYSDK_OFFSET(0x154BD900)
#define EIHHFOLMCFC_GKPAJCLFBNE_OFFSET UNITYSDK_OFFSET(0x154BEB70)
#define EIHHFOLMCFC_GMEDBNAABDC_OFFSET UNITYSDK_OFFSET(0x154BD130)
#define EIHHFOLMCFC_GNOKDJHJJAB_OFFSET UNITYSDK_OFFSET(0x154BE270)
#define EIHHFOLMCFC_HANIHONBPAB_OFFSET UNITYSDK_OFFSET(0x154BD5E0)
#define EIHHFOLMCFC_HFOMPEEAPCG_OFFSET UNITYSDK_OFFSET(0x154BE130)
#define EIHHFOLMCFC_IHLMKADIMBB_OFFSET UNITYSDK_OFFSET(0x154BE2E0)
#define EIHHFOLMCFC_IONGBBMANEE_OFFSET UNITYSDK_OFFSET(0x154BF950)
#define EIHHFOLMCFC_KNAPPEMAJLM_OFFSET UNITYSDK_OFFSET(0x154BD720)
#define EIHHFOLMCFC_KONBAMDOGDH_OFFSET UNITYSDK_OFFSET(0x154BE020)
#define EIHHFOLMCFC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x154BC350)
#define EIHHFOLMCFC_MDJIHIBJIFM_OFFSET UNITYSDK_OFFSET(0x154BF220)
#define EIHHFOLMCFC_MEBKMDIDADP_OFFSET UNITYSDK_OFFSET(0x154BFA00)
#define EIHHFOLMCFC_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x154BD170)
#define EIHHFOLMCFC_MGMDCDFGBDN_OFFSET UNITYSDK_OFFSET(0x154BCE20)
#define EIHHFOLMCFC_MNGOOLNMHGJ_OFFSET UNITYSDK_OFFSET(0x154BC830)
#define EIHHFOLMCFC_MPBEJOBDAME_OFFSET UNITYSDK_OFFSET(0x154BD260)
#define EIHHFOLMCFC_MPJJAJLMGFI_OFFSET UNITYSDK_OFFSET(0x154BD7E0)
#define EIHHFOLMCFC_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x154BD020)
#define EIHHFOLMCFC_NHGFHGAJKFB_OFFSET UNITYSDK_OFFSET(0x154BF820)
#define EIHHFOLMCFC_NIDGOPDJHOK_OFFSET UNITYSDK_OFFSET(0x154BE910)
#define EIHHFOLMCFC_NMGKBDBKBCK_OFFSET UNITYSDK_OFFSET(0x154BF2C0)
#define EIHHFOLMCFC_OCFALFIFNED_OFFSET UNITYSDK_OFFSET(0x154BCDC0)
#define EIHHFOLMCFC_OKECMHJLCAH_OFFSET UNITYSDK_OFFSET(0x154BEE00)
#define EIHHFOLMCFC_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x154BD0D0)
#define EIHHFOLMCFC_PNMLDMJEAFE_OFFSET UNITYSDK_OFFSET(0x154BE350)
#define EIHHFOLMCFC_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x154BCB10)
#define EIHHFOLMCFC_TICK_OFFSET UNITYSDK_OFFSET(0x154BD6B0)

inline static constexpr unsigned int EIHHFOLMCFC_TypeDefinitionIndex = 47501;

	class EIHHFOLMCFC : public ::RPG::Client::TABehaviorBase
	{
	public:
		::WaveSimPanel* DILGJEAEKGL; // 0x38
		::UnityEngine::AdaptiveTessellationRenderer* PDDOKHCJEPO; // 0x40
		::UnityEngine::Material* KLLGLIMOCAE; // 0x48
		::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* JBJBBDAKOOA; // 0x50
		::System::Collections::Generic::List_1<::WaveFloating*>* DFHEGINLJBP; // 0x58
		::UnityEngine::MeshRenderer* LHGCFIOJAOI; // 0x60
		::System::Boolean NNEFJBLIHMJ; // 0x68
		::System::Boolean KALKNBAFFJE; // 0x69
		::System::Byte _padding0[0x2];
		::System::Int32 JLLHJDFDCOA; // 0x6C
		::System::Int32 DPBHNDEHALF; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void BGABMDHBPPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_BGABMDHBPPN_OFFSET))(this);
		}

		::System::Void OCFALFIFNED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_OCFALFIFNED_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void EBOAPHJJJDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_EBOAPHJJJDI_OFFSET))(this);
		}

		::System::Void HANIHONBPAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_HANIHONBPAB_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_TICK_OFFSET))(this, a1);
		}

		::System::Void KNAPPEMAJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_KNAPPEMAJLM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::WaveFloating*>* CKJPNFBNCPP()
		{
			return ((::System::Collections::Generic::List_1<::WaveFloating*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_CKJPNFBNCPP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* GHILCCPLGJF()
		{
			return ((::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_GHILCCPLGJF_OFFSET))(this);
		}

		::System::Void EKFKKCHODJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_EKFKKCHODJD_OFFSET))(this);
		}

		::System::Void FKGFEHLOAJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_FKGFEHLOAJB_OFFSET))(this);
		}

		::UnityEngine::Material* MPJJAJLMGFI()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_MPJJAJLMGFI_OFFSET))(this);
		}

		::System::Void PNMLDMJEAFE(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_PNMLDMJEAFE_OFFSET))(this, a1);
		}

		::System::Void MNGOOLNMHGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_MNGOOLNMHGJ_OFFSET))(this);
		}

		::System::Void DLFKFJOLDCF(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_DLFKFJOLDCF_OFFSET))(this, a1, a2);
		}

		::System::Void MGMDCDFGBDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_MGMDCDFGBDN_OFFSET))(this);
		}

		::System::Void DKBPHJAAOEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_DKBPHJAAOEN_OFFSET))(this);
		}

		::System::Void MPBEJOBDAME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_MPBEJOBDAME_OFFSET))(this);
		}

		::System::Void GMEDBNAABDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_GMEDBNAABDC_OFFSET))(this);
		}

		::System::Void ENAIBJGFMFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_ENAIBJGFMFI_OFFSET))(this);
		}

		::System::Void NIDGOPDJHOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_NIDGOPDJHOK_OFFSET))(this);
		}

		::System::Void GKPAJCLFBNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_GKPAJCLFBNE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GCBAEEAJNGH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_GCBAEEAJNGH_OFFSET))(this);
		}

		::System::Void OKECMHJLCAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_OKECMHJLCAH_OFFSET))(this);
		}

		::System::Void EPKFOKCCLHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_EPKFOKCCLHC_OFFSET))(this);
		}

		::System::Void BEOIBEBIGFF(::UnityEngine::ComputeShader* a1, ::IOLIAAFBFON_PIIIIACJBAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::IOLIAAFBFON_PIIIIACJBAI*))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_BEOIBEBIGFF_OFFSET))(this, a1, a2);
		}

		::System::Void MDJIHIBJIFM(::UnityEngine::ComputeShader* a1, ::IOLIAAFBFON_PIIIIACJBAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::IOLIAAFBFON_PIIIIACJBAI*))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_MDJIHIBJIFM_OFFSET))(this, a1, a2);
		}

		::System::Void NMGKBDBKBCK(::UnityEngine::ComputeShader* a1, ::IOLIAAFBFON_PIIIIACJBAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::IOLIAAFBFON_PIIIIACJBAI*))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_NMGKBDBKBCK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 FFFEGOKABJD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_FFFEGOKABJD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 NHGFHGAJKFB(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_NHGFHGAJKFB_OFFSET))(this, a1);
		}

		::System::Boolean FNABJBCHHNN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_FNABJBCHHNN_OFFSET))(this, a1);
		}

		::System::Boolean IONGBBMANEE(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_IONGBBMANEE_OFFSET))(this, a1, a2);
		}

		::System::Single MEBKMDIDADP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_MEBKMDIDADP_OFFSET))(this);
		}

		::UnityEngine::Vector3 CLMKNFILOLB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_CLMKNFILOLB_OFFSET))(this);
		}

		::UnityEngine::Vector3 KONBAMDOGDH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_KONBAMDOGDH_OFFSET))(this);
		}

		::UnityEngine::Vector3 HFOMPEEAPCG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_HFOMPEEAPCG_OFFSET))(this);
		}

		::UnityEngine::Vector3 GNOKDJHJJAB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_GNOKDJHJJAB_OFFSET))(this);
		}

		::UnityEngine::Vector3 BHCMCMADHBF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_BHCMCMADHBF_OFFSET))(this);
		}

		::UnityEngine::Vector3 IHLMKADIMBB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_IHLMKADIMBB_OFFSET))(this);
		}

		::System::Boolean CINPOHJAGDE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_CINPOHJAGDE_OFFSET))(this, a1);
		}

		::System::Boolean EIIDGAHDOMD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EIHHFOLMCFC_EIIDGAHDOMD_OFFSET))(this, a1);
		}

	};
