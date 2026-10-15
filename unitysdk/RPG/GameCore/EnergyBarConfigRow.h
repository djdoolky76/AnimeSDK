#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnergyBarConfigRow; }

#define RPG_GAMECORE_ENERGYBARCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D615390)
#define RPG_GAMECORE_ENERGYBARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D614D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnergyBarConfigRow_TypeDefinitionIndex = 13227;

	class EnergyBarConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 EnergyBarID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EnergyBarDesc; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnergyBarConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnergyBarConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
