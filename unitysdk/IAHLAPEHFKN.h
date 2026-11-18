#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define IAHLAPEHFKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A38E400)

inline static constexpr unsigned int IAHLAPEHFKN_TypeDefinitionIndex = 92306;

class IAHLAPEHFKN : public ::System::Object
{
public:
	::System::String* KIHGNGKBADE; // 0x10
	::System::Boolean BAIAHFLFOPM; // 0x18
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 GCMBLHOGCEN; // 0x1C
	::System::Int64 ECODAPAFGDA; // 0x28
	::System::Single DFCCJLMCABI; // 0x30
	::System::Int32 HLBKHEFJAPH; // 0x34
	::System::Single JCDDGJPGHCM; // 0x38
	::System::Single HAJNBAIENOA; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHLAPEHFKN__CTOR_OFFSET))(this);
	}
};
