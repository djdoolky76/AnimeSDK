#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Splines/BezierKnot.h"

namespace UnityEngine::Splines { class Spline; }

#define ACC25668C4CE8C97_E41B98001464C9CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ACC25668C4CE8C97_E41B98001464C9CD_TypeDefinitionIndex = 18016;

class ACC25668C4CE8C97_E41B98001464C9CD : public ::System::Object
{
public:
	::UnityEngine::Splines::Spline* B9850AFF3DBCC0D9; // 0x10
	::System::Boolean A21289F29FD84015; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 AD0A6FD94E858431; // 0x1C
	::System::Single F0895D445B0C3A94; // 0x20
	::System::Byte _padding1[0x4];
	::Il2CppArray<::UnityEngine::Splines::BezierKnot>* F9297A95DB539761; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACC25668C4CE8C97_E41B98001464C9CD__CTOR_OFFSET))(this);
	}
};
