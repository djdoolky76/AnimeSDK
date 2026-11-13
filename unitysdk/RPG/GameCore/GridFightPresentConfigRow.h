#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPresentShortenType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPresentConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA59BA0)
#define RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA59900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPresentConfigRow_TypeDefinitionIndex = 13499;

	class GridFightPresentConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PresentName; // 0x10
		::System::UInt32 BonusID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PresentDesc; // 0x28
		::System::UInt32 ID; // 0x38
		::RPG::GameCore::GridFightPresentShortenType ShortenType; // 0x3C
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
