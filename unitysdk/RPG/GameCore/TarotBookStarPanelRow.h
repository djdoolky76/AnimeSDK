#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookStarPanelRow; }
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKSTARPANELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB49EB0)
#define RPG_GAMECORE_TAROTBOOKSTARPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB49DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookStarPanelRow_TypeDefinitionIndex = 15240;

	class TarotBookStarPanelRow : public ::System::Object
	{
	public:
		::System::String* LockedImgPath; // 0x10
		::System::UInt32 Position; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKSTARPANELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookStarPanelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookStarPanelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKSTARPANELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
