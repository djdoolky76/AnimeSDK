#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDBDJENIDEO;
class FFEIFLBGEEA;

#define EDBDJENIDEO_DFMJDNEGLEG_KLDGLOMHHJL_OFFSET UNITYSDK_OFFSET(0x141425E0)
#define EDBDJENIDEO_DFMJDNEGLEG__CTOR_OFFSET UNITYSDK_OFFSET(0x141425D0)

inline static constexpr unsigned int EDBDJENIDEO_DFMJDNEGLEG_TypeDefinitionIndex = 90351;

class EDBDJENIDEO_DFMJDNEGLEG : public ::System::Object
{
public:
	::EDBDJENIDEO* KLHPEBKNIFB; // 0x10
	::FFEIFLBGEEA* IGKCLOIPEFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_DFMJDNEGLEG__CTOR_OFFSET))(this);
	}

	::System::Void KLDGLOMHHJL(::System::Int32 IJKOLMELBBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDBDJENIDEO_DFMJDNEGLEG_KLDGLOMHHJL_OFFSET))(this, IJKOLMELBBC);
	}
};
