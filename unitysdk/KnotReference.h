#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Splines { class SplineContainer; }

#define KNOTREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3DCC890)
#define KNOTREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3DCC980)
#define KNOTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int KnotReference_TypeDefinitionIndex = 21608;

class KnotReference : public ::System::Object
{
public:
	::UnityEngine::Splines::SplineContainer* Container; // 0x10
	::System::Int32 SplineIndex; // 0x18
	::System::Int32 KnotIndex; // 0x1C

	::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNOTREFERENCE_EQUALS_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOTREFERENCE__CTOR_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOTREFERENCE_GETHASHCODE_OFFSET))(this);
	}
};
