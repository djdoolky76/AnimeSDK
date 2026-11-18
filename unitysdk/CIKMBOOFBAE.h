#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BAIAHAFJNBN.h"

#define CIKMBOOFBAE_DHJKFDOENGN_OFFSET UNITYSDK_OFFSET(0x145544F0)
#define CIKMBOOFBAE_IMBNMFODKPJ_OFFSET UNITYSDK_OFFSET(0x14554CA0)
#define CIKMBOOFBAE__CTOR_OFFSET UNITYSDK_OFFSET(0x145544E0)

inline static constexpr unsigned int CIKMBOOFBAE_TypeDefinitionIndex = 77531;

class CIKMBOOFBAE : public ::System::Object
{
public:
	::System::UInt32 JJEMJJLHCFL; // 0x10

	::System::Void _ctor(::System::UInt32 JJEMJJLHCFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIKMBOOFBAE__CTOR_OFFSET))(this, JJEMJJLHCFL);
	}

	::System::Void DHJKFDOENGN(::BAIAHAFJNBN& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::BAIAHAFJNBN&))((::PBYTE)hIl2Cpp + CIKMBOOFBAE_DHJKFDOENGN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void IMBNMFODKPJ(::BAIAHAFJNBN& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::BAIAHAFJNBN&))((::PBYTE)hIl2Cpp + CIKMBOOFBAE_IMBNMFODKPJ_OFFSET))(this, AAOCANGHBDG);
	}
};
