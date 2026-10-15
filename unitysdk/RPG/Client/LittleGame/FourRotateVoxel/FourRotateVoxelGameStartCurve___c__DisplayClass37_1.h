#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameStartCurve_NMKFGFCKBBP; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD465890)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1___SPRAYLIQUIDTOBRICK2D_B__0_OFFSET UNITYSDK_OFFSET(0xD466C30)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1___SPRAYLIQUIDTOBRICK2D_B__1_OFFSET UNITYSDK_OFFSET(0xD466E40)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	template <typename T>
	class FourRotateVoxelGameStartCurve___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_NMKFGFCKBBP* colorLiquidEffectData; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1_CTOR_OFFSET))(this);
		}

		::System::Void __SprayLiquidToBrick2D_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1___SPRAYLIQUIDTOBRICK2D_B__0_OFFSET))(this);
		}

		::System::Void __SprayLiquidToBrick2D_b__1(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1___SPRAYLIQUIDTOBRICK2D_B__1_OFFSET))(this, a1, a2);
		}

	};
}
