#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JPMACEGMIOC;

#define MCJEAKOHKJH__CTOR_OFFSET UNITYSDK_OFFSET(0x11F30330)

inline static constexpr unsigned int MCJEAKOHKJH_TypeDefinitionIndex = 83828;

class MCJEAKOHKJH : public ::System::Object
{
public:
	::JPMACEGMIOC* AHMFPFACACD; // 0x10
	::System::Boolean BMGHHLJNCIH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJEAKOHKJH__CTOR_OFFSET))(this);
	}
};
