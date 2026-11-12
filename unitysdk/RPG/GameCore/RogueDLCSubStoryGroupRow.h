#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCSubStoryGroupRow; }

#define RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC0FFA0)
#define RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC0FD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCSubStoryGroupRow_TypeDefinitionIndex = 14953;

	class RogueDLCSubStoryGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SubStoryList; // 0x10
		::RPG::Client::TextID SubStoryGroupName; // 0x18
		::System::UInt32 ShowGroup; // 0x28
		::System::UInt32 UnlockSubStoryGroup; // 0x2C
		::System::UInt32 UnlockID; // 0x30
		::System::UInt32 SubStoryGroupID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCSubStoryGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCSubStoryGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
