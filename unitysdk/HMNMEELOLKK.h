#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FICODKNICLL.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HMNMEELOLKK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D89340)
#define HMNMEELOLKK_ELPPDMEJJNN_OFFSET UNITYSDK_OFFSET(0x15D89150)
#define HMNMEELOLKK_FFCGMLOAPMO_OFFSET UNITYSDK_OFFSET(0x15D892B0)
#define HMNMEELOLKK_ISPOINTINSIDELOCAL_OFFSET UNITYSDK_OFFSET(0x15D88F00)
#define HMNMEELOLKK_MKHBPJMMNMI_OFFSET UNITYSDK_OFFSET(0x15D89210)

	class HMNMEELOLKK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNMEELOLKK_CTOR_OFFSET))(this);
		}

		::System::Boolean IsPointInsideLocal(::UnityEngine::Vector3 a1, ::FICODKNICLL a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::FICODKNICLL))((::PBYTE)hIl2Cpp + HMNMEELOLKK_ISPOINTINSIDELOCAL_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean ELPPDMEJJNN(::UnityEngine::Vector3 a1, ::FICODKNICLL a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::FICODKNICLL))((::PBYTE)hIl2Cpp + HMNMEELOLKK_ELPPDMEJJNN_OFFSET))(a1, a2);
		}

		static ::System::Boolean MKHBPJMMNMI(::UnityEngine::Vector3 a1, ::FICODKNICLL a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::FICODKNICLL))((::PBYTE)hIl2Cpp + HMNMEELOLKK_MKHBPJMMNMI_OFFSET))(a1, a2);
		}

		static ::System::Boolean FFCGMLOAPMO(::UnityEngine::Vector3 a1, ::FICODKNICLL a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::FICODKNICLL))((::PBYTE)hIl2Cpp + HMNMEELOLKK_FFCGMLOAPMO_OFFSET))(a1, a2);
		}

	};
