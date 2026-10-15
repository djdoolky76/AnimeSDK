#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyClickContentConfigRow; }

#define RPG_GAMECORE_MONOPOLYCLICKCONTENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89D380)
#define RPG_GAMECORE_MONOPOLYCLICKCONTENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D89D260)

namespace RPG::GameCore
{
	class MonopolyClickContentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ClickNum; // 0x10
		::System::UInt32 ID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCLICKCONTENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyClickContentConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyClickContentConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCLICKCONTENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
