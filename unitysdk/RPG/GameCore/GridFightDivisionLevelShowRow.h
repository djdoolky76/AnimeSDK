#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDivisionLevelShowRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FBEA0)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6FBAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDivisionLevelShowRow_TypeDefinitionIndex = 13607;

	class GridFightDivisionLevelShowRow : public ::System::Object
	{
	public:
		::System::String* DivisionIcon; // 0x10
		::System::String* DivisionShowPic; // 0x18
		::System::UInt32 DivisionSPRewardQuest; // 0x20
		::System::UInt32 DivisionLevel; // 0x24
		::System::UInt32 DivisionRewardQuest; // 0x28
		::System::UInt32 SeasonID; // 0x2C
		::RPG::Client::TextID DivisionNameWithNum; // 0x30
		::RPG::Client::TextID DivisionAbbr; // 0x40
		::RPG::Client::TextID DivisionName; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDivisionLevelShowRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDivisionLevelShowRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
