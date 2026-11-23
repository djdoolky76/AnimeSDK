#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/System/Guid.h"

namespace System { class String; }

#define WWISEOBJECTREFERENCE_BE24F4950A347F16_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define WWISEOBJECTREFERENCE_EC4DF568266C3E4D_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define WWISEOBJECTREFERENCE_F3820CCC8392F0F6_OFFSET UNITYSDK_OFFSET(0x29138C0)
#define WWISEOBJECTREFERENCE_F5E09AB8325619E3_OFFSET UNITYSDK_OFFSET(0x1831260)
#define WWISEOBJECTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseObjectReference_TypeDefinitionIndex = 21565;

class WwiseObjectReference : public ::UnityEngine::ScriptableObject
{
public:
	::System::String* objectName; // 0x18
	::System::UInt32 id; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* guid; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEOBJECTREFERENCE__CTOR_OFFSET))(this);
	}

	::System::Guid F3820CCC8392F0F6()
	{
		return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEOBJECTREFERENCE_F3820CCC8392F0F6_OFFSET))(this);
	}

	::System::String* EC4DF568266C3E4D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEOBJECTREFERENCE_EC4DF568266C3E4D_OFFSET))(this);
	}

	::System::String* BE24F4950A347F16()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEOBJECTREFERENCE_BE24F4950A347F16_OFFSET))(this);
	}

	::System::UInt32 F5E09AB8325619E3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEOBJECTREFERENCE_F5E09AB8325619E3_OFFSET))(this);
	}
};
