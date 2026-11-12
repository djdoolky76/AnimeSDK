#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
class AIDGIDNPABL;
namespace RPG::Client { class PlanetFesFloatingController; }

#define AIDGIDNPABL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF160380)
#define AIDGIDNPABL_CTOR_OFFSET UNITYSDK_OFFSET(0xF1604C0)
#define AIDGIDNPABL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xF160400)
#define AIDGIDNPABL__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xF1604D0)

inline static constexpr unsigned int AIDGIDNPABL_TypeDefinitionIndex = 76620;

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
