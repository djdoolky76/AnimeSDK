#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class InventoryModule; }

#define FNKAOBAOEON_CTOR_OFFSET UNITYSDK_OFFSET(0x15875240)
#define FNKAOBAOEON_EMLGPKHMCAA_OFFSET UNITYSDK_OFFSET(0x15875250)

inline static constexpr unsigned int FNKAOBAOEON_TypeDefinitionIndex = 74945;

	class FNKAOBAOEON : public ::System::Object
	{
	public:
		::RPG::Client::InventoryModule* COLDADJMPBM; // 0x10
		::System::UInt32 AHINLNKPBNC; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::InventoryModule* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::InventoryModule*))((::PBYTE)hIl2Cpp + FNKAOBAOEON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 EMLGPKHMCAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKAOBAOEON_EMLGPKHMCAA_OFFSET))(this);
		}

	};
