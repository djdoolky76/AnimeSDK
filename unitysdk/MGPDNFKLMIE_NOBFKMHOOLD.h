#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define MGPDNFKLMIE_NOBFKMHOOLD_CGJHLBGIPIL_OFFSET UNITYSDK_OFFSET(0x15E2E260)
#define MGPDNFKLMIE_NOBFKMHOOLD_PCAMNOEFMDP_1_OFFSET UNITYSDK_OFFSET(0x15E2E170)
#define MGPDNFKLMIE_NOBFKMHOOLD_PCAMNOEFMDP_OFFSET UNITYSDK_OFFSET(0x15E2E070)
#define MGPDNFKLMIE_NOBFKMHOOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2E060)

inline static constexpr unsigned int MGPDNFKLMIE_NOBFKMHOOLD_TypeDefinitionIndex = 90870;

class MGPDNFKLMIE_NOBFKMHOOLD : public ::System::Object
{
public:
	::System::Random* LDBFDJOGNJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPDNFKLMIE_NOBFKMHOOLD__CTOR_OFFSET))(this);
	}

	::System::Int32 PCAMNOEFMDP(::System::Int32 GDBANLBHNJK, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MGPDNFKLMIE_NOBFKMHOOLD_PCAMNOEFMDP_OFFSET))(this, GDBANLBHNJK, DNFNKBNBJHM);
	}

	::System::Int32 PCAMNOEFMDP_1(::System::Int32 GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MGPDNFKLMIE_NOBFKMHOOLD_PCAMNOEFMDP_1_OFFSET))(this, GOKEGHENOGP);
	}

	::System::Void CGJHLBGIPIL(::System::Int32 GONODCOMIAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MGPDNFKLMIE_NOBFKMHOOLD_CGJHLBGIPIL_OFFSET))(this, GONODCOMIAA);
	}
};
