#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NavMapTabRow; }

#define RPG_GAMECORE_NAVMAPTABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4988C0)
#define RPG_GAMECORE_NAVMAPTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E498110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavMapTabRow_TypeDefinitionIndex = 14159;

	class NavMapTabRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::RPG::Client::TextID Desc; // 0x20
		::System::UInt32 WorldID; // 0x30
		::System::UInt32 MenuIconID; // 0x34
		::RPG::GameCore::MapSpaceType MapSpaceType; // 0x38
		::System::UInt32 SortID; // 0x3C
		::System::UInt32 ID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::NavMapTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
