#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define BHJJACNAACK_MPHOBAPMLOF__CTOR_OFFSET UNITYSDK_OFFSET(0x11505FC0)

inline static constexpr unsigned int BHJJACNAACK_MPHOBAPMLOF_TypeDefinitionIndex = 62205;

class BHJJACNAACK_MPHOBAPMLOF : public ::System::Object
{
public:
	::UnityEngine::Transform* FDGFOHHHNHL; // 0x10
	::UnityEngine::Transform* JOBJDBBKHBM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJJACNAACK_MPHOBAPMLOF__CTOR_OFFSET))(this);
	}
};
