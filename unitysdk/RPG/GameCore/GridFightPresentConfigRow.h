#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPresentShortenType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPresentConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94BE30)
#define RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E94BB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPresentConfigRow_TypeDefinitionIndex = 13499;

	class GridFightPresentConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightPresentShortenType ShortenType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PresentDesc; // 0x18
		::System::UInt32 BonusID; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID PresentName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPresentConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPresentConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
