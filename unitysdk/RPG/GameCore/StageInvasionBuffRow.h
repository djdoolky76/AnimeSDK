#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionBuffRow; }

#define RPG_GAMECORE_STAGEINVASIONBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0F240)
#define RPG_GAMECORE_STAGEINVASIONBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0E8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionBuffRow_TypeDefinitionIndex = 15155;

	class StageInvasionBuffRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID InvasionDesc; // 0x10
		::System::UInt32 MazeBuffID; // 0x20
		::System::UInt32 InvasionID; // 0x24
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
