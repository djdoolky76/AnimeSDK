#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class AFOAMOJGBFC;

#define GCCABICIFBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C217F50)
#define GCCABICIFBN_GHHOOCLEENA_OFFSET UNITYSDK_OFFSET(0x1C217F10)

inline static constexpr unsigned int GCCABICIFBN_TypeDefinitionIndex = 43475;

	class GCCABICIFBN : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell IDALAPNIBNC; // 0x10
		::AFOAMOJGBFC* CEOOOMFMKFO; // 0x30
		::System::Single IJDBBLIFBMM; // 0x38
		::UnityEngine::Vector2Int EOICNLEGJKN; // 0x3C
		::UnityEngine::Vector3Int BBFOLEOPPPL; // 0x44
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation KCCKBDKEMDC; // 0x50
		::UnityEngine::Vector3Int NHJHOGFKNNA; // 0x54
		::RPG::Client::LittleGame::ETimelineControlGameLevelFloor MIAFMBHCMOG; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCABICIFBN_CTOR_OFFSET))(this);
		}

		::System::Boolean GHHOOCLEENA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCABICIFBN_GHHOOCLEENA_OFFSET))(this);
		}

	};
