#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCGIDEKLGAJ_ForceKillMarkPanelType.h"
#include "unitysdk/PEALGIFBLDO.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG::Client { class DefaultForceKillMarkData; }
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MMIJDKFJFGE_AKNKDHFLKCD_OFFSET UNITYSDK_OFFSET(0xC28DE70)
#define MMIJDKFJFGE_CDPPNHNHJBK_OFFSET UNITYSDK_OFFSET(0xC28E040)
#define MMIJDKFJFGE_CKDALOKLPPL_OFFSET UNITYSDK_OFFSET(0xC28DF40)
#define MMIJDKFJFGE_CTOR_OFFSET UNITYSDK_OFFSET(0xC28D040)
#define MMIJDKFJFGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC28D4F0)
#define MMIJDKFJFGE_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0xC28DB50)
#define MMIJDKFJFGE_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xC28D820)
#define MMIJDKFJFGE_FGPICMKGPBJ_OFFSET UNITYSDK_OFFSET(0xC28D640)
#define MMIJDKFJFGE_GFDNFNGBOPA_OFFSET UNITYSDK_OFFSET(0xC28D2B0)
#define MMIJDKFJFGE_GNCHAPKEAKF_OFFSET UNITYSDK_OFFSET(0xC28D350)
#define MMIJDKFJFGE_HFBAFEJNOJK_OFFSET UNITYSDK_OFFSET(0xC28D200)
#define MMIJDKFJFGE_HJGGMIDPBNB_OFFSET UNITYSDK_OFFSET(0xC28D7D0)
#define MMIJDKFJFGE_HPJGKHMGMOA_OFFSET UNITYSDK_OFFSET(0xC28D570)
#define MMIJDKFJFGE_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xC28DCE0)
#define MMIJDKFJFGE_KOIGAEAEBML_OFFSET UNITYSDK_OFFSET(0xC28D9B0)
#define MMIJDKFJFGE_KPNIKDBICCM_OFFSET UNITYSDK_OFFSET(0xC28D5F0)
#define MMIJDKFJFGE_OLAMBABOCMI_OFFSET UNITYSDK_OFFSET(0xC28D480)

inline static constexpr unsigned int MMIJDKFJFGE_TypeDefinitionIndex = 73648;

	class MMIJDKFJFGE : public ::PEALGIFBLDO
	{
	public:
		::RPG::Client::ForceKillMarkDataProvider* DILADJDFMFG; // 0x18
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
		::System::Action_1<::RPG::Client::ForceKillMarkDataProvider*>* DBFINCLPBKP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_CTOR_OFFSET))(this);
		}

		static ::IGKFNIEJGLM HFBAFEJNOJK(::DCGIDEKLGAJ_ForceKillMarkPanelType a1, ::UnityEngine::Transform* a2)
		{
			return ((::IGKFNIEJGLM(*)(::DCGIDEKLGAJ_ForceKillMarkPanelType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_HFBAFEJNOJK_OFFSET))(a1, a2);
		}

		::System::Single GFDNFNGBOPA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_GFDNFNGBOPA_OFFSET))(this);
		}

		::System::Void GNCHAPKEAKF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_GNCHAPKEAKF_OFFSET))(this, a1);
		}

		::System::Void OLAMBABOCMI(::System::Action_1<::RPG::Client::ForceKillMarkDataProvider*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::ForceKillMarkDataProvider*>*))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_OLAMBABOCMI_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_DISPOSE_OFFSET))(this);
		}

		::System::Void HPJGKHMGMOA(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_HPJGKHMGMOA_OFFSET))(this, a1);
		}

		::System::Void KPNIKDBICCM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_KPNIKDBICCM_OFFSET))(this, a1);
		}

		::System::Void FGPICMKGPBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_FGPICMKGPBJ_OFFSET))(this);
		}

		::System::Void EBPDLMBPLBL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Boolean KOIGAEAEBML(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_KOIGAEAEBML_OFFSET))(this, a1);
		}

		::System::Void AKNKDHFLKCD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_AKNKDHFLKCD_OFFSET))(this, a1);
		}

		::System::Void CKDALOKLPPL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_CKDALOKLPPL_OFFSET))(this, a1);
		}

		::System::Void CDPPNHNHJBK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_CDPPNHNHJBK_OFFSET))(this, a1);
		}

		::RPG::Client::DefaultForceKillMarkData* HJGGMIDPBNB()
		{
			return ((::RPG::Client::DefaultForceKillMarkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIJDKFJFGE_HJGGMIDPBNB_OFFSET))(this);
		}

	};
