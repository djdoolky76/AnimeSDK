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

#define KOKCNFLAFLH_AKMGALBKAGP_OFFSET UNITYSDK_OFFSET(0xB59EE80)
#define KOKCNFLAFLH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5A0090)
#define KOKCNFLAFLH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5A02A0)
#define KOKCNFLAFLH_BGHAEBNIILO_OFFSET UNITYSDK_OFFSET(0xB59BF30)
#define KOKCNFLAFLH_BGLCJHDKMMD_OFFSET UNITYSDK_OFFSET(0xB59E720)
#define KOKCNFLAFLH_CFLADHCMBMK_OFFSET UNITYSDK_OFFSET(0xB59EE00)
#define KOKCNFLAFLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A0480)
#define KOKCNFLAFLH_DEDADPOFLOI_OFFSET UNITYSDK_OFFSET(0xB59C020)
#define KOKCNFLAFLH_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0xB59E4E0)
#define KOKCNFLAFLH_DIJMGNBGFBD_OFFSET UNITYSDK_OFFSET(0xB59FB00)
#define KOKCNFLAFLH_DPDOCIHLBOB_OFFSET UNITYSDK_OFFSET(0xB59CA80)
#define KOKCNFLAFLH_EAOGLDEIMJO_OFFSET UNITYSDK_OFFSET(0xB59FF10)
#define KOKCNFLAFLH_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB59C300)
#define KOKCNFLAFLH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB59C640)
#define KOKCNFLAFLH_EOHPBMHOJME_OFFSET UNITYSDK_OFFSET(0xB59F810)
#define KOKCNFLAFLH_EPGKDBAKENC_OFFSET UNITYSDK_OFFSET(0xB59F7B0)
#define KOKCNFLAFLH_FGLPIJMMOLG_OFFSET UNITYSDK_OFFSET(0xB59C730)
#define KOKCNFLAFLH_GDNJDJFADMO_OFFSET UNITYSDK_OFFSET(0xB59F6C0)
#define KOKCNFLAFLH_IACKDHHCMML_OFFSET UNITYSDK_OFFSET(0xB59FD90)
#define KOKCNFLAFLH_IAODJDMCKNE_OFFSET UNITYSDK_OFFSET(0xB59E940)
#define KOKCNFLAFLH_IFMEJPINILK_OFFSET UNITYSDK_OFFSET(0xB59EB30)
#define KOKCNFLAFLH_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0xB59FE50)
#define KOKCNFLAFLH_IMNEMMJNFBJ_OFFSET UNITYSDK_OFFSET(0xB59F240)
#define KOKCNFLAFLH_JJDEBMCFINC_OFFSET UNITYSDK_OFFSET(0xB59FCD0)
#define KOKCNFLAFLH_JOIAFAJPFND_OFFSET UNITYSDK_OFFSET(0xB59BE20)
#define KOKCNFLAFLH_KFGOOABKPDH_OFFSET UNITYSDK_OFFSET(0xB59F9E0)
#define KOKCNFLAFLH_KNAJEEHIGEO_OFFSET UNITYSDK_OFFSET(0xB59DBE0)
#define KOKCNFLAFLH_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0xB59EA80)
#define KOKCNFLAFLH_LOHOLLJJMIL_OFFSET UNITYSDK_OFFSET(0xB59F870)
#define KOKCNFLAFLH_MFCDFGNIBFN_OFFSET UNITYSDK_OFFSET(0xB59F640)
#define KOKCNFLAFLH_MFLBMIBHGLC_OFFSET UNITYSDK_OFFSET(0xB59FFD0)
#define KOKCNFLAFLH_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0xB59E2C0)
#define KOKCNFLAFLH_NEMAILGLJDG_OFFSET UNITYSDK_OFFSET(0xB59C3A0)
#define KOKCNFLAFLH_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0xB59D0A0)
#define KOKCNFLAFLH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB59C1D0)
#define KOKCNFLAFLH_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xB59C190)
#define KOKCNFLAFLH_OONGMDCDLBJ_OFFSET UNITYSDK_OFFSET(0xB59DD80)
#define KOKCNFLAFLH_PFPGMDMLNEN_OFFSET UNITYSDK_OFFSET(0xB59CE00)
#define KOKCNFLAFLH_PHBLFEFNICJ_OFFSET UNITYSDK_OFFSET(0xB59E1F0)
#define KOKCNFLAFLH_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0xB59C7D0)
#define KOKCNFLAFLH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB59BB10)
#define KOKCNFLAFLH__ONTICK_OFFSET UNITYSDK_OFFSET(0xB59C340)

inline static constexpr unsigned int KOKCNFLAFLH_TypeDefinitionIndex = 72309;

	class KOKCNFLAFLH : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* ELDCNMGKAFM; // 0x60
		::UnityEngine::Animation* JIAGJPIOJCJ; // 0x68
		::RPG::GameCore::SkillData* FDMIKJKBONA; // 0x70
		::NEIMLBJDHKO* JPOANHMHAIK; // 0x78
		::RPG::GameCore::SkillCharacterComponent* ENMHNNNJPPN; // 0x80
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x88
		::UnityEngine::Transform* BDHCJDPIPOF; // 0x90
		::UnityEngine::Transform* ACBEPGLOGPP; // 0x98
		::ACAEONGOBMB* KCBFOFNPLBD; // 0xA0
		::UnityEngine::ParticleSystem* HHACEHIBDNK; // 0xA8
		::UnityEngine::Transform* GJHBKEAAGEG; // 0xB0
		::UnityEngine::ParticleSystem* NMMPFGEDJAM; // 0xB8
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0xC0
		::UnityEngine::UI::Image* DCPIKAOLABL; // 0xC8
		::RPG::GameCore::SkillData* IHNJJMGPKCJ; // 0xD0
		::HDFMNOLOJEA* KEPANBEOIFI; // 0xD8
		::UnityEngine::UI::Text* JLMKDMCBBLD; // 0xE0
		::UnityEngine::Transform* HALFEPFBKFC; // 0xE8
		::UnityEngine::Animation* LIFEJLAJJKO; // 0xF0
		::HBJGBGJENBJ* BFOJPNLIPDC; // 0xF8
		::UnityEngine::Transform* KJIOINOOIHP; // 0x100
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0x108
		::RPG::Client::SPProgress* NAAODEIIMCI; // 0x110
		::UnityEngine::Transform* ENJGHGIHJBD; // 0x118
		::RPG::GameCore::CharacterDataComponent* HANEKMPLHHP; // 0x120
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0x128
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x130
		::UnityEngine::UI::Text* JDLPLHNIALD; // 0x138
		::FGCPOAGKGCE* LCAFDOLIHIH; // 0x140
		::RPG::GameCore::SkillSPProgressType AMGLDBPMEHE; // 0x148
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint OPMPLMLDNHC; // 0x150
		::System::UInt32 HLLCFGHKBCK; // 0x158
		::System::UInt32 FODPGPEKNPP; // 0x15C
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KOKCNFLAFLH__ONTICK_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKCNFLAFLH_EKGCGIDIFJJ_OFFSET))(this);
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
