#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/AA2675AA19B26A98.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define A223860C50512B7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A223860C50512B7D_TypeDefinitionIndex = 18871;

class A223860C50512B7D : public ::System::Object
{
public:
	::System::Boolean B65AB77CF6F417BA; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 E80D87C5AC152A48; // 0x14
	::System::Boolean FBD02F5016039DC3; // 0x20
	::System::Byte _padding1[0x3];
	::UnityEngine::Vector3 A02403B09D4E8B45; // 0x24
	::B223EC95048EAAE0::AA2675AA19B26A98 A95B38AC1BC97C3D; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A223860C50512B7D__CTOR_OFFSET))(this);
	}
};
