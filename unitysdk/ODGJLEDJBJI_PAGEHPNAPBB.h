#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define ODGJLEDJBJI_PAGEHPNAPBB_GGOFHHOMDOJ_OFFSET UNITYSDK_OFFSET(0xFD65180)
#define ODGJLEDJBJI_PAGEHPNAPBB_NCPDGKCNNFA_OFFSET UNITYSDK_OFFSET(0xFD65190)
#define ODGJLEDJBJI_PAGEHPNAPBB__CTOR_OFFSET UNITYSDK_OFFSET(0xFD65170)

inline static constexpr unsigned int ODGJLEDJBJI_PAGEHPNAPBB_TypeDefinitionIndex = 73478;

class ODGJLEDJBJI_PAGEHPNAPBB : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action* POCANNAFFOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_PAGEHPNAPBB__CTOR_OFFSET))(this);
	}

	::System::Void GGOFHHOMDOJ(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_PAGEHPNAPBB_GGOFHHOMDOJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NCPDGKCNNFA(::System::Int32 DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_PAGEHPNAPBB_NCPDGKCNNFA_OFFSET))(this, DJCNCELJPOM);
	}
};
