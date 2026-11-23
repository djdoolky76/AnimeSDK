#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FF7B813EE9F1556C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FF7B813EE9F1556C_TypeDefinitionIndex = 10076;

class FF7B813EE9F1556C : public ::E379DE61A548837D
{
public:
	::System::Boolean BB05D14AE8E1DCFD; // 0x38
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector2 EE8B505B9D2B1840; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF7B813EE9F1556C__CTOR_OFFSET))(this);
	}
};
