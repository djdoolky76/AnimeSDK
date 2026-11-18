#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CHFJLNEHAAF_NIIOJCJBMOH_GAGEFFHMPBC_OFFSET UNITYSDK_OFFSET(0x10E398D0)
#define CHFJLNEHAAF_NIIOJCJBMOH__CTOR_OFFSET UNITYSDK_OFFSET(0x10E398C0)

inline static constexpr unsigned int CHFJLNEHAAF_NIIOJCJBMOH_TypeDefinitionIndex = 87351;

class CHFJLNEHAAF_NIIOJCJBMOH : public ::System::Object
{
public:
	::System::String* OLOMNNBBHPJ; // 0x10
	::System::String* FCCLIEJAKLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_NIIOJCJBMOH__CTOR_OFFSET))(this);
	}

	::System::Void GAGEFFHMPBC(::System::String* IICPDDLBHPH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_NIIOJCJBMOH_GAGEFFHMPBC_OFFSET))(this, IICPDDLBHPH);
	}
};
