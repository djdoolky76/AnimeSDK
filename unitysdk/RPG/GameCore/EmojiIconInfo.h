#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EmojiIconInfo; }
namespace System { class String; }

#define RPG_GAMECORE_EMOJIICONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63DC00)
#define RPG_GAMECORE_EMOJIICONINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D63DB30)

namespace RPG::GameCore
{
	class EmojiIconInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IconPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIICONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EmojiIconInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EmojiIconInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIICONINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
