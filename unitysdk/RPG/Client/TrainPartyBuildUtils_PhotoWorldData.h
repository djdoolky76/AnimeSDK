#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildUtils_PhotoWorldData_TypeDefinitionIndex = 68165;

	struct alignas(4) TrainPartyBuildUtils_PhotoWorldData
	{
		::System::UInt32 WorldID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID WorldName; // 0x18
	};
}
