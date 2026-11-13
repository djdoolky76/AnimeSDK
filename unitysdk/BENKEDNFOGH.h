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

#define BENKEDNFOGH_BBOFIJABCFM_OFFSET UNITYSDK_OFFSET(0x1A94EE50)
#define BENKEDNFOGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A94F210)
#define BENKEDNFOGH_CFGDHOFNOBO_OFFSET UNITYSDK_OFFSET(0x1A94EC90)
#define BENKEDNFOGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A94F1E0)
#define BENKEDNFOGH_DGJFMGBEDAC_OFFSET UNITYSDK_OFFSET(0x1A94DEA0)
#define BENKEDNFOGH_KDLOAOCCMHH_OFFSET UNITYSDK_OFFSET(0x1A94DD00)
#define BENKEDNFOGH_KNBMBDNJLBK_OFFSET UNITYSDK_OFFSET(0x1A94EAE0)
#define BENKEDNFOGH_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x1A94D8A0)
#define BENKEDNFOGH_MDIOIKCGIOL_OFFSET UNITYSDK_OFFSET(0x1A94DFE0)
#define BENKEDNFOGH_NMONAMGOEKK_OFFSET UNITYSDK_OFFSET(0x1A94DF80)
#define BENKEDNFOGH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1A94D740)
#define BENKEDNFOGH_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1A94D980)
#define BENKEDNFOGH_OOEJHEKGFAD_OFFSET UNITYSDK_OFFSET(0x1A94DB20)
#define BENKEDNFOGH_OOJBNDPOCLN_OFFSET UNITYSDK_OFFSET(0x1A94DC10)
#define BENKEDNFOGH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1A94E840)
#define BENKEDNFOGH__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A94F0C0)
#define BENKEDNFOGH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A94E780)
#define BENKEDNFOGH__ONRETURN_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A94F230)
#define BENKEDNFOGH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A94D920)

inline static constexpr unsigned int BENKEDNFOGH_TypeDefinitionIndex = 73732;

	class BENKEDNFOGH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x60
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x68
		::UnityEngine::RectTransform* HKONEDKHNMM; // 0x70
		::CFDGKEDFBJP* NINEBKCLIOG; // 0x78
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x90
		::RPG::Client::UIFollow3DTarget* DIHCNFOOEFF; // 0x98
		static ::System::Single* StaticGet_GGMLAPKLIKB()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x13050);
		}

		static ::System::Single* StaticGet_DMFNDMLIJCD()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x13054);
		}

		static ::System::Single* StaticGet_HEEPKPHCKOI()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x13058);
		}

		static ::System::Single* StaticGet_AJEHGNNEDFG()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x1305C);
		}

		static ::System::Single* StaticGet_FMPCCGNHMJC()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x13060);
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BENKEDNFOGH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENKEDNFOGH__SETUPVIEW_OFFSET))(this);
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
