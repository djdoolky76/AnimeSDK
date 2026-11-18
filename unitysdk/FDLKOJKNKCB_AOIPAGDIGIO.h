#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMLegIK;

#define FDLKOJKNKCB_AOIPAGDIGIO_PEAIECMDCHG_OFFSET UNITYSDK_OFFSET(0x169C9ED0)
#define FDLKOJKNKCB_AOIPAGDIGIO__CTOR_OFFSET UNITYSDK_OFFSET(0x169C9EC0)

inline static constexpr unsigned int FDLKOJKNKCB_AOIPAGDIGIO_TypeDefinitionIndex = 41000;

class FDLKOJKNKCB_AOIPAGDIGIO : public ::System::Object
{
public:
	::AMLegIK* GDHANLACEPO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_AOIPAGDIGIO__CTOR_OFFSET))(this);
	}

	::System::Void PEAIECMDCHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_AOIPAGDIGIO_PEAIECMDCHG_OFFSET))(this);
	}
};
