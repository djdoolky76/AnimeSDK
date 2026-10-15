#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LodDetail; }

#define RPG_GAMECORE_LODDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F2F20)
#define RPG_GAMECORE_LODDETAIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F2F30)
#define RPG_GAMECORE_LODDETAIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F2C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LodDetail_TypeDefinitionIndex = 19197;

	class LodDetail : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 Lod; // 0x10
		::System::Single Percent; // 0x14
		::System::UInt16 Quality; // 0x18
		::System::Byte _padding0[0x6];
		::System::UInt64 QualityAdjustments; // 0x20
		::System::Boolean HLOD; // 0x28
		::System::Boolean DitherSwitch; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODDETAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODDETAIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODDETAIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
