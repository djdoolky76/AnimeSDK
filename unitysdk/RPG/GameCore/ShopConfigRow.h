#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/RPG/GameCore/ShopMainType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShopConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_SHOPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECE5150)
#define RPG_GAMECORE_SHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ECE4210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopConfigRow_TypeDefinitionIndex = 15256;

	class ShopConfigRow : public ::System::Object
	{
	public:
		::System::String* ShopIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* LimitValue2List; // 0x18
		::Il2CppArray<::System::UInt32>* LimitValue1List; // 0x20
		::System::String* ShopBar; // 0x28
		::System::UInt32 ShopGroupID; // 0x30
		::System::UInt32 ShopID; // 0x34
		::System::UInt32 ScheduleDataID; // 0x38
		::System::UInt32 ActivityModuleID; // 0x3C
		::RPG::Client::TextID ShopDesc; // 0x40
		::RPG::Client::TextID ShopName; // 0x50
		::System::Boolean HideRemainTime; // 0x60
		::System::Boolean IsOpen; // 0x61
		::System::Boolean ServerVerification; // 0x62
		::System::Byte _padding0[0x1];
		::System::UInt32 ShopType; // 0x64
		::RPG::GameCore::LimitType LimitType2; // 0x68
		::RPG::GameCore::LimitType LimitType1; // 0x6C
		::RPG::GameCore::ShopMainType ShopMainType; // 0x70
		::System::UInt32 ShopSortID; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShopConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShopConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
