#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PingPongDropItemType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongDropItemInfo; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGDROPITEMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D915690)
#define RPG_GAMECORE_PINGPONGDROPITEMINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9154F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongDropItemInfo_TypeDefinitionIndex = 16989;

	class PingPongDropItemInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PingPongDropItemType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* PrefabPath; // 0x18
		::System::Int32 DropWeight; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGDROPITEMINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongDropItemInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongDropItemInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGDROPITEMINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
