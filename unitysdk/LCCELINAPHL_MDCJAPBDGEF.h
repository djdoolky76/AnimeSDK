#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCCELINAPHL_ONKHFFHJCCO;
namespace UnityEngine { class GameObject; }

#define LCCELINAPHL_MDCJAPBDGEF_JKHCKJIDKOH_OFFSET UNITYSDK_OFFSET(0xD417BB0)
#define LCCELINAPHL_MDCJAPBDGEF__CTOR_OFFSET UNITYSDK_OFFSET(0xD417BA0)

inline static constexpr unsigned int LCCELINAPHL_MDCJAPBDGEF_TypeDefinitionIndex = 41339;

class LCCELINAPHL_MDCJAPBDGEF : public ::System::Object
{
public:
	::LCCELINAPHL_ONKHFFHJCCO* FGBNBFHOKAA; // 0x10
	::System::Int32 LBPBANPFBHE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCELINAPHL_MDCJAPBDGEF__CTOR_OFFSET))(this);
	}

	::System::Void JKHCKJIDKOH(::UnityEngine::GameObject* PAAOJEMGCFJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LCCELINAPHL_MDCJAPBDGEF_JKHCKJIDKOH_OFFSET))(this, PAAOJEMGCFJ);
	}
};
