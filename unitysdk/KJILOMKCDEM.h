#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJCHNOIBJCA;
class ILFKNNIICNO;
class LLMNADLMHPJ;

#define KJILOMKCDEM_AOBFMDIKHAK_OFFSET UNITYSDK_OFFSET(0xB459740)
#define KJILOMKCDEM_BNGOKIIEKEN_OFFSET UNITYSDK_OFFSET(0xB458DD0)
#define KJILOMKCDEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB458D10)
#define KJILOMKCDEM_FADJHKEOGGC_OFFSET UNITYSDK_OFFSET(0xB459930)
#define KJILOMKCDEM_GPCJFILKOPJ_OFFSET UNITYSDK_OFFSET(0xB459890)
#define KJILOMKCDEM_HMLBFAGEFNK_OFFSET UNITYSDK_OFFSET(0xB458FD0)
#define KJILOMKCDEM_NKNINKCDLGL_OFFSET UNITYSDK_OFFSET(0xB459140)

inline static constexpr unsigned int KJILOMKCDEM_TypeDefinitionIndex = 66728;

	class KJILOMKCDEM : public ::System::Object
	{
	public:
		::LLMNADLMHPJ* EEFMDEHLLFI; // 0x10
		::HJCHNOIBJCA* MEGLBLIJGCF; // 0x18
		::ILFKNNIICNO* EDLDCGGEPFG; // 0x20
		::System::Void _ctor(::LLMNADLMHPJ* a1, ::HJCHNOIBJCA* a2, ::ILFKNNIICNO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LLMNADLMHPJ*, ::HJCHNOIBJCA*, ::ILFKNNIICNO*))((::PBYTE)hIl2Cpp + KJILOMKCDEM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BNGOKIIEKEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJILOMKCDEM_BNGOKIIEKEN_OFFSET))(this);
		}

		::System::Void HMLBFAGEFNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJILOMKCDEM_HMLBFAGEFNK_OFFSET))(this, a1);
		}

		::System::Boolean NKNINKCDLGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJILOMKCDEM_NKNINKCDLGL_OFFSET))(this);
		}

		::System::Boolean AOBFMDIKHAK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJILOMKCDEM_AOBFMDIKHAK_OFFSET))(this, a1);
		}

		::System::Void GPCJFILKOPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJILOMKCDEM_GPCJFILKOPJ_OFFSET))(this);
		}

		::System::Void FADJHKEOGGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJILOMKCDEM_FADJHKEOGGC_OFFSET))(this);
		}

	};
