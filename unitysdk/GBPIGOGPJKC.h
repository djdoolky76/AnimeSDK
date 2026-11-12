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
class NEIMLBJDHKO;
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

#define GBPIGOGPJKC_AKMGALBKAGP_OFFSET UNITYSDK_OFFSET(0x16892730)
#define GBPIGOGPJKC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16893DE0)
#define GBPIGOGPJKC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16893F80)
#define GBPIGOGPJKC_BGHAEBNIILO_OFFSET UNITYSDK_OFFSET(0x1688FEA0)
#define GBPIGOGPJKC_BGLCJHDKMMD_OFFSET UNITYSDK_OFFSET(0x16891570)
#define GBPIGOGPJKC_CFLADHCMBMK_OFFSET UNITYSDK_OFFSET(0x168926D0)
#define GBPIGOGPJKC_CTOR_OFFSET UNITYSDK_OFFSET(0x168940F0)
#define GBPIGOGPJKC_DEDADPOFLOI_OFFSET UNITYSDK_OFFSET(0x1688FF90)
#define GBPIGOGPJKC_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0x168912C0)
#define GBPIGOGPJKC_DIJMGNBGFBD_OFFSET UNITYSDK_OFFSET(0x16893860)
#define GBPIGOGPJKC_DPDOCIHLBOB_OFFSET UNITYSDK_OFFSET(0x16890590)
#define GBPIGOGPJKC_EAOGLDEIMJO_OFFSET UNITYSDK_OFFSET(0x16893C60)
#define GBPIGOGPJKC_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16890240)
#define GBPIGOGPJKC_EFGCMMOFGNJ_OFFSET UNITYSDK_OFFSET(0x168931D0)
#define GBPIGOGPJKC_EOHPBMHOJME_OFFSET UNITYSDK_OFFSET(0x16893530)
#define GBPIGOGPJKC_EPGKDBAKENC_OFFSET UNITYSDK_OFFSET(0x16893460)
#define GBPIGOGPJKC_FGLPIJMMOLG_OFFSET UNITYSDK_OFFSET(0x168903B0)
#define GBPIGOGPJKC_GDNJDJFADMO_OFFSET UNITYSDK_OFFSET(0x16892BE0)
#define GBPIGOGPJKC_GFABMIANBHI_OFFSET UNITYSDK_OFFSET(0x16892D20)
#define GBPIGOGPJKC_IACKDHHCMML_OFFSET UNITYSDK_OFFSET(0x16893AE0)
#define GBPIGOGPJKC_IAODJDMCKNE_OFFSET UNITYSDK_OFFSET(0x16891790)
#define GBPIGOGPJKC_IFMEJPINILK_OFFSET UNITYSDK_OFFSET(0x16891980)
#define GBPIGOGPJKC_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0x16893BA0)
#define GBPIGOGPJKC_IMNEMMJNFBJ_OFFSET UNITYSDK_OFFSET(0x16892D90)
#define GBPIGOGPJKC_JOIAFAJPFND_OFFSET UNITYSDK_OFFSET(0x1688FDD0)
#define GBPIGOGPJKC_KFGOOABKPDH_OFFSET UNITYSDK_OFFSET(0x16893740)
#define GBPIGOGPJKC_KNAJEEHIGEO_OFFSET UNITYSDK_OFFSET(0x16890930)
#define GBPIGOGPJKC_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x168918D0)
#define GBPIGOGPJKC_LMBNBHOGFFE_OFFSET UNITYSDK_OFFSET(0x16892A70)
#define GBPIGOGPJKC_LOHOLLJJMIL_OFFSET UNITYSDK_OFFSET(0x16893600)
#define GBPIGOGPJKC_MFCDFGNIBFN_OFFSET UNITYSDK_OFFSET(0x16893400)
#define GBPIGOGPJKC_MFLBMIBHGLC_OFFSET UNITYSDK_OFFSET(0x16893D20)
#define GBPIGOGPJKC_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0x168910A0)
#define GBPIGOGPJKC_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x16891B90)
#define GBPIGOGPJKC_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x168900D0)
#define GBPIGOGPJKC_OONGMDCDLBJ_OFFSET UNITYSDK_OFFSET(0x16890AD0)
#define GBPIGOGPJKC_PHBLFEFNICJ_OFFSET UNITYSDK_OFFSET(0x16891010)
#define GBPIGOGPJKC_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0x16890450)
#define GBPIGOGPJKC__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16890110)
#define GBPIGOGPJKC__ONBIND_OFFSET UNITYSDK_OFFSET(0x1688F880)
#define GBPIGOGPJKC__ONTICK_OFFSET UNITYSDK_OFFSET(0x16890280)
#define GBPIGOGPJKC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x168902E0)

