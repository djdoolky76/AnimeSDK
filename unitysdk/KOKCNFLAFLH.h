#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/HBJGBGJENBJ_ButtonState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
class ACAEONGOBMB;
class FGCPOAGKGCE;
class FMPCODLIOLG;
class HBJGBGJENBJ;
class HDFMNOLOJEA;
class KECKKGPEKPJ;
class NEIMLBJDHKO;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define KOKCNFLAFLH_AKMGALBKAGP_OFFSET UNITYSDK_OFFSET(0x19108120)
#define KOKCNFLAFLH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19109240)
#define KOKCNFLAFLH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19109450)
#define KOKCNFLAFLH_BGHAEBNIILO_OFFSET UNITYSDK_OFFSET(0x191052B0)
#define KOKCNFLAFLH_BGLCJHDKMMD_OFFSET UNITYSDK_OFFSET(0x191079E0)
#define KOKCNFLAFLH_CFLADHCMBMK_OFFSET UNITYSDK_OFFSET(0x191080B0)
#define KOKCNFLAFLH_CTOR_OFFSET UNITYSDK_OFFSET(0x19109630)
#define KOKCNFLAFLH_DEDADPOFLOI_OFFSET UNITYSDK_OFFSET(0x191053A0)
#define KOKCNFLAFLH_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0x191077B0)
#define KOKCNFLAFLH_DIJMGNBGFBD_OFFSET UNITYSDK_OFFSET(0x19108CE0)
#define KOKCNFLAFLH_DPDOCIHLBOB_OFFSET UNITYSDK_OFFSET(0x19105DB0)
#define KOKCNFLAFLH_EAOGLDEIMJO_OFFSET UNITYSDK_OFFSET(0x191090C0)
#define KOKCNFLAFLH_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x19105640)
#define KOKCNFLAFLH_EOHPBMHOJME_OFFSET UNITYSDK_OFFSET(0x19108A80)
#define KOKCNFLAFLH_EPGKDBAKENC_OFFSET UNITYSDK_OFFSET(0x19108A20)
#define KOKCNFLAFLH_FGLPIJMMOLG_OFFSET UNITYSDK_OFFSET(0x19105A60)
#define KOKCNFLAFLH_GDNJDJFADMO_OFFSET UNITYSDK_OFFSET(0x19108990)
#define KOKCNFLAFLH_IACKDHHCMML_OFFSET UNITYSDK_OFFSET(0x19108F40)
#define KOKCNFLAFLH_IAODJDMCKNE_OFFSET UNITYSDK_OFFSET(0x19107C00)
#define KOKCNFLAFLH_IFMEJPINILK_OFFSET UNITYSDK_OFFSET(0x19107DF0)
#define KOKCNFLAFLH_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0x19109000)
#define KOKCNFLAFLH_IMNEMMJNFBJ_OFFSET UNITYSDK_OFFSET(0x191084D0)
#define KOKCNFLAFLH_JJDEBMCFINC_OFFSET UNITYSDK_OFFSET(0x19108E80)
#define KOKCNFLAFLH_JOIAFAJPFND_OFFSET UNITYSDK_OFFSET(0x191051E0)
#define KOKCNFLAFLH_KFGOOABKPDH_OFFSET UNITYSDK_OFFSET(0x19108BC0)
#define KOKCNFLAFLH_KNAJEEHIGEO_OFFSET UNITYSDK_OFFSET(0x19106EC0)
#define KOKCNFLAFLH_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x19107D40)
#define KOKCNFLAFLH_LOHOLLJJMIL_OFFSET UNITYSDK_OFFSET(0x19108AE0)
#define KOKCNFLAFLH_MFCDFGNIBFN_OFFSET UNITYSDK_OFFSET(0x191088E0)
#define KOKCNFLAFLH_MFLBMIBHGLC_OFFSET UNITYSDK_OFFSET(0x19109180)
#define KOKCNFLAFLH_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0x19107590)
#define KOKCNFLAFLH_NEMAILGLJDG_OFFSET UNITYSDK_OFFSET(0x191056E0)
#define KOKCNFLAFLH_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x191063D0)
#define KOKCNFLAFLH_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x191054D0)
#define KOKCNFLAFLH_OONGMDCDLBJ_OFFSET UNITYSDK_OFFSET(0x19107060)
#define KOKCNFLAFLH_PFPGMDMLNEN_OFFSET UNITYSDK_OFFSET(0x19106130)
#define KOKCNFLAFLH_PHBLFEFNICJ_OFFSET UNITYSDK_OFFSET(0x191074D0)
#define KOKCNFLAFLH_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0x19105B00)
#define KOKCNFLAFLH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x19105510)
#define KOKCNFLAFLH__ONBIND_OFFSET UNITYSDK_OFFSET(0x19104C10)
#define KOKCNFLAFLH__ONTICK_OFFSET UNITYSDK_OFFSET(0x19105680)
#define KOKCNFLAFLH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19105970)

