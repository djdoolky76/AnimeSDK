#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define DHAJHKFGEIB_CTOR_OFFSET UNITYSDK_OFFSET(0xF4350F0)

inline static constexpr unsigned int DHAJHKFGEIB_TypeDefinitionIndex = 56762;

	class DHAJHKFGEIB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::StageInvasionMonsterState MEPFOEEGBEA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAJHKFGEIB_CTOR_OFFSET))(this);
		}

	};
