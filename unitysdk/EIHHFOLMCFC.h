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

#define EIHHFOLMCFC_BEOIBEBIGFF_OFFSET UNITYSDK_OFFSET(0x154CAF00)
#define EIHHFOLMCFC_BGABMDHBPPN_OFFSET UNITYSDK_OFFSET(0x154C8990)
#define EIHHFOLMCFC_BHCMCMADHBF_OFFSET UNITYSDK_OFFSET(0x154CB8C0)
#define EIHHFOLMCFC_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x154C9050)
#define EIHHFOLMCFC_CINPOHJAGDE_OFFSET UNITYSDK_OFFSET(0x154CB9A0)
#define EIHHFOLMCFC_CKJPNFBNCPP_OFFSET UNITYSDK_OFFSET(0x154C8B20)
#define EIHHFOLMCFC_CLMKNFILOLB_OFFSET UNITYSDK_OFFSET(0x154C9D50)
#define EIHHFOLMCFC_CTOR_OFFSET UNITYSDK_OFFSET(0x154CBD60)
#define EIHHFOLMCFC_DKBPHJAAOEN_OFFSET UNITYSDK_OFFSET(0x154CA5E0)
#define EIHHFOLMCFC_DLFKFJOLDCF_OFFSET UNITYSDK_OFFSET(0x154CA430)
#define EIHHFOLMCFC_EBOAPHJJJDI_OFFSET UNITYSDK_OFFSET(0x154C9340)
#define EIHHFOLMCFC_EIIDGAHDOMD_OFFSET UNITYSDK_OFFSET(0x154CBB10)
#define EIHHFOLMCFC_EKFKKCHODJD_OFFSET UNITYSDK_OFFSET(0x154C9820)
#define EIHHFOLMCFC_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0x154C9010)
#define EIHHFOLMCFC_EPKFOKCCLHC_OFFSET UNITYSDK_OFFSET(0x154C8DD0)
#define EIHHFOLMCFC_FFFEGOKABJD_OFFSET UNITYSDK_OFFSET(0x154CB4B0)
#define EIHHFOLMCFC_FKGFEHLOAJB_OFFSET UNITYSDK_OFFSET(0x154C9960)
#define EIHHFOLMCFC_FNABJBCHHNN_OFFSET UNITYSDK_OFFSET(0x154CB700)
#define EIHHFOLMCFC_GCBAEEAJNGH_OFFSET UNITYSDK_OFFSET(0x154CAA10)
#define EIHHFOLMCFC_GHILCCPLGJF_OFFSET UNITYSDK_OFFSET(0x154C9740)
#define EIHHFOLMCFC_GKPAJCLFBNE_OFFSET UNITYSDK_OFFSET(0x154CA9C0)
#define EIHHFOLMCFC_GMEDBNAABDC_OFFSET UNITYSDK_OFFSET(0x154C8F70)
#define EIHHFOLMCFC_GNOKDJHJJAB_OFFSET UNITYSDK_OFFSET(0x154CA0B0)
#define EIHHFOLMCFC_HANIHONBPAB_OFFSET UNITYSDK_OFFSET(0x154C9420)
#define EIHHFOLMCFC_HFOMPEEAPCG_OFFSET UNITYSDK_OFFSET(0x154C9F70)
#define EIHHFOLMCFC_IHLMKADIMBB_OFFSET UNITYSDK_OFFSET(0x154CA120)
#define EIHHFOLMCFC_IONGBBMANEE_OFFSET UNITYSDK_OFFSET(0x154CB7A0)
#define EIHHFOLMCFC_KNAPPEMAJLM_OFFSET UNITYSDK_OFFSET(0x154C9560)
#define EIHHFOLMCFC_KONBAMDOGDH_OFFSET UNITYSDK_OFFSET(0x154C9E60)
#define EIHHFOLMCFC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x154C8180)
#define EIHHFOLMCFC_MDJIHIBJIFM_OFFSET UNITYSDK_OFFSET(0x154CB070)
#define EIHHFOLMCFC_MEBKMDIDADP_OFFSET UNITYSDK_OFFSET(0x154CB850)
#define EIHHFOLMCFC_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x154C8FB0)
#define EIHHFOLMCFC_MGMDCDFGBDN_OFFSET UNITYSDK_OFFSET(0x154C8C60)
#define EIHHFOLMCFC_MNGOOLNMHGJ_OFFSET UNITYSDK_OFFSET(0x154C8670)
#define EIHHFOLMCFC_MPBEJOBDAME_OFFSET UNITYSDK_OFFSET(0x154C90A0)
#define EIHHFOLMCFC_MPJJAJLMGFI_OFFSET UNITYSDK_OFFSET(0x154C9620)
#define EIHHFOLMCFC_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x154C8E60)
#define EIHHFOLMCFC_NHGFHGAJKFB_OFFSET UNITYSDK_OFFSET(0x154CB670)
#define EIHHFOLMCFC_NIDGOPDJHOK_OFFSET UNITYSDK_OFFSET(0x154CA750)
#define EIHHFOLMCFC_NMGKBDBKBCK_OFFSET UNITYSDK_OFFSET(0x154CB110)
#define EIHHFOLMCFC_OCFALFIFNED_OFFSET UNITYSDK_OFFSET(0x154C8C00)
#define EIHHFOLMCFC_OKECMHJLCAH_OFFSET UNITYSDK_OFFSET(0x154CAC50)
#define EIHHFOLMCFC_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x154C8F10)
#define EIHHFOLMCFC_PNMLDMJEAFE_OFFSET UNITYSDK_OFFSET(0x154CA190)
#define EIHHFOLMCFC_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x154C8950)
#define EIHHFOLMCFC_TICK_OFFSET UNITYSDK_OFFSET(0x154C94F0)

	class EIHHFOLMCFC : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::AdaptiveTessellationRenderer* PDDOKHCJEPO; // 0x38
		::UnityEngine::Material* KLLGLIMOCAE; // 0x40
		::WaveSimPanel* DILGJEAEKGL; // 0x48
		::System::Collections::Generic::List_1<::WaveFloating*>* DFHEGINLJBP; // 0x50
		::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* JBJBBDAKOOA; // 0x58
		::UnityEngine::MeshRenderer* LHGCFIOJAOI; // 0x60
		::System::Boolean KALKNBAFFJE; // 0x68
		::System::Boolean NNEFJBLIHMJ; // 0x69
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
