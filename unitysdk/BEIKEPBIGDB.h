#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/PoolClosedReason.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FeatureSwitchModule; }

#define BEIKEPBIGDB_CTOR_OFFSET UNITYSDK_OFFSET(0x16324840)
#define BEIKEPBIGDB_EMMPCNEIFGM_OFFSET UNITYSDK_OFFSET(0x163248C0)

inline static constexpr unsigned int BEIKEPBIGDB_TypeDefinitionIndex = 74920;

	class BEIKEPBIGDB : public ::System::Object
	{
	public:
		::RPG::Client::FeatureSwitchModule* OOBAFGIEEPM; // 0x10
		::System::UInt32 EOCOOIELJPE; // 0x18
		::System::Void _ctor(::RPG::Client::FeatureSwitchModule* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FeatureSwitchModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + BEIKEPBIGDB_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BlindBox::Pool::PoolClosedReason EMMPCNEIFGM()
		{
			return ((::RPG::Client::BlindBox::Pool::PoolClosedReason(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIKEPBIGDB_EMMPCNEIFGM_OFFSET))(this);
		}

	};
