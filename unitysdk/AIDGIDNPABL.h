#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
class AIDGIDNPABL;
namespace RPG::Client { class PlanetFesFloatingController; }

#define AIDGIDNPABL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xEB9BD50)
#define AIDGIDNPABL_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9BE90)
#define AIDGIDNPABL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xEB9BDD0)
#define AIDGIDNPABL__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xEB9BEA0)

inline static constexpr unsigned int AIDGIDNPABL_TypeDefinitionIndex = 74471;

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
