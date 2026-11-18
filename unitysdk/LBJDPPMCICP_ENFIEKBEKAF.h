#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define LBJDPPMCICP_ENFIEKBEKAF_OFGAJKPGBON_OFFSET UNITYSDK_OFFSET(0x129BBF10)
#define LBJDPPMCICP_ENFIEKBEKAF__CTOR_OFFSET UNITYSDK_OFFSET(0x129B96E0)

inline static constexpr unsigned int LBJDPPMCICP_ENFIEKBEKAF_TypeDefinitionIndex = 55728;

class LBJDPPMCICP_ENFIEKBEKAF : public ::System::Object
{
public:
	::UnityEngine::Animation* BKOLCDPOJAL; // 0x10
	::System::String* HIAIKHDFCLN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJDPPMCICP_ENFIEKBEKAF__CTOR_OFFSET))(this);
	}

	::System::Void OFGAJKPGBON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJDPPMCICP_ENFIEKBEKAF_OFGAJKPGBON_OFFSET))(this);
	}
};
