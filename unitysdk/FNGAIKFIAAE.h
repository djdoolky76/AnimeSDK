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

#define FNGAIKFIAAE_CTOR_OFFSET UNITYSDK_OFFSET(0x15862C50)

inline static constexpr unsigned int FNGAIKFIAAE_TypeDefinitionIndex = 56893;

	class FNGAIKFIAAE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JFEANHJCLAA; // 0x10
		::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x18
		::RPG::GameCore::StageRow* EAEJMOGDAEC; // 0x20
		::RPG::GameCore::GameEntity* DICKLIFEALI; // 0x28
		::MBBEBLGELAP* JBOIBJCAMCN; // 0x30
		::RPG::GameCore::BattleEventConfig* COKHBDEGLIA; // 0x38
		::System::Object* FGNHFJHBPIM; // 0x40
		::RPG::GameCore::FixPoint JCDBMGGLNIB; // 0x48
		::RPG::GameCore::FixPoint AIFOJKHJLDD; // 0x50
		::RPG::GameCore::BattleEventCreateType BIGMDKMFENB; // 0x58
		::System::Boolean FMOOJHANGAJ; // 0x5C
		::System::Byte _padding0[0x3];
		::System::UInt32 DFEJABODPGM; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGAIKFIAAE_CTOR_OFFSET))(this);
		}

	};
