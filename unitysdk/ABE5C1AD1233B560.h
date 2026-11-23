#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ABE5C1AD1233B560_E6B77EF373719A58_OFFSET UNITYSDK_OFFSET(0x290EB50)
#define ABE5C1AD1233B560__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ABE5C1AD1233B560_TypeDefinitionIndex = 19784;

class ABE5C1AD1233B560 : public ::System::Object
{
public:
	::System::Double E2A819DEAB12D5C5; // 0x10
	::System::Double A321CBC86C4EC712; // 0x18
	::System::Double EDEF9CC80CD6A8D0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABE5C1AD1233B560__CTOR_OFFSET))(this);
	}

	static ::ABE5C1AD1233B560* E6B77EF373719A58(::UnityEngine::Vector3 EAB6A87D088A15E7)
	{
		return ((::ABE5C1AD1233B560*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABE5C1AD1233B560_E6B77EF373719A58_OFFSET))(EAB6A87D088A15E7);
	}
};
