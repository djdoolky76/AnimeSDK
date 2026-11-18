#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class FMHDMLBDIJC;
class PCMENEMPLGF;

#define PCMENEMPLGF_MKLKMIICFNI_OJAIANCBJKE_OFFSET UNITYSDK_OFFSET(0x11B590F0)
#define PCMENEMPLGF_MKLKMIICFNI__CTOR_OFFSET UNITYSDK_OFFSET(0x11B590E0)

inline static constexpr unsigned int PCMENEMPLGF_MKLKMIICFNI_TypeDefinitionIndex = 62840;

class PCMENEMPLGF_MKLKMIICFNI : public ::System::Object
{
public:
	::FMHDMLBDIJC* PADJNMGMGHO; // 0x10
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MKLKMIICFNI__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> OJAIANCBJKE(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MKLKMIICFNI_OJAIANCBJKE_OFFSET))(this, JNDDJMAHNAI);
	}
};
