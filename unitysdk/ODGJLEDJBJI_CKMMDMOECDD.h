#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEKNLIIDKCM;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define ODGJLEDJBJI_CKMMDMOECDD_CLPMAIAOJDH_OFFSET UNITYSDK_OFFSET(0x184363B0)
#define ODGJLEDJBJI_CKMMDMOECDD_DAHBGNPFKDO_OFFSET UNITYSDK_OFFSET(0x184364C0)
#define ODGJLEDJBJI_CKMMDMOECDD__CTOR_OFFSET UNITYSDK_OFFSET(0x184363A0)

inline static constexpr unsigned int ODGJLEDJBJI_CKMMDMOECDD_TypeDefinitionIndex = 73484;

class ODGJLEDJBJI_CKMMDMOECDD : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18
	::GEKNLIIDKCM* JDPKJJCKJLG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_CKMMDMOECDD__CTOR_OFFSET))(this);
	}

	::System::Void CLPMAIAOJDH(::System::UInt64 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_CKMMDMOECDD_CLPMAIAOJDH_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void DAHBGNPFKDO(::System::Int32 DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_CKMMDMOECDD_DAHBGNPFKDO_OFFSET))(this, DJCNCELJPOM);
	}
};
