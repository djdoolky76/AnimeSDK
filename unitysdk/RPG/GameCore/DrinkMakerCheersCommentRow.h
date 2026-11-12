#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersCommentRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E858A70)
#define RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E858810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersCommentRow_TypeDefinitionIndex = 13283;

	class DrinkMakerCheersCommentRow : public ::System::Object
	{
	public:
		::System::String* HeadIconPath; // 0x10
		::System::UInt32 UnlockQuest; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Comment; // 0x20
		::System::Boolean IsProtagonist; // 0x30
		::System::Byte _padding1[0x3];
		::System::UInt32 ID; // 0x34
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
