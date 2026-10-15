#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace System { class Nullable; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_CTOR_OFFSET UNITYSDK_OFFSET(0xD80AF50)
#define RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80AD40)
#define RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_LCJBFOCGBOI_OFFSET UNITYSDK_OFFSET(0xD80AEC0)
#define RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_PBJAENMIKEJ_OFFSET UNITYSDK_OFFSET(0xD80A9F0)
#define RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80A040)

namespace RPG::Client
{
	class MonoEffectPluginShowNumber : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::String* DynamicValueName; // 0x28
		::UnityEngine::GameObject* OBJFPKGDNKG; // 0x30
		::UnityEngine::GameObject* BIMMKGAAKFJ; // 0x38
		::UnityEngine::GameObject* BHIHBEHCNBN; // 0x40
		::UnityEngine::ParticleSystem* KPNJFKIALJC; // 0x48
		::UnityEngine::ParticleSystem* BLDCAHDJGNA; // 0x50
		::System::UInt32 FLPHNONEHNE; // 0x58
		::System::UInt32 KDKJHGLKGPK; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void LCJBFOCGBOI(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_LCJBFOCGBOI_OFFSET))(this, a1);
		}

		::System::Void PBJAENMIKEJ(::RPG::GameCore::StringHash a1, ::System::Nullable* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_PBJAENMIKEJ_OFFSET))(this, a1, a2, a3);
		}

	};
}
