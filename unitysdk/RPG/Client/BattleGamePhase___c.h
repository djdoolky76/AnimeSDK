#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_BATTLEGAMEPHASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC83BFB0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC83BFE0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__PRECESSQUITBATTLE_B__57_0_OFFSET UNITYSDK_OFFSET(0xC83C0D0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C___INITAUDIO_B__9_0_OFFSET UNITYSDK_OFFSET(0xC83BFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c_TypeDefinitionIndex = 60963;

	class BattleGamePhase___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__57_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59D10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59D18);
		}

		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C_CTOR_OFFSET))(this);
		}

		::System::Void __InitAudio_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C___INITAUDIO_B__9_0_OFFSET))(this);
		}

		::System::Void _PrecessQuitBattle_b__57_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__PRECESSQUITBATTLE_B__57_0_OFFSET))(this);
		}

	};
}