inline static constexpr unsigned int KOKCNFLAFLH_TypeDefinitionIndex = 74385;

	class KOKCNFLAFLH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x60
		::HDFMNOLOJEA* KEPANBEOIFI; // 0x68
		::UnityEngine::UI::Text* JLMKDMCBBLD; // 0x70
		::FGCPOAGKGCE* LCAFDOLIHIH; // 0x78
		::UnityEngine::Transform* ACBEPGLOGPP; // 0x80
		::UnityEngine::ParticleSystem* NMMPFGEDJAM; // 0x88
		::RPG::GameCore::SkillData* IHNJJMGPKCJ; // 0x90
		::UnityEngine::Animation* LIFEJLAJJKO; // 0x98
		::ACAEONGOBMB* KCBFOFNPLBD; // 0xA0
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0xA8
		::HBJGBGJENBJ* BFOJPNLIPDC; // 0xB0
		::RPG::Client::PrefabLoadMeta* ELDCNMGKAFM; // 0xB8
		::UnityEngine::UI::Text* JDLPLHNIALD; // 0xC0
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0xC8
		::RPG::GameCore::SkillData* FDMIKJKBONA; // 0xD0
		::UnityEngine::UI::Image* DCPIKAOLABL; // 0xD8
		::RPG::Client::SPProgress* NAAODEIIMCI; // 0xE0
		::UnityEngine::Transform* KJIOINOOIHP; // 0xE8
		::UnityEngine::Transform* ENJGHGIHJBD; // 0xF0
		::UnityEngine::ParticleSystem* HHACEHIBDNK; // 0xF8
		::UnityEngine::Transform* BDHCJDPIPOF; // 0x100
		::RPG::GameCore::SkillCharacterComponent* ENMHNNNJPPN; // 0x108
		::NEIMLBJDHKO* JPOANHMHAIK; // 0x110
		::RPG::GameCore::CharacterDataComponent* HANEKMPLHHP; // 0x118
		::UnityEngine::Animation* JIAGJPIOJCJ; // 0x120
		::UnityEngine::Transform* GJHBKEAAGEG; // 0x128
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0x130
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x138
		::UnityEngine::Transform* HALFEPFBKFC; // 0x140
		::System::UInt32 HLLCFGHKBCK; // 0x148
		::RPG::GameCore::SkillSPProgressType AMGLDBPMEHE; // 0x14C
		::System::UInt32 FODPGPEKNPP; // 0x150
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint OPMPLMLDNHC; // 0x158
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object EJEONLGGNBB; // 0x0
		// static const ::System::String* NBJIGEOCMJC; // 0x0
		// static const ::System::String* LMHJHHEELLO; // 0x0
		// static const ::System::String* IHFOBKKCBOI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH__ONBIND_OFFSET))(this);
		}

		::System::Void JOIAFAJPFND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_JOIAFAJPFND_OFFSET))(this);
		}

		::System::Void BGHAEBNIILO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_BGHAEBNIILO_OFFSET))(this, a1);
		}

		::System::Void DEDADPOFLOI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_DEDADPOFLOI_OFFSET))(this, a1);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH__INITVARONCE_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KOKCNFLAFLH__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void FGLPIJMMOLG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_FGLPIJMMOLG_OFFSET))(this, a1);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_PNFAHABNEMH_OFFSET))(this, a1, a2);
		}

		::System::Void PFPGMDMLNEN(::KECKKGPEKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KECKKGPEKPJ*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_PFPGMDMLNEN_OFFSET))(this, a1);
		}

		::System::Void KNAJEEHIGEO(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_KNAJEEHIGEO_OFFSET))(this, a1);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void BGLCJHDKMMD(::RPG::GameCore::AbilityMaxSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_BGLCJHDKMMD_OFFSET))(this, a1);
		}

		::System::Void IAODJDMCKNE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_IAODJDMCKNE_OFFSET))(this, a1);
		}

		::System::Void DPDOCIHLBOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_DPDOCIHLBOB_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_LACAPACNEPI_OFFSET))(this);
		}

		::System::Void DICPMEJINGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_DICPMEJINGC_OFFSET))(this);
		}

		::System::Void AKMGALBKAGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_AKMGALBKAGP_OFFSET))(this, a1);
		}

		::System::Void IFMEJPINILK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_IFMEJPINILK_OFFSET))(this);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_NGNACJONELO_OFFSET))(this);
		}

		::System::Void IMNEMMJNFBJ(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_IMNEMMJNFBJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint CFLADHCMBMK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_CFLADHCMBMK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MFCDFGNIBFN()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_MFCDFGNIBFN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GDNJDJFADMO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_GDNJDJFADMO_OFFSET))(this);
		}

		::System::Int32 EPGKDBAKENC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_EPGKDBAKENC_OFFSET))(this);
		}

		::System::Int32 EOHPBMHOJME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_EOHPBMHOJME_OFFSET))(this);
		}

		::System::Boolean LOHOLLJJMIL(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_LOHOLLJJMIL_OFFSET))(this, a1);
		}

		::System::UInt32 KFGOOABKPDH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_KFGOOABKPDH_OFFSET))(this, a1, a2);
		}

		::System::Void OONGMDCDLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_OONGMDCDLBJ_OFFSET))(this);
		}

		::System::Void PHBLFEFNICJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_PHBLFEFNICJ_OFFSET))(this);
		}

		::System::Void DIJMGNBGFBD(::HBJGBGJENBJ_ButtonState a1, ::HBJGBGJENBJ_ButtonState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HBJGBGJENBJ_ButtonState, ::HBJGBGJENBJ_ButtonState))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_DIJMGNBGFBD_OFFSET))(this, a1, a2);
		}

		::System::Void NEMAILGLJDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_NEMAILGLJDG_OFFSET))(this);
		}

		::System::Void JJDEBMCFINC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_JJDEBMCFINC_OFFSET))(this, a1);
		}

		::System::Void IACKDHHCMML(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_IACKDHHCMML_OFFSET))(this, a1);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void EAOGLDEIMJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_EAOGLDEIMJO_OFFSET))(this, a1);
		}

		::System::Void MFLBMIBHGLC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_MFLBMIBHGLC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
