#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MeshFilter; }

#define BOUNDINGBOXSETTER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2899410)
#define BOUNDINGBOXSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int BoundingBoxSetter_TypeDefinitionIndex = 16223;

class BoundingBoxSetter : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::B3A7F113FE1DE383 Box; // 0x20
	::UnityEngine::MeshFilter* B05C57B9D6B3AB60; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDINGBOXSETTER__CTOR_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDINGBOXSETTER_BF13C91AD80643D2_OFFSET))(this);
	}
};
