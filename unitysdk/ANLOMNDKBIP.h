#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FODHABILILB.h"

namespace UnityEngine { class GameObject; }

#define ANLOMNDKBIP_GNABBELBPOC_OFFSET UNITYSDK_OFFSET(0x14C220B0)
#define ANLOMNDKBIP_ONGFIOMODMJ_OFFSET UNITYSDK_OFFSET(0x14C22040)
#define ANLOMNDKBIP__CTOR_OFFSET UNITYSDK_OFFSET(0x14C220A0)

inline static constexpr unsigned int ANLOMNDKBIP_TypeDefinitionIndex = 73848;

class ANLOMNDKBIP : public ::FODHABILILB
{
public:
	::UnityEngine::GameObject* JEIDPPCEHLD; // 0x10
	::System::Boolean HOLAPFBCMJO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLOMNDKBIP__CTOR_OFFSET))(this);
	}

	::System::Void ONGFIOMODMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLOMNDKBIP_ONGFIOMODMJ_OFFSET))(this);
	}

	::System::Void GNABBELBPOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLOMNDKBIP_GNABBELBPOC_OFFSET))(this);
	}
};
