#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int DBHHLOMCPDO_TypeDefinitionIndex = 43602;

	struct alignas(4) DBHHLOMCPDO
	{
		::System::UInt32 ELIKBBICPDP; // 0x10
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x14
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x20
		::System::Boolean LANINAGECEO; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::Move::MoveState ODKFODPEPNC; // 0x34
		::System::Single LOJGGELAEAP; // 0x38
		::System::Single LHHIFOGBFEH; // 0x3C
		::System::Single AEAAPEAOINE; // 0x40
		::System::Boolean JCPABGECHJK; // 0x44
	};
