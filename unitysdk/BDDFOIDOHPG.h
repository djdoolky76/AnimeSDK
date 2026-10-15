#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRoundType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FateRoundInfoItem; }

#define BDDFOIDOHPG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x162F1E40)
#define BDDFOIDOHPG_CEJDFOKPHKC_OFFSET UNITYSDK_OFFSET(0x162F1EE0)
#define BDDFOIDOHPG_CTOR_OFFSET UNITYSDK_OFFSET(0x162F1E30)

	class BDDFOIDOHPG : public ::System::Object
	{
	public:
		::System::UInt32 MIAPFDLEOLF; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDDFOIDOHPG_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::FateRoundInfoItem* BPLPBPMEODA(::System::UInt32 a1, ::RPG::GameCore::FateRoundType a2)
		{
			return ((::RPG::Client::FateRoundInfoItem*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FateRoundType))((::PBYTE)hIl2Cpp + BDDFOIDOHPG_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		::System::Boolean CEJDFOKPHKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDFOIDOHPG_CEJDFOKPHKC_OFFSET))(this);
		}

	};
