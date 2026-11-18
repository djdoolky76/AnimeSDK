#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKHOKICACBA_PGOLAAOCEFL.h"
#include "unitysdk/System/Object.h"

#define AKHOKICACBA__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDC7B0)

inline static constexpr unsigned int AKHOKICACBA_TypeDefinitionIndex = 77364;

class AKHOKICACBA : public ::System::Object
{
public:
	::AKHOKICACBA_PGOLAAOCEFL ENDKPBEFBME; // 0x10
	::System::UInt32 HPAKOJEOKAI; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHOKICACBA__CTOR_OFFSET))(this);
	}
};
