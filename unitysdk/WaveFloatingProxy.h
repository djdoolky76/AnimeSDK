#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class SphereCollider; }

#define WAVEFLOATINGPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0xE9F7B20)

inline static constexpr unsigned int WaveFloatingProxy_TypeDefinitionIndex = 47489;

	class WaveFloatingProxy
	{
	public:
		::System::Single colliderRaiuds; // 0x30
		::System::Single radius; // 0x34
		::System::Single mass; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::SphereCollider* LFPJNAKHFME; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVEFLOATINGPROXY_CTOR_OFFSET))(this);
		}

	};
