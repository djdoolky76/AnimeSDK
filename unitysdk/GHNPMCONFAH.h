#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class CreateBattleEventServant; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }

#define GHNPMCONFAH_BEHAHFONDGP_OFFSET UNITYSDK_OFFSET(0x1A3CFC80)
#define GHNPMCONFAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3CF950)
#define GHNPMCONFAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3D06F0)
#define GHNPMCONFAH_HDCJDAIAHNM_OFFSET UNITYSDK_OFFSET(0x1A3D0490)
#define GHNPMCONFAH_JKJMOGBMCCH_OFFSET UNITYSDK_OFFSET(0x1A3D0280)
#define GHNPMCONFAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A3CFA60)

inline static constexpr unsigned int GHNPMCONFAH_TypeDefinitionIndex = 59281;

	class GHNPMCONFAH
	{
	public:
		::KFELGAIGHAP* ELCJBKPAMMH; // 0x28
		::KFELGAIGHAP* PPCPGFGKEHN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEventServant* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEventServant*))((::PBYTE)hIl2Cpp + GHNPMCONFAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNPMCONFAH_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* BEHAHFONDGP(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::BattleGridFightAvatarData* a3, ::RPG::GameCore::StageRow* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + GHNPMCONFAH_BEHAHFONDGP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JKJMOGBMCCH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GHNPMCONFAH_JKJMOGBMCCH_OFFSET))(this, a1);
		}

		::System::Void HDCJDAIAHNM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GHNPMCONFAH_HDCJDAIAHNM_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNPMCONFAH_DISPOSE_OFFSET))(this);
		}

	};
