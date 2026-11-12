#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class EJOBDMJKJGE;
class FKDOJIKMFLG;
class GNFODCFLEMH;
class KPGLJBFPDEG;
class PPMBIJCEBAB;
namespace RPG::Client { class BattleAvatarCustomData; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define GKDGKLIGBEJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x169CFE90)
#define GKDGKLIGBEJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x169D00A0)
#define GKDGKLIGBEJ_CELHMJICOJA_OFFSET UNITYSDK_OFFSET(0x169CF310)
#define GKDGKLIGBEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x169D0270)
#define GKDGKLIGBEJ_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x169CF7E0)
#define GKDGKLIGBEJ_EEGJEONFCON_OFFSET UNITYSDK_OFFSET(0x169CF260)
#define GKDGKLIGBEJ_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x169CF610)
#define GKDGKLIGBEJ_KOIEPHBLHID_OFFSET UNITYSDK_OFFSET(0x169CFB50)
#define GKDGKLIGBEJ_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x169CFDD0)
#define GKDGKLIGBEJ_MCNCMHEENJO_OFFSET UNITYSDK_OFFSET(0x169CFD70)
#define GKDGKLIGBEJ_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x169CF930)
#define GKDGKLIGBEJ_PENEPJEKPDD_OFFSET UNITYSDK_OFFSET(0x169CF5B0)
#define GKDGKLIGBEJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x169CF040)
#define GKDGKLIGBEJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x169CEB20)
#define GKDGKLIGBEJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x169CF710)
#define GKDGKLIGBEJ__ONTICK_OFFSET UNITYSDK_OFFSET(0x169CF760)
#define GKDGKLIGBEJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x169CF1E0)
#define GKDGKLIGBEJ___ONBIND_B__1_1_OFFSET UNITYSDK_OFFSET(0x169D02D0)

inline static constexpr unsigned int GKDGKLIGBEJ_TypeDefinitionIndex = 74077;

	class GKDGKLIGBEJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::FKDOJIKMFLG* GLCDGDBCMHJ; // 0x68
		::RPG::Client::BattleAvatarCustomData* JAILPDGOHJB; // 0x70
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x78
		::GNFODCFLEMH* PGKJIEGLLCI; // 0x80
		::UnityEngine::Transform* PENDOBEBHNJ; // 0x88
		::PPMBIJCEBAB* HHPCPKNELED; // 0x90
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0x98
		::EJOBDMJKJGE* JKINMDJANBN; // 0xA0
		::KPGLJBFPDEG* GGGHKCCNHBD; // 0xA8
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0xB0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* LMHPOFCBFIB; // 0xB8
		::System::Boolean GCKBCJFOLMA; // 0xC0
		::System::Boolean BNKAECGHLKE; // 0xC1
		::System::Boolean AKKOCKKJMFC; // 0xC2
		// static const ::System::String* LPGKOPIGGOB; // 0x0
		// static const ::System::String* GADLIJJAAHF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void EEGJEONFCON(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_EEGJEONFCON_OFFSET))(this, a1);
		}

		::System::Boolean PENEPJEKPDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_PENEPJEKPDD_OFFSET))(this);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_KGDIPFNECJH_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void PDPKAHJGCLM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void KOIEPHBLHID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_KOIEPHBLHID_OFFSET))(this, a1);
		}

		::System::Void MCNCMHEENJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_MCNCMHEENJO_OFFSET))(this, a1);
		}

		::System::Void CELHMJICOJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_CELHMJICOJA_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __OnBind_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ___ONBIND_B__1_1_OFFSET))(this);
		}

	};
