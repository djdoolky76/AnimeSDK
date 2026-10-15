#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/GJGLDDAHDHG_ServantHUDState.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AAHPFGHKBOJ;
class AICCLEAHNLO;
class IODDFPHCIEM;
class LFBLEFCCFIH;
namespace RPG::GameCore { class EntityModelDispose; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterCreate; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define GJGLDDAHDHG_ANGHGBBEDMB_OFFSET UNITYSDK_OFFSET(0x15A680E0)
#define GJGLDDAHDHG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A68DF0)
#define GJGLDDAHDHG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15A69150)
#define GJGLDDAHDHG_BBPELBAIGCH_OFFSET UNITYSDK_OFFSET(0x15A68770)
#define GJGLDDAHDHG_BHOKGPNBNOH_OFFSET UNITYSDK_OFFSET(0x15A67E70)
#define GJGLDDAHDHG_CJBPOOMHELO_OFFSET UNITYSDK_OFFSET(0x15A67A30)
#define GJGLDDAHDHG_CMEIJLEAIIH_OFFSET UNITYSDK_OFFSET(0x15A683E0)
#define GJGLDDAHDHG_CNEKHDMHFKK_OFFSET UNITYSDK_OFFSET(0x15A68480)
#define GJGLDDAHDHG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A69470)
#define GJGLDDAHDHG_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x15A68A90)
#define GJGLDDAHDHG_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15A677C0)
#define GJGLDDAHDHG_EFEGOOJJOLE_OFFSET UNITYSDK_OFFSET(0x15A68C10)
#define GJGLDDAHDHG_EHHPNIHAKIL_OFFSET UNITYSDK_OFFSET(0x15A67F90)
#define GJGLDDAHDHG_EIDKCJHNFKC_OFFSET UNITYSDK_OFFSET(0x15A68D30)
#define GJGLDDAHDHG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15A679A0)
#define GJGLDDAHDHG_GJHGEGPKGJD_OFFSET UNITYSDK_OFFSET(0x15A687F0)
#define GJGLDDAHDHG_IBAEONHKAKL_OFFSET UNITYSDK_OFFSET(0x15A68A00)
#define GJGLDDAHDHG_IHCBLBFCEKE_OFFSET UNITYSDK_OFFSET(0x15A67C20)
#define GJGLDDAHDHG_ILKNLMCJEKJ_OFFSET UNITYSDK_OFFSET(0x15A68940)
#define GJGLDDAHDHG_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0x15A68B50)
#define GJGLDDAHDHG_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0x15A68680)
#define GJGLDDAHDHG_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x15A68630)
#define GJGLDDAHDHG_LDILNHFIJEH_OFFSET UNITYSDK_OFFSET(0x15A688E0)
#define GJGLDDAHDHG_NEMAILGLJDG_OFFSET UNITYSDK_OFFSET(0x15A682D0)
#define GJGLDDAHDHG_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15A67830)
#define GJGLDDAHDHG_NMOEPOMMDIK_OFFSET UNITYSDK_OFFSET(0x15A686D0)
#define GJGLDDAHDHG_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15A67D90)
#define GJGLDDAHDHG_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15A67E10)
#define GJGLDDAHDHG__ONBIND_OFFSET UNITYSDK_OFFSET(0x15A67430)
#define GJGLDDAHDHG__ONTICK_OFFSET UNITYSDK_OFFSET(0x15A68270)

inline static constexpr unsigned int GJGLDDAHDHG_TypeDefinitionIndex = 72332;

	class GJGLDDAHDHG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* ANIHJHGMMDP; // 0x60
		::UnityEngine::Animator* CFNGLMDMENE; // 0x68
		::IODDFPHCIEM* MIFAPAGPDCK; // 0x70
		::UnityEngine::Transform* FGHFLHBEGHJ; // 0x78
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x80
		::RPG::GameCore::GameEntity* EAFBMKJFCDG; // 0x88
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x90
		::UnityEngine::UI::Image* KAJCADNAKNF; // 0x98
		::LFBLEFCCFIH* HNGBEACAEPA; // 0xA0
		::UnityEngine::UI::Image* AGINIECLABE; // 0xA8
		::AICCLEAHNLO* HEBFHCBPMFI; // 0xB0
		::UnityEngine::Transform* EHCGMIMEPCI; // 0xB8
		::GJGLDDAHDHG_ServantHUDState CMJGDNKDJEB; // 0xC0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_ONRETURN_OFFSET))(this);
		}

		::System::Void EHHPNIHAKIL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_EHHPNIHAKIL_OFFSET))(this, a1);
		}

		::System::Void ANGHGBBEDMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_ANGHGBBEDMB_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJGLDDAHDHG__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NEMAILGLJDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_NEMAILGLJDG_OFFSET))(this);
		}

		::System::Void BHOKGPNBNOH(::GJGLDDAHDHG_ServantHUDState a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJGLDDAHDHG_ServantHUDState))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_BHOKGPNBNOH_OFFSET))(this, a1);
		}

		::System::Void CJBPOOMHELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_CJBPOOMHELO_OFFSET))(this);
		}

		::System::Void IHCBLBFCEKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_IHCBLBFCEKE_OFFSET))(this);
		}

		::System::Void CMEIJLEAIIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_CMEIJLEAIIH_OFFSET))(this, a1);
		}

		::System::Void CNEKHDMHFKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_CNEKHDMHFKK_OFFSET))(this);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void JNJKGKLBCNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_JNJKGKLBCNI_OFFSET))(this);
		}

		::System::Void NMOEPOMMDIK(::RPG::GameCore::LevelCharacterCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_NMOEPOMMDIK_OFFSET))(this, a1);
		}

		::System::Void BBPELBAIGCH(::RPG::GameCore::EntityModelDispose* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityModelDispose*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_BBPELBAIGCH_OFFSET))(this, a1);
		}

		::System::Void GJHGEGPKGJD(::AAHPFGHKBOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAHPFGHKBOJ*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_GJHGEGPKGJD_OFFSET))(this, a1);
		}

		::System::UInt32 LDILNHFIJEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_LDILNHFIJEH_OFFSET))(this);
		}

		::System::Void ILKNLMCJEKJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_ILKNLMCJEKJ_OFFSET))(this, a1);
		}

		::System::Void IBAEONHKAKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_IBAEONHKAKL_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void JKNIBKEGJBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_JKNIBKEGJBF_OFFSET))(this, a1);
		}

		::System::Void EFEGOOJJOLE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_EFEGOOJJOLE_OFFSET))(this, a1);
		}

		::System::Void EIDKCJHNFKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_EIDKCJHNFKC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGLDDAHDHG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
