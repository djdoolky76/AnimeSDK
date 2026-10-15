#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEQUATERNIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA06AC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEQUATERNIONDATA_LERP_OFFSET UNITYSDK_OFFSET(0x1CA069D0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerFrameQuaternionData_TypeDefinitionIndex = 43589;

	class PhantomPlayerFrameQuaternionData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEQUATERNIONDATA_CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEQUATERNIONDATA_LERP_OFFSET))(this, a1, a2, a3);
		}

	};
}
