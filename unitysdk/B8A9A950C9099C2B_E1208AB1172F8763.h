#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define B8A9A950C9099C2B_E1208AB1172F8763_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x23AEFE0)
#define B8A9A950C9099C2B_E1208AB1172F8763__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8A9A950C9099C2B_E1208AB1172F8763_TypeDefinitionIndex = 3627;

class B8A9A950C9099C2B_E1208AB1172F8763 : public ::System::Object
{
public:
	::UnityEngine::Object* B07BAD1D351C9637; // 0x10
	::System::Int32 E3C34774D1115046; // 0x18

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8A9A950C9099C2B_E1208AB1172F8763_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8A9A950C9099C2B_E1208AB1172F8763__CTOR_OFFSET))(this);
	}
};
