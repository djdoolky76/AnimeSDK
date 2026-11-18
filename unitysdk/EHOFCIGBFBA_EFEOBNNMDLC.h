#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class EHOFCIGBFBA;
class FMHDMLBDIJC;

#define EHOFCIGBFBA_EFEOBNNMDLC_OJAIANCBJKE_OFFSET UNITYSDK_OFFSET(0x154B2720)
#define EHOFCIGBFBA_EFEOBNNMDLC__CTOR_OFFSET UNITYSDK_OFFSET(0x154B2710)

inline static constexpr unsigned int EHOFCIGBFBA_EFEOBNNMDLC_TypeDefinitionIndex = 52222;

class EHOFCIGBFBA_EFEOBNNMDLC : public ::System::Object
{
public:
	::EHOFCIGBFBA* KLHPEBKNIFB; // 0x10
	::FMHDMLBDIJC* PADJNMGMGHO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_EFEOBNNMDLC__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> OJAIANCBJKE(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_EFEOBNNMDLC_OJAIANCBJKE_OFFSET))(this, JNDDJMAHNAI);
	}
};
