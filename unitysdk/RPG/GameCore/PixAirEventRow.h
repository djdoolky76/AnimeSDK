#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEventRow; }

#define RPG_GAMECORE_PIXAIREVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91BFB0)
#define RPG_GAMECORE_PIXAIREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91BE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEventRow_TypeDefinitionIndex = 12149;

	class PixAirEventRow : public ::System::Object
	{
	public:
		::System::UInt32 ContentID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EventDesc; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
