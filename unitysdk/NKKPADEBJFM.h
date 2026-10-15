#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
class CLFIGBPHLHI;
class NKKPADEBJFM;
namespace RPG::Client { class MatchThreeBoard; }

#define NKKPADEBJFM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC39940)
#define NKKPADEBJFM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC39C50)
#define NKKPADEBJFM_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xBC39B40)
#define NKKPADEBJFM_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xBC39C00)
#define NKKPADEBJFM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBC399C0)

inline static constexpr unsigned int NKKPADEBJFM_TypeDefinitionIndex = 65855;

	class NKKPADEBJFM : public ::FNIDIOCNBBI
	{
	public:
		::CLFIGBPHLHI* GCFJDABCFGK; // 0x28
		::System::Single GAFENHHEBPG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKPADEBJFM_CTOR_OFFSET))(this);
		}

		static ::NKKPADEBJFM* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::NKKPADEBJFM*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + NKKPADEBJFM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKPADEBJFM_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKPADEBJFM_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKPADEBJFM_LGAOOKPFIMF_OFFSET))(this);
		}

	};
