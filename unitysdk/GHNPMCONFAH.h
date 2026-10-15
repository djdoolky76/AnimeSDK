#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class CreateBattleEventServant; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }

#define GHNPMCONFAH_BEHAHFONDGP_OFFSET UNITYSDK_OFFSET(0x15A1FC90)
#define GHNPMCONFAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A1F960)
#define GHNPMCONFAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A20700)
#define GHNPMCONFAH_HDCJDAIAHNM_OFFSET UNITYSDK_OFFSET(0x15A204A0)
#define GHNPMCONFAH_JKJMOGBMCCH_OFFSET UNITYSDK_OFFSET(0x15A20290)
#define GHNPMCONFAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A1FA70)

inline static constexpr unsigned int GHNPMCONFAH_TypeDefinitionIndex = 58042;

	class GHNPMCONFAH
	{
	public:
		::KFELGAIGHAP* PPCPGFGKEHN; // 0x28
		::KFELGAIGHAP* ELCJBKPAMMH; // 0x30
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
