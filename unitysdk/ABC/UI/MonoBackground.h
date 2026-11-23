#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_UI_MONOBACKGROUND_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2234750)
#define ABC_UI_MONOBACKGROUND_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x22346B0)
#define ABC_UI_MONOBACKGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoBackground_TypeDefinitionIndex = 9196;

	class MonoBackground : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOBACKGROUND_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOBACKGROUND_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOBACKGROUND__CTOR_OFFSET))(this);
		}
	};
}
