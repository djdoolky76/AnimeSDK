#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEKIBMCPHFG.h"

namespace UnityEngine { class Transform; }

#define OMEDHEKLJEH__CTOR_OFFSET UNITYSDK_OFFSET(0xFD92720)

inline static constexpr unsigned int OMEDHEKLJEH_TypeDefinitionIndex = 92440;

class OMEDHEKLJEH : public ::OEKIBMCPHFG
{
public:
	::UnityEngine::Transform* JHLNKKCIKDM; // 0x48
	::System::Single BHFDPPPBKPN; // 0x50
	::System::Boolean DDMJIFGKLCE; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEDHEKLJEH__CTOR_OFFSET))(this);
	}
};
