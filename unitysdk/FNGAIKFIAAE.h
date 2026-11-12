#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class MBBEBLGELAP;
namespace RPG::GameCore { class BattleEventConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace System { class Object; }

#define FNGAIKFIAAE_CTOR_OFFSET UNITYSDK_OFFSET(0x167E1160)

inline static constexpr unsigned int FNGAIKFIAAE_TypeDefinitionIndex = 58117;

	class FNGAIKFIAAE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x10
		::RPG::GameCore::GameEntity* JFEANHJCLAA; // 0x18
		::MBBEBLGELAP* JBOIBJCAMCN; // 0x20
		::System::Object* FGNHFJHBPIM; // 0x28
		::RPG::GameCore::GameEntity* DICKLIFEALI; // 0x30
		::RPG::GameCore::StageRow* EAEJMOGDAEC; // 0x38
		::RPG::GameCore::BattleEventConfig* COKHBDEGLIA; // 0x40
		::RPG::GameCore::FixPoint AIFOJKHJLDD; // 0x48
		::System::Boolean FMOOJHANGAJ; // 0x50
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint JCDBMGGLNIB; // 0x58
		::System::UInt32 DFEJABODPGM; // 0x60
		::RPG::GameCore::BattleEventCreateType BIGMDKMFENB; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGAIKFIAAE_CTOR_OFFSET))(this);
		}

	};
