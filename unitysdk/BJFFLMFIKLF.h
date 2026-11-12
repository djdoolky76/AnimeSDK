#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfWaiterState.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/System/Object.h"

#define BJFFLMFIKLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3BD40)

inline static constexpr unsigned int BJFFLMFIKLF_TypeDefinitionIndex = 43095;

	class BJFFLMFIKLF : public ::System::Object
	{
	public:
		::System::UInt32 FDOELDMEBPE; // 0x10
		::RPG::GameCore::RestaurantEmployeeType BDOOPGOGLOG; // 0x14
		::System::UInt32 LLDCHLHNADA; // 0x18
		::System::UInt32 DFEJABODPGM; // 0x1C
		::System::Int32 LIFCCHHKLGP; // 0x20
		::System::Int32 MGKKICFOJFA; // 0x24
		::RPG::GameCore::ElfWaiterState EMNBFHECDPG; // 0x28
		::System::Boolean CDFLBJGENDB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFFLMFIKLF_CTOR_OFFSET))(this);
		}

	};
