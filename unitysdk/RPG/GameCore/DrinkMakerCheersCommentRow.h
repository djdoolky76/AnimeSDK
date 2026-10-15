#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersCommentRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D61AAD0)
#define RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D61A870)

namespace RPG::GameCore
{
	class DrinkMakerCheersCommentRow : public ::System::Object
	{
	public:
		::System::String* HeadIconPath; // 0x10
		::RPG::Client::TextID Comment; // 0x18
		::System::UInt32 ID; // 0x28
		::System::UInt32 UnlockQuest; // 0x2C
		::System::Boolean IsProtagonist; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerCheersCommentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerCheersCommentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
