#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
class CLFIGBPHLHI;
class GJHONIIOJOC;
namespace RPG::Client { class PlanetFesFloatingController; }

#define GJHONIIOJOC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A5E2C0)
#define GJHONIIOJOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A5E5F0)
#define GJHONIIOJOC_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x15A5E4E0)
#define GJHONIIOJOC_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x15A5E5A0)
#define GJHONIIOJOC_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15A5E360)

inline static constexpr unsigned int GJHONIIOJOC_TypeDefinitionIndex = 74464;

	class GJHONIIOJOC : public ::MFDDEJCPLON
	{
	public:
		::CLFIGBPHLHI* GCFJDABCFGK; // 0x28
		::System::Single GAFENHHEBPG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHONIIOJOC_CTOR_OFFSET))(this);
		}

		static ::GJHONIIOJOC* BPLPBPMEODA(::RPG::Client::PlanetFesFloatingController* a1, ::System::Single a2)
		{
			return ((::GJHONIIOJOC*(*)(::RPG::Client::PlanetFesFloatingController*, ::System::Single))((::PBYTE)hIl2Cpp + GJHONIIOJOC_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHONIIOJOC_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHONIIOJOC_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHONIIOJOC_LGAOOKPFIMF_OFFSET))(this);
		}

	};
