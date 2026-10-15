#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DimensionIncrementsConfig; }

#define RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6167D0)
#define RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6166E0)

namespace RPG::GameCore
{
	class DimensionIncrementsConfig : public ::System::Object
	{
	public:
		::System::UInt32 Increments; // 0x10
		::System::UInt32 DimensionID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DimensionIncrementsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DimensionIncrementsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
