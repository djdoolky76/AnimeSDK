#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLAADCBPCHM.h"
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define OFMGHLILHPL_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0x18DEE720)
#define OFMGHLILHPL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18DEEDC0)
#define OFMGHLILHPL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18DEEE90)
#define OFMGHLILHPL_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0x18DEE590)
#define OFMGHLILHPL_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x18DEDC90)
#define OFMGHLILHPL_CTOR_OFFSET UNITYSDK_OFFSET(0x18DEEF60)
#define OFMGHLILHPL_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x18DEE8F0)
#define OFMGHLILHPL_EIAFGCLFMNL_OFFSET UNITYSDK_OFFSET(0x18DEE8A0)
#define OFMGHLILHPL_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0x18DEE7E0)
#define OFMGHLILHPL_FNMAFAJCMLC_OFFSET UNITYSDK_OFFSET(0x18DEEAC0)
#define OFMGHLILHPL_GKCNPOGCJIF_OFFSET UNITYSDK_OFFSET(0x18DEE950)
#define OFMGHLILHPL_GNNLGCPMHBM_OFFSET UNITYSDK_OFFSET(0x18DEECD0)
#define OFMGHLILHPL_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x18DEEC10)
#define OFMGHLILHPL_JOOGNNINJKL_OFFSET UNITYSDK_OFFSET(0x18DEE1B0)
#define OFMGHLILHPL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x18DEE540)
#define OFMGHLILHPL_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x18DEEA60)
#define OFMGHLILHPL_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0x18DEE650)
#define OFMGHLILHPL_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x18DEDD90)
#define OFMGHLILHPL_ONRETURN_OFFSET UNITYSDK_OFFSET(0x18DEDA70)
#define OFMGHLILHPL__ONBIND_OFFSET UNITYSDK_OFFSET(0x18DED5E0)
#define OFMGHLILHPL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18DEDB20)

inline static constexpr unsigned int OFMGHLILHPL_TypeDefinitionIndex = 73937;

	class OFMGHLILHPL : public ::CLAADCBPCHM
	{
	public:
		::UnityEngine::Animation* LIFEJLAJJKO; // 0xC0
		::UnityEngine::UI::Image* IHDDCCAIDIB; // 0xC8
		::UnityEngine::ParticleSystem* DHENGDCFOHA; // 0xD0
		::UnityEngine::UI::Image* HFJBNHOHJHM; // 0xD8
		::UnityEngine::Transform* CEGHCGEHNGI; // 0xE0
		::UnityEngine::UI::Image* NAAODEIIMCI; // 0xE8
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0xF0
		::UnityEngine::UI::Image* PMJFBCCOBJF; // 0xF8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* NBJIGEOCMJC; // 0x0
		// static const ::System::String* LMHJHHEELLO; // 0x0
		// static const ::System::String* NNMNBGDBJAN; // 0x0
		// static const ::System::String* JPPPJGGAMJP; // 0x0
		// static const ::System::String* BGDHPOFDKAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL__ONBIND_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_ONRETURN_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_NGNACJONELO_OFFSET))(this);
		}

		::System::Void JOOGNNINJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_JOOGNNINJKL_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void BFDGGBJLEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_BFDGGBJLEBA_OFFSET))(this);
		}

		::System::Void MPPEBPAINNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFMGHLILHPL_MPPEBPAINNI_OFFSET))(this, a1);
		}

		::System::Void AFMHNCLHNDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_AFMHNCLHNDP_OFFSET))(this);
		}

		::System::Void FLJMKABENAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_FLJMKABENAD_OFFSET))(this);
		}

		::UnityEngine::Transform* EIAFGCLFMNL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_EIAFGCLFMNL_OFFSET))(this);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OFMGHLILHPL_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OFMGHLILHPL_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void FNMAFAJCMLC(::RPG::GameCore::LevelCharacterRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + OFMGHLILHPL_FNMAFAJCMLC_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_JMNFOCENFLP_OFFSET))(this);
		}

		::System::Boolean GKCNPOGCJIF(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OFMGHLILHPL_GKCNPOGCJIF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFMGHLILHPL_BIOBBNGDGDF_OFFSET))(this, a1, a2);
		}

		::System::Void GNNLGCPMHBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFMGHLILHPL_GNNLGCPMHBM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMGHLILHPL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
