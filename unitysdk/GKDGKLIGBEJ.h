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

#define GKDGKLIGBEJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A8CE5C0)
#define GKDGKLIGBEJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A8CE7D0)
#define GKDGKLIGBEJ_CELHMJICOJA_OFFSET UNITYSDK_OFFSET(0x1A8CDA50)
#define GKDGKLIGBEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CE9A0)
#define GKDGKLIGBEJ_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x1A8CDF10)
#define GKDGKLIGBEJ_EEGJEONFCON_OFFSET UNITYSDK_OFFSET(0x1A8CD9B0)
#define GKDGKLIGBEJ_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x1A8CDD40)
#define GKDGKLIGBEJ_KOIEPHBLHID_OFFSET UNITYSDK_OFFSET(0x1A8CE280)
#define GKDGKLIGBEJ_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x1A8CE500)
#define GKDGKLIGBEJ_MCNCMHEENJO_OFFSET UNITYSDK_OFFSET(0x1A8CE4A0)
#define GKDGKLIGBEJ_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x1A8CE060)
#define GKDGKLIGBEJ_PENEPJEKPDD_OFFSET UNITYSDK_OFFSET(0x1A8CDCE0)
#define GKDGKLIGBEJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1A8CD780)
#define GKDGKLIGBEJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A8CD260)
#define GKDGKLIGBEJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8CDE40)
#define GKDGKLIGBEJ__ONTICK_OFFSET UNITYSDK_OFFSET(0x1A8CDE90)
#define GKDGKLIGBEJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A8CD930)
#define GKDGKLIGBEJ___ONBIND_B__1_1_OFFSET UNITYSDK_OFFSET(0x1A8CEA00)

inline static constexpr unsigned int GKDGKLIGBEJ_TypeDefinitionIndex = 74076;

	class GKDGKLIGBEJ : public ::FMPCODLIOLG
	{
	public:
		::FKDOJIKMFLG* GLCDGDBCMHJ; // 0x60
		::EJOBDMJKJGE* JKINMDJANBN; // 0x68
		::UnityEngine::Transform* PENDOBEBHNJ; // 0x70
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0x78
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x80
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x88
		::KPGLJBFPDEG* GGGHKCCNHBD; // 0x90
		::GNFODCFLEMH* PGKJIEGLLCI; // 0x98
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* LMHPOFCBFIB; // 0xA0
		::RPG::Client::BattleAvatarCustomData* JAILPDGOHJB; // 0xA8
		::PPMBIJCEBAB* HHPCPKNELED; // 0xB0
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0xB8
		::System::Boolean AKKOCKKJMFC; // 0xC0
		::System::Boolean BNKAECGHLKE; // 0xC1
		::System::Boolean GCKBCJFOLMA; // 0xC2
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
