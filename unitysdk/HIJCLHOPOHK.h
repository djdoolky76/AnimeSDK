#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace RPG::Client::LittleGame { class TimelineControlGameWorldLevelGrid; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HIJCLHOPOHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACC200)

	class HIJCLHOPOHK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* LAJIJGBJPIL; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* NFFAFANBNGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLHOPOHK_CTOR_OFFSET))(this);
		}

	};
