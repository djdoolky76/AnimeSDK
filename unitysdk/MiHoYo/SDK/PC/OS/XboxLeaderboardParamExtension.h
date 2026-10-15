#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXLEADERBOARDPARAMEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF42910)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxLeaderboardParamExtension_TypeDefinitionIndex = 8673;

	class XboxLeaderboardParamExtension : public ::System::Object
	{
	public:
		::System::String* statName; // 0x10
		::System::Int32 queryType; // 0x18
		::System::Int32 maxItems; // 0x1C
		::System::Int32 socialGroup; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 skipToRank; // 0x28
		::System::String* skipToXuid; // 0x30
		::System::Int32 sortOrder; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXLEADERBOARDPARAMEXTENSION_CTOR_OFFSET))(this);
		}

	};
}
