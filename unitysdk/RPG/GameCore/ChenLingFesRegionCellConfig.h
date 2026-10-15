#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDirection.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace RPG::GameCore { class ChenLingFesRegionCellConfig; }

#define RPG_GAMECORE_CHENLINGFESREGIONCELLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D562BA0)
#define RPG_GAMECORE_CHENLINGFESREGIONCELLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5629A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesRegionCellConfig_TypeDefinitionIndex = 18442;

	class ChenLingFesRegionCellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ChenLingFesPosition* Position; // 0x18
		::RPG::GameCore::ChenLingFesDirection NextDirection; // 0x20
		::System::Boolean IfUseRotateAngle; // 0x24
		::System::Byte _padding1[0x3];
		::System::UInt32 RotateAngle; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONCELLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesRegionCellConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesRegionCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONCELLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
