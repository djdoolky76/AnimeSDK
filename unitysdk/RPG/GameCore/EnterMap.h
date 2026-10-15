#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EnterMap; }

#define RPG_GAMECORE_ENTERMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D644E40)
#define RPG_GAMECORE_ENTERMAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D644E50)
#define RPG_GAMECORE_ENTERMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D644E10)

namespace RPG::GameCore
{
	class EnterMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EntranceID; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 AnchorID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* DynamicEntranceID; // 0x28
		::RPG::GameCore::DynamicFloat* DynamicGroupID; // 0x30
		::RPG::GameCore::DynamicFloat* DynamicAnchorID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
