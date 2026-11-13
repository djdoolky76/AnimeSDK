#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EDCEPLBIKIN_CTOR_OFFSET UNITYSDK_OFFSET(0x186B2B20)

inline static constexpr unsigned int EDCEPLBIKIN_TypeDefinitionIndex = 54832;

	class EDCEPLBIKIN : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DCLGGMAEMAO; // 0x10
		::System::Object* MGBHBDKCGJE; // 0x18
		::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x20
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x28
		::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x30
		::System::UInt32 DFEJABODPGM; // 0x34
		::RPG::GameCore::FixPoint EPFPKBLIIOI; // 0x38
		::RPG::GameCore::FixVec3 PECPBEOHOJC; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCEPLBIKIN_CTOR_OFFSET))(this);
		}

	};
