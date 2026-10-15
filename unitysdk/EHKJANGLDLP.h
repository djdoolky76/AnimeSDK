#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
class EHKJANGLDLP;
namespace RPG::Client { class PlanetFesFloatingController; }

#define EHKJANGLDLP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154AE1C0)
#define EHKJANGLDLP_CTOR_OFFSET UNITYSDK_OFFSET(0x154AE2B0)
#define EHKJANGLDLP_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x154AE250)

inline static constexpr unsigned int EHKJANGLDLP_TypeDefinitionIndex = 74464;

	class EHKJANGLDLP : public ::MFDDEJCPLON
	{
	public:
		::System::Int32 OBOMNIHKHMM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKJANGLDLP_CTOR_OFFSET))(this);
		}

		static ::EHKJANGLDLP* BPLPBPMEODA(::RPG::Client::PlanetFesFloatingController* a1, ::System::Int32 a2)
		{
			return ((::EHKJANGLDLP*(*)(::RPG::Client::PlanetFesFloatingController*, ::System::Int32))((::PBYTE)hIl2Cpp + EHKJANGLDLP_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKJANGLDLP_ONEXECUTE_OFFSET))(this);
		}

	};
