#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class AFOAMOJGBFC;

#define GCCABICIFBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA4D7D0)
#define GCCABICIFBN_GHHOOCLEENA_OFFSET UNITYSDK_OFFSET(0x1CA4D790)

inline static constexpr unsigned int GCCABICIFBN_TypeDefinitionIndex = 42500;

	class GCCABICIFBN : public ::System::Object
	{
	public:
		::AFOAMOJGBFC* CEOOOMFMKFO; // 0x10
		::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell IDALAPNIBNC; // 0x18
		::System::Single IJDBBLIFBMM; // 0x38
		::UnityEngine::Vector3Int NHJHOGFKNNA; // 0x3C
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation KCCKBDKEMDC; // 0x48
		::RPG::Client::LittleGame::ETimelineControlGameLevelFloor MIAFMBHCMOG; // 0x4C
		::UnityEngine::Vector3Int BBFOLEOPPPL; // 0x50
		::UnityEngine::Vector2Int EOICNLEGJKN; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCABICIFBN_CTOR_OFFSET))(this);
		}

		::System::Boolean GHHOOCLEENA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCABICIFBN_GHHOOCLEENA_OFFSET))(this);
		}

	};
