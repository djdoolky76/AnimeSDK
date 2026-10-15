#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x166BB0E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x166BB110)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__116_0_OFFSET UNITYSDK_OFFSET(0x166BB230)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__106_0_OFFSET UNITYSDK_OFFSET(0x166BB120)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__111_0_OFFSET UNITYSDK_OFFSET(0x166BB170)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__110_0_OFFSET UNITYSDK_OFFSET(0x166BB140)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__114_0_OFFSET UNITYSDK_OFFSET(0x166BB1D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__115_0_OFFSET UNITYSDK_OFFSET(0x166BB200)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__113_0_OFFSET UNITYSDK_OFFSET(0x166BB1A0)

namespace Coffee::UIExtensions
{
	class UIParticle___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__114_0()
		{
			return (::System::Action**)UnitySDK::FromName("Coffee.UIExtensions", "<>c")->GetStaticField(0xFC0);
		}

		static ::System::Action** StaticGet___9__115_0()
		{
			return (::System::Action**)UnitySDK::FromName("Coffee.UIExtensions", "<>c")->GetStaticField(0xFC8);
		}

		static ::System::Action** StaticGet___9__113_0()
		{
			return (::System::Action**)UnitySDK::FromName("Coffee.UIExtensions", "<>c")->GetStaticField(0xFD0);
		}

		static ::System::Action** StaticGet___9__106_0()
		{
			return (::System::Action**)UnitySDK::FromName("Coffee.UIExtensions", "<>c")->GetStaticField(0xFD8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Coffee.UIExtensions", "<>c")->GetStaticField(0xFE0);
		}

		static ::System::Action** StaticGet___9__110_0()
		{
			return (::System::Action**)UnitySDK::FromName("Coffee.UIExtensions", "<>c")->GetStaticField(0xFE8);
		}

		static ::System::Action** StaticGet___9__116_0()
		{
			return (::System::Action**)UnitySDK::FromName("Coffee.UIExtensions", "<>c")->GetStaticField(0xFF0);
		}

		static ::System::Action** StaticGet___9__111_0()
		{
			return (::System::Action**)UnitySDK::FromName("Coffee.UIExtensions", "<>c")->GetStaticField(0xFF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnDisable_b__106_0(::Coffee::UIExtensions::UIParticleRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__106_0_OFFSET))(this, a1);
		}

		::System::Void _Play_b__110_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__110_0_OFFSET))(this, a1);
		}

		::System::Void _Pause_b__111_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__111_0_OFFSET))(this, a1);
		}

		::System::Void _Stop_b__113_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__113_0_OFFSET))(this, a1);
		}

		::System::Void _StartEmission_b__114_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__114_0_OFFSET))(this, a1);
		}

		::System::Void _StopEmission_b__115_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__115_0_OFFSET))(this, a1);
		}

		::System::Void _Clear_b__116_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__116_0_OFFSET))(this, a1);
		}

	};
}
