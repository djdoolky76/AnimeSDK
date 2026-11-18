#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define NAPSTREAMINGLAYERSIGN__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4E880)

inline static constexpr unsigned int NapStreamingLayerSign_TypeDefinitionIndex = 52511;

class NapStreamingLayerSign : public ::UnityEngine::MonoBehaviour
{
public:
	::NapStreaming::StreamingLayer layer; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* desc; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMINGLAYERSIGN__CTOR_OFFSET))(this);
	}
};
