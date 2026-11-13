#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityHotTagType.h"
#include "unitysdk/RPG/GameCore/ActivityHotVersionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHotVersionStatRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHOTVERSIONSTATROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E519FB0)
#define RPG_GAMECORE_ACTIVITYHOTVERSIONSTATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E519A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHotVersionStatRow_TypeDefinitionIndex = 11734;

	class ActivityHotVersionStatRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::Il2CppArray<::System::UInt32>* ParamList; // 0x18
		::System::UInt32 ActivityID; // 0x20
		::System::Int32 SortWeight; // 0x24
		::RPG::Client::TextID ItemDes; // 0x28
		::RPG::Client::TextID DesName; // 0x38
		::RPG::GameCore::ActivityHotTagType Tag; // 0x48
		::System::UInt32 ID; // 0x4C
		::RPG::Client::TextID Name; // 0x50
		::RPG::Client::TextID TimeDes; // 0x60
		::System::UInt32 GotoID; // 0x70
		::RPG::GameCore::ActivityHotVersionType Type; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHOTVERSIONSTATROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHotVersionStatRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHotVersionStatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHOTVERSIONSTATROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
