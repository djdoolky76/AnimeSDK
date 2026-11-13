#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameStartCurve_NMKFGFCKBBP; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB6400)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1___SPRAYLIQUIDTOBRICK2D_B__0_OFFSET UNITYSDK_OFFSET(0x1CDB77A0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1___SPRAYLIQUIDTOBRICK2D_B__1_OFFSET UNITYSDK_OFFSET(0x1CDB79C0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve___c__DisplayClass37_1_TypeDefinitionIndex = 79178;

	template <typename T>
	class FourRotateVoxelGameStartCurve___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_NMKFGFCKBBP* colorLiquidEffectData; // 0x10
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* __9__1; // 0x18
		::System::Object* CS___8__locals1; // 0x20
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
