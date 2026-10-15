#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildProtductType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class EFCGFNDLBGK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildShopRow; }
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDSHOPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D686430)
#define RPG_GAMECORE_EVOLVEBUILDSHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D685E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildShopRow_TypeDefinitionIndex = 11425;

	class EvolveBuildShopRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* ItemBackground; // 0x18
		::System::String* ItemIcon; // 0x20
		::Il2CppArray<::EFCGFNDLBGK*>* PriceList; // 0x28
		::RPG::GameCore::EvolveBuildSeason Season; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID Category; // 0x38
		::RPG::Client::TextID TotalBuff; // 0x48
		::System::UInt32 MazeBuffID; // 0x58
		::System::UInt32 LvMax; // 0x5C
		::RPG::GameCore::EvolveBuildProtductType ShopType; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x68
		::RPG::Client::TextID BuffTextFormat; // 0x78
		::RPG::Client::TextID ShopDesc; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSHOPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildShopRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildShopRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSHOPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
