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

#define BENKEDNFOGH_BBOFIJABCFM_OFFSET UNITYSDK_OFFSET(0xB7E4410)
#define BENKEDNFOGH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7E47D0)
#define BENKEDNFOGH_CFGDHOFNOBO_OFFSET UNITYSDK_OFFSET(0xB7E4230)
#define BENKEDNFOGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E47A0)
#define BENKEDNFOGH_DGJFMGBEDAC_OFFSET UNITYSDK_OFFSET(0xB7E3450)
#define BENKEDNFOGH_KDLOAOCCMHH_OFFSET UNITYSDK_OFFSET(0xB7E32B0)
#define BENKEDNFOGH_KNBMBDNJLBK_OFFSET UNITYSDK_OFFSET(0xB7E4080)
#define BENKEDNFOGH_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xB7E2E50)
#define BENKEDNFOGH_MDIOIKCGIOL_OFFSET UNITYSDK_OFFSET(0xB7E3590)
#define BENKEDNFOGH_NMONAMGOEKK_OFFSET UNITYSDK_OFFSET(0xB7E3530)
#define BENKEDNFOGH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB7E2CF0)
#define BENKEDNFOGH_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB7E2F30)
#define BENKEDNFOGH_OOEJHEKGFAD_OFFSET UNITYSDK_OFFSET(0xB7E30D0)
#define BENKEDNFOGH_OOJBNDPOCLN_OFFSET UNITYSDK_OFFSET(0xB7E31C0)
#define BENKEDNFOGH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xB7E3DE0)
#define BENKEDNFOGH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7E4680)
#define BENKEDNFOGH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB7E3D20)
#define BENKEDNFOGH__ONRETURN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB7E47F0)
#define BENKEDNFOGH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB7E2ED0)

inline static constexpr unsigned int BENKEDNFOGH_TypeDefinitionIndex = 73733;

	class BENKEDNFOGH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::RPG::Client::UIFollow3DTarget* DIHCNFOOEFF; // 0x68
		::UnityEngine::RectTransform* HKONEDKHNMM; // 0x70
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x78
		::CFDGKEDFBJP* NINEBKCLIOG; // 0x80
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x88
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x90
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x98
		static ::System::Single* StaticGet_AJEHGNNEDFG()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x15340);
		}

		static ::System::Single* StaticGet_DMFNDMLIJCD()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x15344);
		}

		static ::System::Single* StaticGet_FMPCCGNHMJC()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x15348);
		}

		static ::System::Single* StaticGet_GGMLAPKLIKB()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x1534C);
		}

		static ::System::Single* StaticGet_HEEPKPHCKOI()
		{
			return (::System::Single*)UnitySDK::FromName("", "BENKEDNFOGH")->GetStaticField(0x15350);
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
