#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNJPHLBBNBC;
namespace RPG::Client { class ConditionChecker; }

#define MCCGEALKBBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB874660)
#define MCCGEALKBBD_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0xB874670)

	class MCCGEALKBBD : public ::System::Object
	{
	public:
		::RPG::Client::ConditionChecker* OLNFAODGPMD; // 0x10
		::System::Void _ctor(::RPG::Client::ConditionChecker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ConditionChecker*))((::PBYTE)hIl2Cpp + MCCGEALKBBD_CTOR_OFFSET))(this, a1);
		}

		::System::Void LNGKNPJIOML(::FNJPHLBBNBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNJPHLBBNBC*))((::PBYTE)hIl2Cpp + MCCGEALKBBD_LNGKNPJIOML_OFFSET))(this, a1);
		}

	};
