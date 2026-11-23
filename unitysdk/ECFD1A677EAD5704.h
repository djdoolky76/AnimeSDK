#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define ECFD1A677EAD5704__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ECFD1A677EAD5704_TypeDefinitionIndex = 7799;

class ECFD1A677EAD5704 : public ::E379DE61A548837D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFD1A677EAD5704__CTOR_OFFSET))(this);
	}
};
