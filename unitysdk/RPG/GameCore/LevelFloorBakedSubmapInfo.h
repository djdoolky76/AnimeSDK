#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LevelFloorBakedSubmapInfo; }

#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77F060)
#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D77EDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorBakedSubmapInfo_TypeDefinitionIndex = 17164;

	class LevelFloorBakedSubmapInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubmapID; // 0x10
		::RPG::GameCore::MinimapAreaType Type; // 0x14
		::System::UInt32 AreaID; // 0x18
		::System::Int32 DefaultLayer; // 0x1C
		::System::UInt32 NearbyTeleportMappingInfoID; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LevelEntityRef*>* FiveDimInstances; // 0x28
		::System::UInt32 ParentSubmapID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelFloorBakedSubmapInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelFloorBakedSubmapInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
