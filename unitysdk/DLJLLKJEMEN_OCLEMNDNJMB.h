#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

#define DLJLLKJEMEN_OCLEMNDNJMB_EHEJCCMLHKO_OFFSET UNITYSDK_OFFSET(0x76DA70)

inline static constexpr unsigned int DLJLLKJEMEN_OCLEMNDNJMB_TypeDefinitionIndex = 52622;

struct alignas(8) DLJLLKJEMEN_OCLEMNDNJMB
{
	::System::Int32 FLFDAKGMMKJ; // 0x10
	::UnityEngine::Quaternion COHFAELEJBI; // 0x14
	::System::Int32 JAJHPKNEOFD; // 0x24
	::System::Single AFIKJAIPLNG; // 0x28
	::System::Byte _padding0[0x4];
	::System::Func_1<::UnityEngine::Vector3>* CIHEGMLBOPE; // 0x30

	::UnityEngine::Vector3 EHEJCCMLHKO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLLKJEMEN_OCLEMNDNJMB_EHEJCCMLHKO_OFFSET))(this);
	}
};
