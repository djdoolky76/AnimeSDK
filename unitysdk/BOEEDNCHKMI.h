#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMBPFFMCJDF.h"
#include "unitysdk/System/Object.h"
class IHPDAAPJNBB;
namespace RPG::Client { class RechargeShopModule; }

#define BOEEDNCHKMI_CTOR_OFFSET UNITYSDK_OFFSET(0xC18EF70)
#define BOEEDNCHKMI_DGOIGEGMDBG_OFFSET UNITYSDK_OFFSET(0xC18EFC0)

inline static constexpr unsigned int BOEEDNCHKMI_TypeDefinitionIndex = 66790;

	class BOEEDNCHKMI : public ::System::Object
	{
	public:
		::RPG::Client::RechargeShopModule* OJMMJIALPON; // 0x10
		::System::Void _ctor(::RPG::Client::RechargeShopModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeShopModule*))((::PBYTE)hIl2Cpp + BOEEDNCHKMI_CTOR_OFFSET))(this, a1);
		}

		::IHPDAAPJNBB* DGOIGEGMDBG(::IMBPFFMCJDF a1)
		{
			return ((::IHPDAAPJNBB*(*)(::PVOID, ::IMBPFFMCJDF))((::PBYTE)hIl2Cpp + BOEEDNCHKMI_DGOIGEGMDBG_OFFSET))(this, a1);
		}

	};
