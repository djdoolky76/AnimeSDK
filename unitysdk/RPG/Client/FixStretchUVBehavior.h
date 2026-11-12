#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class FixStretchUV; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD9C8470)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xD9C7050)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD9C8430)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_INEODHIJNGB_OFFSET UNITYSDK_OFFSET(0xD9C7720)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_JGNKCOANMNH_OFFSET UNITYSDK_OFFSET(0xD9C7F30)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_MHFOALPFPAH_OFFSET UNITYSDK_OFFSET(0xD9C8060)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD9C6FE0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_PDFMJEDPKOD_OFFSET UNITYSDK_OFFSET(0xD9C7C90)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xD9C76A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchUVBehavior_TypeDefinitionIndex = 72577;

	class FixStretchUVBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Vector2 tiling; // 0x38
		::UnityEngine::Renderer* _Renderer; // 0x40
		::UnityEngine::MaterialPropertyBlock* _MaterialPropertyBlock; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_DIOEAJEHHND_OFFSET))(this);
		}

		::UnityEngine::Vector2 INEODHIJNGB()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_INEODHIJNGB_OFFSET))(this);
		}

		::System::Void MHFOALPFPAH(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_MHFOALPFPAH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 JGNKCOANMNH(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_JGNKCOANMNH_OFFSET))(this, a1);
		}

		::System::Void PDFMJEDPKOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_PDFMJEDPKOD_OFFSET))(this);
		}

		::RPG::Client::FixStretchUV* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::FixStretchUV*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
