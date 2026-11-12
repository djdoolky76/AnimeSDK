#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFDHJMFAGCK;

#define CFDHJMFAGCK___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD372DE0)
#define CFDHJMFAGCK___C__DISPLAYCLASS13_0___STARTBOARDINGFLIGHT_B__0_OFFSET UNITYSDK_OFFSET(0xD3747A0)

inline static constexpr unsigned int CFDHJMFAGCK___c__DisplayClass13_0_TypeDefinitionIndex = 81548;

	class CFDHJMFAGCK___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::CFDHJMFAGCK* __4__this; // 0x10
		::UnityEngine::Vector3 endPos; // 0x18
		::UnityEngine::Vector3 startPos; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void __StartBoardingFlight_b__0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK___C__DISPLAYCLASS13_0___STARTBOARDINGFLIGHT_B__0_OFFSET))(this, a1);
		}

	};
