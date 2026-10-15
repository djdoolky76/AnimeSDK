#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
class AIDGIDNPABL;
namespace RPG::Client { class PlanetFesFloatingController; }

#define AIDGIDNPABL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xEBA0F60)
#define AIDGIDNPABL_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA10A0)
#define AIDGIDNPABL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xEBA0FE0)
#define AIDGIDNPABL__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xEBA10B0)

	class AIDGIDNPABL : public ::MFDDEJCPLON
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDGIDNPABL_CTOR_OFFSET))(this);
		}

		static ::AIDGIDNPABL* BPLPBPMEODA(::RPG::Client::PlanetFesFloatingController* a1)
		{
			return ((::AIDGIDNPABL*(*)(::RPG::Client::PlanetFesFloatingController*))((::PBYTE)hIl2Cpp + AIDGIDNPABL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDGIDNPABL_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnExecute_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDGIDNPABL__ONEXECUTE_B__1_0_OFFSET))(this);
		}

	};
