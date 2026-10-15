#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCLGKGNNJOA.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int VolumeComponentTransition_1_TypeDefinitionIndex = 74035;

	template <typename T>
	class VolumeComponentTransition_1 : public ::FCLGKGNNJOA
	{
	public:
		T _Last; // 0x0
		T _Target; // 0x0
		T _Result; // 0x0
		::System::Single InterpTimestamp; // 0x0
		::System::Single InterpTime; // 0x0
		::System::Boolean _Dirty; // 0x0
		::System::Single _LastInterpFactor; // 0x0
	};
}