inline static constexpr unsigned int GBPIGOGPJKC_TypeDefinitionIndex = 73624;

	class GBPIGOGPJKC : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::SPProgress* NAAODEIIMCI; // 0x60
		::UnityEngine::UI::Text* JLMKDMCBBLD; // 0x68
		::UnityEngine::Transform* ENJGHGIHJBD; // 0x70
		::NEIMLBJDHKO* JPOANHMHAIK; // 0x78
		::RPG::GameCore::SkillData* IMAOAAEJOIE; // 0x80
		::UnityEngine::Transform* KJIOINOOIHP; // 0x88
		::UnityEngine::Transform* BDHCJDPIPOF; // 0x90
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x98
		::UnityEngine::Animation* JIAGJPIOJCJ; // 0xA0
		::FGCPOAGKGCE* LCAFDOLIHIH; // 0xA8
		::HDFMNOLOJEA* KEPANBEOIFI; // 0xB0
		::HBJGBGJENBJ* BFOJPNLIPDC; // 0xB8
		::UnityEngine::Transform* HALFEPFBKFC; // 0xC0
		::RPG::GameCore::SkillCharacterComponent* ENMHNNNJPPN; // 0xC8
		::UnityEngine::UI::Image* DCPIKAOLABL; // 0xD0
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0xD8
		::UnityEngine::ParticleSystem* NMMPFGEDJAM; // 0xE0
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0xE8
		::UnityEngine::Animation* LIFEJLAJJKO; // 0xF0
		::UnityEngine::ParticleSystem* HHACEHIBDNK; // 0xF8
		::UnityEngine::UI::Text* JDLPLHNIALD; // 0x100
		::UnityEngine::Transform* ACBEPGLOGPP; // 0x108
		::ACAEONGOBMB* KCBFOFNPLBD; // 0x110
		::RPG::Client::PrefabLoadMeta* ELDCNMGKAFM; // 0x118
		::RPG::GameCore::CharacterDataComponent* HANEKMPLHHP; // 0x120
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0x128
		::UnityEngine::Transform* GJHBKEAAGEG; // 0x130
		::System::Boolean JLDCBDOEIJH; // 0x138
		::System::Byte _padding0[0x3];
		::System::UInt32 HLLCFGHKBCK; // 0x13C
		::RPG::GameCore::SkillSPProgressType AMGLDBPMEHE; // 0x140
		::System::UInt32 FODPGPEKNPP; // 0x144
		::RPG::GameCore::FixPoint OPMPLMLDNHC; // 0x148
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object EJEONLGGNBB; // 0x0
		// static const ::System::String* NBJIGEOCMJC; // 0x0
		// static const ::System::String* LMHJHHEELLO; // 0x0
		// static const ::System::String* IHFOBKKCBOI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC__ONBIND_OFFSET))(this);
		}

		::System::Void JOIAFAJPFND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_JOIAFAJPFND_OFFSET))(this);
		}

		::System::Void BGHAEBNIILO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_BGHAEBNIILO_OFFSET))(this, a1);
		}

		::System::Void DEDADPOFLOI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_DEDADPOFLOI_OFFSET))(this, a1);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC__INITVARONCE_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBPIGOGPJKC__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC__SETUPVIEW_OFFSET))(this);
		}

		::System::Void FGLPIJMMOLG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_FGLPIJMMOLG_OFFSET))(this, a1);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_PNFAHABNEMH_OFFSET))(this, a1, a2);
		}

		::System::Void KNAJEEHIGEO(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_KNAJEEHIGEO_OFFSET))(this, a1);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void BGLCJHDKMMD(::RPG::GameCore::AbilityMaxSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_BGLCJHDKMMD_OFFSET))(this, a1);
		}

		::System::Void IAODJDMCKNE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_IAODJDMCKNE_OFFSET))(this, a1);
		}

		::System::Void DPDOCIHLBOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_DPDOCIHLBOB_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_LACAPACNEPI_OFFSET))(this);
		}

		::System::Void DICPMEJINGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_DICPMEJINGC_OFFSET))(this);
		}

		::System::Void AKMGALBKAGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_AKMGALBKAGP_OFFSET))(this, a1);
		}

		::System::Void IFMEJPINILK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_IFMEJPINILK_OFFSET))(this);
		}

		::System::Boolean LMBNBHOGFFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_LMBNBHOGFFE_OFFSET))(this);
		}

		::System::Void GFABMIANBHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_GFABMIANBHI_OFFSET))(this, a1);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_NGNACJONELO_OFFSET))(this);
		}

		::System::Boolean EFGCMMOFGNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_EFGCMMOFGNJ_OFFSET))(this);
		}

		::System::Void IMNEMMJNFBJ(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_IMNEMMJNFBJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint CFLADHCMBMK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_CFLADHCMBMK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MFCDFGNIBFN()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_MFCDFGNIBFN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GDNJDJFADMO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_GDNJDJFADMO_OFFSET))(this);
		}

		::System::Int32 EPGKDBAKENC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_EPGKDBAKENC_OFFSET))(this);
		}

		::System::Int32 EOHPBMHOJME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_EOHPBMHOJME_OFFSET))(this);
		}

		::System::Boolean LOHOLLJJMIL(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_LOHOLLJJMIL_OFFSET))(this, a1);
		}

		::System::UInt32 KFGOOABKPDH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_KFGOOABKPDH_OFFSET))(this, a1, a2);
		}

		::System::Void OONGMDCDLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_OONGMDCDLBJ_OFFSET))(this);
		}

		::System::Void PHBLFEFNICJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_PHBLFEFNICJ_OFFSET))(this);
		}

		::System::Void DIJMGNBGFBD(::HBJGBGJENBJ_ButtonState a1, ::HBJGBGJENBJ_ButtonState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HBJGBGJENBJ_ButtonState, ::HBJGBGJENBJ_ButtonState))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_DIJMGNBGFBD_OFFSET))(this, a1, a2);
		}

		::System::Void IACKDHHCMML(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_IACKDHHCMML_OFFSET))(this, a1);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void EAOGLDEIMJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_EAOGLDEIMJO_OFFSET))(this, a1);
		}

		::System::Void MFLBMIBHGLC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_MFLBMIBHGLC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPIGOGPJKC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
