#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class FMHDMLBDIJC;
class JGEBOFOHDCI;

#define JGEBOFOHDCI_PLNEOJCBKJI_OJAIANCBJKE_OFFSET UNITYSDK_OFFSET(0x13076930)
#define JGEBOFOHDCI_PLNEOJCBKJI__CTOR_OFFSET UNITYSDK_OFFSET(0x13076920)

inline static constexpr unsigned int JGEBOFOHDCI_PLNEOJCBKJI_TypeDefinitionIndex = 70278;

class JGEBOFOHDCI_PLNEOJCBKJI : public ::System::Object
{
public:
	::FMHDMLBDIJC* PADJNMGMGHO; // 0x10
	::JGEBOFOHDCI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_PLNEOJCBKJI__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> OJAIANCBJKE(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_PLNEOJCBKJI_OJAIANCBJKE_OFFSET))(this, JNDDJMAHNAI);
	}
};
