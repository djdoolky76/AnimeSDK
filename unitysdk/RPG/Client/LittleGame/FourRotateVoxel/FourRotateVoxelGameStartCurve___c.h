#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD466BD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD466C10)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C___SOLVELIQUIDEFFECT_B__39_0_OFFSET UNITYSDK_OFFSET(0xD466C20)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve___c_TypeDefinitionIndex = 76843;

	class FourRotateVoxelGameStartCurve___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__39_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "<>c")->GetStaticField(0x33510);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "<>c")->GetStaticField(0x33518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C_CTOR_OFFSET))(this);
		}

		::System::Void __SolveLiquidEffect_b__39_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C___SOLVELIQUIDEFFECT_B__39_0_OFFSET))(this, a1, a2);
		}

	};
}
