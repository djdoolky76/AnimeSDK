#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenOutfitRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E576B50)
#define RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E576910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenOutfitRow_TypeDefinitionIndex = 11720;

	class ActivityHipplenOutfitRow : public ::System::Object
	{
	public:
		::System::String* ColorName; // 0x10
		::RPG::GameCore::HipplenOutfitType Type; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::System::UInt32 MaterialID; // 0x20
		::System::UInt32 PartID; // 0x24
		::System::Boolean IsDefault; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenOutfitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenOutfitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
