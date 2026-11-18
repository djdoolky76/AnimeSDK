#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PLMLJOGHFAK_FENCOLLJAMO_OFFSET UNITYSDK_OFFSET(0x1C692730)
#define PLMLJOGHFAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C692720)

inline static constexpr unsigned int PLMLJOGHFAK_TypeDefinitionIndex = 74326;

class PLMLJOGHFAK : public ::System::Object
{
public:
	::System::Int32 ONKACNLPGME; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMLJOGHFAK__CTOR_OFFSET))(this);
	}

	::System::Int32 FENCOLLJAMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMLJOGHFAK_FENCOLLJAMO_OFFSET))(this);
	}
};
