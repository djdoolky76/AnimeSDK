#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterMovementConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace RPG::Client::LittleGame { class TimelineControlGameCharacterMovementPath; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define FICDBGIBEOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC31F40)

inline static constexpr unsigned int FICDBGIBEOA_TypeDefinitionIndex = 43467;

	class FICDBGIBEOA : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* JFAKICGOGON; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>* DIKJBMHBCNK; // 0x18
		::UnityEngine::Transform* DICDJJOJKGF; // 0x20
		::UnityEngine::Vector3Int EDLHLKAFDFA; // 0x28
		::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig EABKOHGCHFP; // 0x34
		::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection FFHIEMCJDJJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICDBGIBEOA_CTOR_OFFSET))(this);
		}

	};
