#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionBuffRow; }

#define RPG_GAMECORE_STAGEINVASIONBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1990)
#define RPG_GAMECORE_STAGEINVASIONBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAE1030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionBuffRow_TypeDefinitionIndex = 15155;

	class StageInvasionBuffRow : public ::System::Object
	{
	public:
		::System::UInt32 MazeBuffID; // 0x10
		::System::UInt32 InvasionID; // 0x14
		::RPG::Client::TextID InvasionDesc; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageInvasionBuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageInvasionBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
