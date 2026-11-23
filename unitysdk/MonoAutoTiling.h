#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class SpriteRenderer; }

#define MONOAUTOTILING_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x181BA60)
#define MONOAUTOTILING__CTOR_OFFSET UNITYSDK_OFFSET(0x181C280)

inline static constexpr unsigned int MonoAutoTiling_TypeDefinitionIndex = 1084;

class MonoAutoTiling : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single scaleFactor; // 0x20
	::System::Byte _padding0[0x4];
	::UnityEngine::SpriteRenderer* TopFace; // 0x28
	::UnityEngine::SpriteRenderer* BotFace; // 0x30
	::UnityEngine::SpriteRenderer* FrtFace; // 0x38
	::UnityEngine::SpriteRenderer* BckFace; // 0x40
	::UnityEngine::SpriteRenderer* LftFace; // 0x48
	::UnityEngine::SpriteRenderer* RgtFace; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOAUTOTILING__CTOR_OFFSET))(this);
	}

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOAUTOTILING_E02954280801633F_OFFSET))(this);
	}
};
