#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define F54BEBA04CDB53B8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F54BEBA04CDB53B8_TypeDefinitionIndex = 2086;

class F54BEBA04CDB53B8 : public ::E379DE61A548837D
{
public:
	::UnityEngine::Vector3 FFF299FAC6915F64; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F54BEBA04CDB53B8__CTOR_OFFSET))(this);
	}
};
