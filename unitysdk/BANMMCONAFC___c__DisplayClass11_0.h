#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GDBCOMIAEDD;

#define BANMMCONAFC___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15E70300)
#define BANMMCONAFC___C__DISPLAYCLASS11_0___DOSPLIT_B__0_OFFSET UNITYSDK_OFFSET(0x15E70D10)

inline static constexpr unsigned int BANMMCONAFC___c__DisplayClass11_0_TypeDefinitionIndex = 77898;

	class BANMMCONAFC___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 center; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANMMCONAFC___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 __DoSplit_b__0(::GDBCOMIAEDD* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GDBCOMIAEDD*))((::PBYTE)hIl2Cpp + BANMMCONAFC___C__DISPLAYCLASS11_0___DOSPLIT_B__0_OFFSET))(this, a1);
		}

	};
