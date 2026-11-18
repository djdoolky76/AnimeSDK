#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define OMINJHFFAJI_DEGAAAGBMJF_JLEDELLPEAN_OFFSET UNITYSDK_OFFSET(0xFB9A5A0)
#define OMINJHFFAJI_DEGAAAGBMJF__CTOR_OFFSET UNITYSDK_OFFSET(0xFB9A590)

inline static constexpr unsigned int OMINJHFFAJI_DEGAAAGBMJF_TypeDefinitionIndex = 56959;

class OMINJHFFAJI_DEGAAAGBMJF : public ::System::Object
{
public:
	::System::UInt32 HPADNAEINPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_DEGAAAGBMJF__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* JLEDELLPEAN()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_DEGAAAGBMJF_JLEDELLPEAN_OFFSET))(this);
	}
};
