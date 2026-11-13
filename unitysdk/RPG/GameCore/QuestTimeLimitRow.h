#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class QuestTimeLimitRow; }
namespace System { class String; }

#define RPG_GAMECORE_QUESTTIMELIMITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F21E1B0)
#define RPG_GAMECORE_QUESTTIMELIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F21D9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestTimeLimitRow_TypeDefinitionIndex = 12371;

	class QuestTimeLimitRow : public ::System::Object
	{
	public:
		::System::String* GuideImgPath; // 0x10
		::System::String* FigurePath; // 0x18
		::System::UInt32 GuideVideoID; // 0x20
		::System::UInt32 QuestID; // 0x24
		::RPG::Client::TextID GuideDesc; // 0x28
		::System::UInt32 WorldID; // 0x38
		::System::UInt32 UnlockData; // 0x3C
		::RPG::Client::TextID BGDesc; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::QuestTimeLimitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QuestTimeLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
