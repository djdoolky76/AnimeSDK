#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanPuzzleBoard.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDDD7210)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDDD5E40)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_JPGMDHIEFFB_OFFSET UNITYSDK_OFFSET(0xDDD70C0)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDDD71B0)

namespace RPG::Client::Prop
{
	class WaterLevelPuzzleBoard : public ::RPG::Client::Prop::BoxmanPuzzleBoard
	{
	public:
		::System::Single GridHeight; // 0x130
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Boolean JPGMDHIEFFB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_JPGMDHIEFFB_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

	};
}
