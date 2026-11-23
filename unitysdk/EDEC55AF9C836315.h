#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define EDEC55AF9C836315__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EDEC55AF9C836315_TypeDefinitionIndex = 6247;

class EDEC55AF9C836315 : public ::E379DE61A548837D
{
public:
	::System::Boolean AD0D2780B4B838AF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEC55AF9C836315__CTOR_OFFSET))(this);
	}
};
