#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFDGKEDFBJP;
class EKFMIDBJDIA;
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define BENKEDNFOGH_BBOFIJABCFM_OFFSET UNITYSDK_OFFSET(0xB15AD00)
#define BENKEDNFOGH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB15B060)
#define BENKEDNFOGH_CFGDHOFNOBO_OFFSET UNITYSDK_OFFSET(0xB15AB40)
#define BENKEDNFOGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB15B030)
#define BENKEDNFOGH_DGJFMGBEDAC_OFFSET UNITYSDK_OFFSET(0xB159D70)
#define BENKEDNFOGH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB15A610)
#define BENKEDNFOGH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB1597F0)
#define BENKEDNFOGH_KDLOAOCCMHH_OFFSET UNITYSDK_OFFSET(0xB159BD0)
#define BENKEDNFOGH_KNBMBDNJLBK_OFFSET UNITYSDK_OFFSET(0xB15A990)
#define BENKEDNFOGH_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xB159770)
#define BENKEDNFOGH_MDIOIKCGIOL_OFFSET UNITYSDK_OFFSET(0xB159E90)
#define BENKEDNFOGH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB15A6D0)
#define BENKEDNFOGH_NMONAMGOEKK_OFFSET UNITYSDK_OFFSET(0xB159E30)
#define BENKEDNFOGH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB159610)
#define BENKEDNFOGH_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB159850)
#define BENKEDNFOGH_OOEJHEKGFAD_OFFSET UNITYSDK_OFFSET(0xB1599F0)
#define BENKEDNFOGH_OOJBNDPOCLN_OFFSET UNITYSDK_OFFSET(0xB159AE0)
#define BENKEDNFOGH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB15AF70)
#define BENKEDNFOGH__ONRETURN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB15B080)

	class BENKEDNFOGH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x60
		::UnityEngine::RectTransform* HKONEDKHNMM; // 0x68
		::CFDGKEDFBJP* NINEBKCLIOG; // 0x70
		::RPG::Client::UIFollow3DTarget* DIHCNFOOEFF; // 0x78
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x90
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x98
		static ::System::Single* StaticGet_FMPCCGNHMJC()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x154B0);
		}

		static ::System::Single* StaticGet_GGMLAPKLIKB()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x154B4);
		}

		static ::System::Single* StaticGet_DMFNDMLIJCD()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x154B8);
		}

		static ::System::Single* StaticGet_AJEHGNNEDFG()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x154BC);
		}

		static ::System::Single* StaticGet_HEEPKPHCKOI()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x154C0);
		}

		// static const ::System::Object LOEJIAFIPKK; // 0x0
		// static const ::System::Object BEABEEPLLID; // 0x0
		// static const ::System::Object PKOIALJCEPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BENKEDNFOGH_CCTOR_OFFSET))();
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BENKEDNFOGH_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH_ONRETURN_OFFSET))(this);
		}

		::System::Void OOJBNDPOCLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH_OOJBNDPOCLN_OFFSET))(this);
		}

		::RPG::GameCore::EventManager* KDLOAOCCMHH()
		{
			return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH_KDLOAOCCMHH_OFFSET))(this);
		}

		::System::Void DGJFMGBEDAC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BENKEDNFOGH_DGJFMGBEDAC_OFFSET))(this, a1);
		}

		::System::Void NMONAMGOEKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH_NMONAMGOEKK_OFFSET))(this);
		}

		::System::Void OOEJHEKGFAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH_OOEJHEKGFAD_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BENKEDNFOGH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BENKEDNFOGH_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void MDIOIKCGIOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH_MDIOIKCGIOL_OFFSET))(this);
		}

		::System::Void CFGDHOFNOBO(::RPG::Client::UIFollow3DTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + BENKEDNFOGH_CFGDHOFNOBO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BBOFIJABCFM(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BENKEDNFOGH_BBOFIJABCFM_OFFSET))(this, a1);
		}

		::UnityEngine::Rect KNBMBDNJLBK()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH_KNBMBDNJLBK_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH__ONBIND_OFFSET))(this);
		}

		::System::Void _OnReturn_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH__ONRETURN_B__1_0_OFFSET))(this);
		}

	};
