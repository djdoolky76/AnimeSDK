#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiniMapIconOrientationType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiniMapIconRow; }
namespace System { class String; }

#define RPG_GAMECORE_MINIMAPICONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E7C20)
#define RPG_GAMECORE_MINIMAPICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6E71E0)
#define RPG_GAMECORE_MINIMAPICONROW_GETCONNECTICONPATH_OFFSET UNITYSDK_OFFSET(0x1E6E7C30)
#define RPG_GAMECORE_MINIMAPICONROW_GETCONNECTMISSIONICONPATH_OFFSET UNITYSDK_OFFSET(0x1E6E7C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniMapIconRow_TypeDefinitionIndex = 12616;

	class MiniMapIconRow : public ::System::Object
	{
	public:
		::System::String* MissionIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* FiveDimBillboardIDList; // 0x20
		::System::String* IconName; // 0x28
		::System::UInt32 ModelIcon; // 0x30
		::System::Boolean IsFollowPropScale; // 0x34
		::System::Boolean IsCrossLayer; // 0x35
		::System::Boolean IsShowInBillboard; // 0x36
		::System::Boolean isShowinMap; // 0x37
		::System::UInt32 ID; // 0x38
		::System::UInt32 CircleRange; // 0x3C
		::System::Boolean IsFollowMapScale; // 0x40
		::System::Boolean IsShowCornerArrow; // 0x41
		::System::Byte _padding0[0x2];
		::RPG::GameCore::MiniMapIconOrientationType IconOrientetionSwitch; // 0x44
		::System::UInt32 BillboardIcon; // 0x48
		::System::UInt32 Priority; // 0x4C
		::System::UInt32 ConnectID; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniMapIconRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniMapIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::String* GetConnectIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_GETCONNECTICONPATH_OFFSET))(this);
		}

		::System::String* GetConnectMissionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_GETCONNECTMISSIONICONPATH_OFFSET))(this);
		}

	};
}
