#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLAADCBPCHM.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
class FFGJDKEIJIE;
class KECKKGPEKPJ;
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelSetActiveSkill; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CONMANNGDEC_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0xE60F110)
#define CONMANNGDEC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE60FA60)
#define CONMANNGDEC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE60FCA0)
#define CONMANNGDEC_BBGGEBDCJJK_OFFSET UNITYSDK_OFFSET(0xE60F290)
#define CONMANNGDEC_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0xE60EBB0)
#define CONMANNGDEC_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xE60DB20)
#define CONMANNGDEC_BONEBLMEHBD_OFFSET UNITYSDK_OFFSET(0xE60EC70)
#define CONMANNGDEC_CTOR_OFFSET UNITYSDK_OFFSET(0xE60FEE0)
#define CONMANNGDEC_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xE60F990)
#define CONMANNGDEC_EIAFGCLFMNL_OFFSET UNITYSDK_OFFSET(0xE60F770)
#define CONMANNGDEC_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0xE60F1D0)
#define CONMANNGDEC_IELABLHBGII_OFFSET UNITYSDK_OFFSET(0xE60EF20)
#define CONMANNGDEC_JMGLPBEBPDM_OFFSET UNITYSDK_OFFSET(0xE60DB80)
#define CONMANNGDEC_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0xE60F6E0)
#define CONMANNGDEC_JOOGNNINJKL_OFFSET UNITYSDK_OFFSET(0xE60DF00)
#define CONMANNGDEC_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xE60EAF0)
#define CONMANNGDEC_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xE60F870)
#define CONMANNGDEC_LNHAPOHOKFB_OFFSET UNITYSDK_OFFSET(0xE60F7C0)
#define CONMANNGDEC_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0xE60F040)
#define CONMANNGDEC_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0xE60DE40)
#define CONMANNGDEC_NMBPOHNCHID_OFFSET UNITYSDK_OFFSET(0xE60F8D0)
#define CONMANNGDEC_ONRETURN_OFFSET UNITYSDK_OFFSET(0xE60D970)
#define CONMANNGDEC_PKECEGBJLEC_OFFSET UNITYSDK_OFFSET(0xE60DCD0)
#define CONMANNGDEC_PLHMPPPAODJ_OFFSET UNITYSDK_OFFSET(0xE60D900)
#define CONMANNGDEC__ONBIND_OFFSET UNITYSDK_OFFSET(0xE60D470)
#define CONMANNGDEC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xE60DA50)

inline static constexpr unsigned int CONMANNGDEC_TypeDefinitionIndex = 73962;

	class CONMANNGDEC : public ::CLAADCBPCHM
	{
	public:
		::FFGJDKEIJIE* KBAEEBPDLMK; // 0xC0
		::UnityEngine::UI::Image* AMNPLNKPOJF; // 0xC8
		::UnityEngine::ParticleSystem* DHENGDCFOHA; // 0xD0
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0xD8
		::UnityEngine::UI::Image* IHDDCCAIDIB; // 0xE0
		::UnityEngine::Animation* LIFEJLAJJKO; // 0xE8
		::UnityEngine::UI::Image* PMJFBCCOBJF; // 0xF0
		::UnityEngine::UI::Image* HFJBNHOHJHM; // 0xF8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* FBJEELGJKLK; // 0x0
		// static const ::System::String* IJHFOIAGGDI; // 0x0
		// static const ::System::String* CMAAILAJKLG; // 0x0
		// static const ::System::String* GGMGKBCNPBM; // 0x0
		// static const ::System::String* JKOHPKBBBPJ; // 0x0
		// static const ::System::String* CNKELEOPDJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC__ONBIND_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_ONRETURN_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC__SETUPVIEW_OFFSET))(this);
		}

		::System::Void PLHMPPPAODJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_PLHMPPPAODJ_OFFSET))(this);
		}

		::FFGJDKEIJIE* JMGLPBEBPDM(::RPG::GameCore::SkillSPProgressType a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::FFGJDKEIJIE*(*)(::PVOID, ::RPG::GameCore::SkillSPProgressType, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CONMANNGDEC_JMGLPBEBPDM_OFFSET))(this, a1, a2, a3);
		}

		::System::String* PKECEGBJLEC(::RPG::GameCore::DamageTypeRow* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DamageTypeRow*))((::PBYTE)hIl2Cpp + CONMANNGDEC_PKECEGBJLEC_OFFSET))(this, a1);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_NGNACJONELO_OFFSET))(this);
		}

		::System::Void JOOGNNINJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_JOOGNNINJKL_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void BFDGGBJLEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_BFDGGBJLEBA_OFFSET))(this);
		}

		::System::Void BONEBLMEHBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_BONEBLMEHBD_OFFSET))(this);
		}

		::System::Void IELABLHBGII(::RPG::Client::SPProgress* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SPProgress*, ::System::Single))((::PBYTE)hIl2Cpp + CONMANNGDEC_IELABLHBGII_OFFSET))(this, a1, a2);
		}

		::System::Void MPPEBPAINNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CONMANNGDEC_MPPEBPAINNI_OFFSET))(this, a1);
		}

		::System::Void AFMHNCLHNDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_AFMHNCLHNDP_OFFSET))(this);
		}

		::System::Void FLJMKABENAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_FLJMKABENAD_OFFSET))(this);
		}

		::System::Void BBGGEBDCJJK(::KECKKGPEKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KECKKGPEKPJ*))((::PBYTE)hIl2Cpp + CONMANNGDEC_BBGGEBDCJJK_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_JMNFOCENFLP_OFFSET))(this);
		}

		::UnityEngine::Transform* EIAFGCLFMNL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_EIAFGCLFMNL_OFFSET))(this);
		}

		::System::Void LNHAPOHOKFB(::RPG::GameCore::LevelSetActiveSkill* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSetActiveSkill*))((::PBYTE)hIl2Cpp + CONMANNGDEC_LNHAPOHOKFB_OFFSET))(this, a1);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONMANNGDEC_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void NMBPOHNCHID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CONMANNGDEC_NMBPOHNCHID_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CONMANNGDEC_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONMANNGDEC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
