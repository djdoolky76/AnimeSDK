#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSummonBEOverrideConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSUMMONBEOVERRIDECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D745C90)
#define RPG_GAMECORE_GRIDFIGHTSUMMONBEOVERRIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D745AD0)

namespace RPG::GameCore
{
	class GridFightSummonBEOverrideConfigRow : public ::System::Object
	{
	public:
		::System::String* FrontJsonOverride; // 0x10
		::System::String* BackJsonOverride; // 0x18
		::System::UInt32 SeasonID; // 0x20
		::System::UInt32 BEID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSUMMONBEOVERRIDECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSummonBEOverrideConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSummonBEOverrideConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSUMMONBEOVERRIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
