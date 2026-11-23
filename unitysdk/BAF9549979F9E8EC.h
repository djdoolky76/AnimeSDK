#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B99F35FFBB52B096/F07CB896B719E340.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BAF9549979F9E8EC__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BAF9549979F9E8EC_TypeDefinitionIndex = 1877;

class BAF9549979F9E8EC : public ::E379DE61A548837D
{
public:
	::System::Boolean E580C97C13617576; // 0x38
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 FFF299FAC6915F64; // 0x3C
	::System::Single FD9E28B525039E76; // 0x48
	::B99F35FFBB52B096::F07CB896B719E340 E17741AF3C4B7AD0; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAF9549979F9E8EC__CTOR_OFFSET))(this);
	}
};
