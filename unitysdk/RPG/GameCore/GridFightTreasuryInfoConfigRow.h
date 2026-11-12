#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTreasuryInfoConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTTREASURYINFOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95C460)
#define RPG_GAMECORE_GRIDFIGHTTREASURYINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E95C240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTreasuryInfoConfigRow_TypeDefinitionIndex = 13501;

	class GridFightTreasuryInfoConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TreasuryTitle; // 0x18
		::System::Int32 RefreshMaxNum; // 0x28
		::System::UInt32 RefreshCost; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTREASURYINFOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTreasuryInfoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTreasuryInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTREASURYINFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
