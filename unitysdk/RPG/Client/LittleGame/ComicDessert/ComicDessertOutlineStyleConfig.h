#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertGlowUsage.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/GlowStyle.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/OutlineStyle.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertOutlineStyleConfig; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTOUTLINESTYLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDE8B170)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTOUTLINESTYLECONFIG_GET_INGAMEHOVER_OFFSET UNITYSDK_OFFSET(0xDE8B0B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTOUTLINESTYLECONFIG_HDNBCAKIFIK_OFFSET UNITYSDK_OFFSET(0xDE8B0D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTOUTLINESTYLECONFIG_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xDE8B010)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertOutlineStyleConfig_TypeDefinitionIndex = 79745;

	class ComicDessertOutlineStyleConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::OutlineStyle _InGameHover; // 0x18
		::RPG::Client::LittleGame::ComicDessert::GlowStyle _FailureFeedback; // 0x30
		::RPG::Client::LittleGame::ComicDessert::GlowStyle _InGameDevice; // 0x48
		::RPG::Client::LittleGame::ComicDessert::GlowStyle _DeviceUpgradeSelectionGlow; // 0x60
		// static const ::System::String* ResourcePath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTOUTLINESTYLECONFIG_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LittleGame::ComicDessert::ComicDessertOutlineStyleConfig* HKEPJLDBGIG()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertOutlineStyleConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTOUTLINESTYLECONFIG_HKEPJLDBGIG_OFFSET))();
		}

		::RPG::Client::LittleGame::ComicDessert::OutlineStyle get_InGameHover()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::OutlineStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTOUTLINESTYLECONFIG_GET_INGAMEHOVER_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::GlowStyle HDNBCAKIFIK(::RPG::Client::LittleGame::ComicDessert::ComicDessertGlowUsage a1)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::GlowStyle(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGlowUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTOUTLINESTYLECONFIG_HDNBCAKIFIK_OFFSET))(this, a1);
		}

	};
}
