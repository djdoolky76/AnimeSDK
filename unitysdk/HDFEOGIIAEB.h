#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class InventoryModule; }

#define HDFEOGIIAEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C63B0)
#define HDFEOGIIAEB_EMLGPKHMCAA_OFFSET UNITYSDK_OFFSET(0x1B7C63C0)

inline static constexpr unsigned int HDFEOGIIAEB_TypeDefinitionIndex = 76969;

	class HDFEOGIIAEB : public ::System::Object
	{
	public:
		::RPG::Client::InventoryModule* COLDADJMPBM; // 0x10
		::System::UInt32 AHINLNKPBNC; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::InventoryModule* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::InventoryModule*))((::PBYTE)hIl2Cpp + HDFEOGIIAEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 EMLGPKHMCAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFEOGIIAEB_EMLGPKHMCAA_OFFSET))(this);
		}

	};
