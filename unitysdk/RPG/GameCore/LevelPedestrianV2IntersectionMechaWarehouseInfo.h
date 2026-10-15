#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionMechaWarehouseInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C7D30)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C7D40)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C88D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionMechaWarehouseInfo_TypeDefinitionIndex = 17302;

	class LevelPedestrianV2IntersectionMechaWarehouseInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::String* BindFloorSignName; // 0x50
		::System::String* BindFenceSignName; // 0x58
		::System::String* MechaWarehouseBlockAlias; // 0x60
		::System::String* MechaWarehousePrefabAlias; // 0x68
		::System::String* FollowAttachPointName; // 0x70
		::System::Boolean IsInbound; // 0x78
		::System::Byte _padding0[0x3];
		::System::Int32 MechaWarehouseRoadIndex; // 0x7C
		::System::Int32 EmitSpeed; // 0x80
		::System::Byte _padding1[0x4];
		::System::String* DynamicEmitSpeedBindFSVName; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
