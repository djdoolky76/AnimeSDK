#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DAMBCLHMMGD__CTOR_OFFSET UNITYSDK_OFFSET(0x13E280B0)

inline static constexpr unsigned int DAMBCLHMMGD_TypeDefinitionIndex = 77229;

class DAMBCLHMMGD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBCLHMMGD__CTOR_OFFSET))(this);
	}
};
