#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace CriWare::CriMana { class FrameInfo; }

#define RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDF62880)
#define RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0xDF62770)

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPlayerFrameInfo_TypeDefinitionIndex = 75315;

	class ManaVideoPlayerFrameInfo : public ::System::Object
	{
	public:
		::System::Int32 Frame; // 0x10
		::System::Single FullTime; // 0x14
		::System::UInt32 FullFrame; // 0x18
		::System::Single Time; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO_CTOR_OFFSET))(this);
		}

		::System::Void UpdateInfo(::CriWare::CriMana::FrameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::FrameInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO_UPDATEINFO_OFFSET))(this, a1);
		}

	};
}
