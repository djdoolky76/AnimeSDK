#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InfiniteWavePosition.h"
#include "unitysdk/System/Object.h"

#define CDFIPACKDAC_GKMAFBLJNLB_CTOR_OFFSET UNITYSDK_OFFSET(0xD0CFB50)

inline static constexpr unsigned int CDFIPACKDAC_GKMAFBLJNLB_TypeDefinitionIndex = 56299;

	class CDFIPACKDAC_GKMAFBLJNLB : public ::System::Object
	{
	public:
		::System::UInt32 DBLDCKODNEN; // 0x10
		::RPG::GameCore::InfiniteWavePosition KHFIELCFHHJ; // 0x14
		::System::UInt32 PKEKFAHEPAL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDFIPACKDAC_GKMAFBLJNLB_CTOR_OFFSET))(this);
		}

	};
