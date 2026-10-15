#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMBPFFMCJDF.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client { class RechargeShopModule; }

#define HMHFCDLJFLD_CTOR_OFFSET UNITYSDK_OFFSET(0x15D82320)
#define HMHFCDLJFLD_PFKOENKLFON_OFFSET UNITYSDK_OFFSET(0x15D823A0)

inline static constexpr unsigned int HMHFCDLJFLD_TypeDefinitionIndex = 66789;

	class HMHFCDLJFLD : public ::System::Object
	{
	public:
		::RPG::Client::RechargeShopModule* OJMMJIALPON; // 0x10
		::IMBPFFMCJDF NBPDDKIBKNI; // 0x18
		::System::Void _ctor(::RPG::Client::RechargeShopModule* a1, ::IMBPFFMCJDF a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeShopModule*, ::IMBPFFMCJDF))((::PBYTE)hIl2Cpp + HMHFCDLJFLD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RechargeGiftData* PFKOENKLFON()
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHFCDLJFLD_PFKOENKLFON_OFFSET))(this);
		}

	};
