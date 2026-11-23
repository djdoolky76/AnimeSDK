#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define A78E3F1C2E94AD4E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A78E3F1C2E94AD4E_TypeDefinitionIndex = 2076;

class A78E3F1C2E94AD4E : public ::E379DE61A548837D
{
public:
	::System::UInt32 F4A53E6D4E16016D; // 0x38
	::System::Single B17B9B9C54637FC1; // 0x3C
	::UnityEngine::Vector3 F2DDA3F3F275FD02; // 0x40
	::UnityEngine::Vector3 A0118CC1BC5A5373; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A78E3F1C2E94AD4E__CTOR_OFFSET))(this);
	}
};
