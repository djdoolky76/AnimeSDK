#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEMOVEANIMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE4EE700)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleMoveAnimData_TypeDefinitionIndex = 68036;

	class PenaconyEndmostChronicleMoveAnimData : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::UnityEngine::Vector2 Offset; // 0x14
		::System::Single Time; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEMOVEANIMDATA_CTOR_OFFSET))(this);
		}

	};
}
