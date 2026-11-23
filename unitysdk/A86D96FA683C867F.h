#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define A86D96FA683C867F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A86D96FA683C867F_TypeDefinitionIndex = 877;

class A86D96FA683C867F : public ::E379DE61A548837D
{
public:
	::System::Boolean F053134EFAF2C429; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single F5860450C8BB754B; // 0x3C
	::UnityEngine::Vector3 EF5E788F79595BE7; // 0x40
	::System::Boolean EEAA05D6771662EF; // 0x4C
	::System::Byte _padding1[0x3];
	::UnityEngine::Quaternion B14F5F733E2AD130; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A86D96FA683C867F__CTOR_OFFSET))(this);
	}
};
