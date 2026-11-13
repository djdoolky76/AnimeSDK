#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLAADCBPCHM.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DEKDEPEBHNC;
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace RPG::Client { class BattleSilverWolf999UltraSkillUIData; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define KCEOHCCIPIE_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0x1A47FB70)
#define KCEOHCCIPIE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4808B0)
#define KCEOHCCIPIE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4809E0)
#define KCEOHCCIPIE_BDFHFPKMFGM_OFFSET UNITYSDK_OFFSET(0x1A480420)
#define KCEOHCCIPIE_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0x1A47F800)
#define KCEOHCCIPIE_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1A47F850)
#define KCEOHCCIPIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A480B10)
#define KCEOHCCIPIE_DEJOIDOCBHP_OFFSET UNITYSDK_OFFSET(0x1A47FD70)
#define KCEOHCCIPIE_DGDLJBEMFCB_OFFSET UNITYSDK_OFFSET(0x1A47FF90)
#define KCEOHCCIPIE_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0x1A47F340)
#define KCEOHCCIPIE_DKLNFGIPPDP_OFFSET UNITYSDK_OFFSET(0x1A4804B0)
#define KCEOHCCIPIE_DLPBLBKEKNK_OFFSET UNITYSDK_OFFSET(0x1A47F1A0)
#define KCEOHCCIPIE_EEGHOOOKKJE_OFFSET UNITYSDK_OFFSET(0x1A4807F0)
#define KCEOHCCIPIE_EIAFGCLFMNL_OFFSET UNITYSDK_OFFSET(0x1A47FC30)
#define KCEOHCCIPIE_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0x1A47FBC0)
#define KCEOHCCIPIE_FNMAFAJCMLC_OFFSET UNITYSDK_OFFSET(0x1A47FCD0)
#define KCEOHCCIPIE_FOIEMMPBMPB_OFFSET UNITYSDK_OFFSET(0x1A480240)
#define KCEOHCCIPIE_GIPLFHPMJOB_OFFSET UNITYSDK_OFFSET(0x1A480760)
#define KCEOHCCIPIE_GNNLGCPMHBM_OFFSET UNITYSDK_OFFSET(0x1A4805F0)
#define KCEOHCCIPIE_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x1A480140)
#define KCEOHCCIPIE_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1A47EFE0)
#define KCEOHCCIPIE_KGPNGPAJPJI_OFFSET UNITYSDK_OFFSET(0x1A480060)
#define KCEOHCCIPIE_MNDMECJAOII_OFFSET UNITYSDK_OFFSET(0x1A47FC80)
#define KCEOHCCIPIE_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0x1A47FB10)
#define KCEOHCCIPIE_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x1A47F3A0)
#define KCEOHCCIPIE_OEDFFAKANMI_OFFSET UNITYSDK_OFFSET(0x1A47F140)
#define KCEOHCCIPIE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1A47F1E0)
#define KCEOHCCIPIE_OOHFDIKFCIK_OFFSET UNITYSDK_OFFSET(0x1A47F050)
#define KCEOHCCIPIE_PBOLKBKMMIH_OFFSET UNITYSDK_OFFSET(0x1A480550)
#define KCEOHCCIPIE_PMDONNAJEFC_OFFSET UNITYSDK_OFFSET(0x1A4801B0)
#define KCEOHCCIPIE__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A47EC40)
#define KCEOHCCIPIE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A47EF30)
#define KCEOHCCIPIE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A47F2C0)

inline static constexpr unsigned int KCEOHCCIPIE_TypeDefinitionIndex = 73964;

	class KCEOHCCIPIE : public ::CLAADCBPCHM
	{
	public:
		::UnityEngine::UI::Image* NAAODEIIMCI; // 0xC0
		::RPG::Client::BattleSilverWolf999CustomUIData* APPIHABBCGK; // 0xC8
		::UnityEngine::Animation* FDEDGOMIFDG; // 0xD0
		::UnityEngine::Animation* LIFEJLAJJKO; // 0xD8
		::UnityEngine::Animation* NADADIKOLHJ; // 0xE0
		::System::Boolean KIOHMKAEEHP; // 0xE8
		::System::Boolean AFLDFJBGGCO; // 0xE9
		::System::Boolean JLNGMABJNLM; // 0xEA
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* NBJIGEOCMJC; // 0x0
		// static const ::System::String* LMHJHHEELLO; // 0x0
		// static const ::System::String* NNMNBGDBJAN; // 0x0
		// static const ::System::String* JPPPJGGAMJP; // 0x0
		// static const ::System::String* BGDHPOFDKAM; // 0x0
		// static const ::System::String* FMLOCHOCIOM; // 0x0
		// static const ::System::String* KCGJEKHFILD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KCEOHCCIPIE__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Boolean OOHFDIKFCIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_OOHFDIKFCIK_OFFSET))(this);
		}

		::UnityEngine::Transform* DLPBLBKEKNK()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_DLPBLBKEKNK_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_ONRETURN_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void DICPMEJINGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_DICPMEJINGC_OFFSET))(this);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_NGNACJONELO_OFFSET))(this);
		}

		::System::Void BFDGGBJLEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_BFDGGBJLEBA_OFFSET))(this);
		}

		::System::Void MPPEBPAINNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_MPPEBPAINNI_OFFSET))(this, a1);
		}

		::System::Void AFMHNCLHNDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_AFMHNCLHNDP_OFFSET))(this);
		}

		::System::Void FLJMKABENAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_FLJMKABENAD_OFFSET))(this);
		}

		::UnityEngine::Transform* EIAFGCLFMNL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_EIAFGCLFMNL_OFFSET))(this);
		}

		::System::Boolean MNDMECJAOII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_MNDMECJAOII_OFFSET))(this);
		}

		::System::Void FNMAFAJCMLC(::RPG::GameCore::LevelCharacterRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_FNMAFAJCMLC_OFFSET))(this, a1);
		}

		::System::Void DEJOIDOCBHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_DEJOIDOCBHP_OFFSET))(this, a1);
		}

		::System::Void KGPNGPAJPJI(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_KGPNGPAJPJI_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_JMNFOCENFLP_OFFSET))(this);
		}

		::System::Void PMDONNAJEFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_PMDONNAJEFC_OFFSET))(this, a1);
		}

		::System::Void BDFHFPKMFGM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_BDFHFPKMFGM_OFFSET))(this, a1);
		}

		::System::Void DGDLJBEMFCB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_DGDLJBEMFCB_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_BIOBBNGDGDF_OFFSET))(this, a1, a2);
		}

		::System::Void FOIEMMPBMPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_FOIEMMPBMPB_OFFSET))(this);
		}

		::System::Void DKLNFGIPPDP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_DKLNFGIPPDP_OFFSET))(this, a1);
		}

		::System::Void PBOLKBKMMIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_PBOLKBKMMIH_OFFSET))(this, a1);
		}

		::RPG::Client::BattleSilverWolf999UltraSkillUIData* OEDFFAKANMI()
		{
			return ((::RPG::Client::BattleSilverWolf999UltraSkillUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_OEDFFAKANMI_OFFSET))(this);
		}

		::System::Void GNNLGCPMHBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_GNNLGCPMHBM_OFFSET))(this, a1);
		}

		::System::Void GIPLFHPMJOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_GIPLFHPMJOB_OFFSET))(this, a1);
		}

		::System::Void EEGHOOOKKJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_EEGHOOOKKJE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
