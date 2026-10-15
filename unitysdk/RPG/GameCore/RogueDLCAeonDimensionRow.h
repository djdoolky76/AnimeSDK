#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCAeonDimensionRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B6D00)
#define RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9B6AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonDimensionRow_TypeDefinitionIndex = 14747;

	class RogueDLCAeonDimensionRow : public ::System::Object
	{
	public:
		::System::String* DimensionIcon; // 0x10
		::System::String* AeonIcon; // 0x18
		::System::UInt32 AeonDimensionID; // 0x20
		::System::UInt32 AeonDimensionMaxPoint; // 0x24
		::RPG::Client::TextID PlayShortDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCAeonDimensionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCAeonDimensionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
