#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPUZZLEDATA_CHENLINGGAMEBOYSTATISTICS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D885450)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPUZZLEDATA_CHENLINGGAMEBOYSTATISTICS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8854A0)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoyPuzzleData_ChenLingGameBoyStatistics_TypeDefinitionIndex = 76951;

	class ChenLingGameBoyPuzzleData_ChenLingGameBoyStatistics : public ::System::Object
	{
	public:
		::System::String* SerialNumber; // 0x10
		::System::String* TotalActionCount; // 0x18
		::System::UInt32 DeadCount; // 0x20
		::System::Single TimeStart; // 0x24
		::System::UInt32 ResetCount; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPUZZLEDATA_CHENLINGGAMEBOYSTATISTICS_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPUZZLEDATA_CHENLINGGAMEBOYSTATISTICS_CLEAR_OFFSET))(this);
		}

	};
}
