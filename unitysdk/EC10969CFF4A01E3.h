#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define EC10969CFF4A01E3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EC10969CFF4A01E3_TypeDefinitionIndex = 7931;

class EC10969CFF4A01E3 : public ::E379DE61A548837D
{
public:
	::System::UInt64 EA877E6F76211464; // 0x38
	::System::String* A963FD20EE294E1C; // 0x40
	::UnityEngine::Vector3 E9A930FA411B2DE9; // 0x48
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x54
	::UnityEngine::Vector3 BC87D200F7EF4FE6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC10969CFF4A01E3__CTOR_OFFSET))(this);
	}
};
