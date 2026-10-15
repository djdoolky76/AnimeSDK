#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECLKHDGJJIM.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define BIIEODNJIGC_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0xB4A89B0)
#define BIIEODNJIGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A8AC0)
#define BIIEODNJIGC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB4A8900)

inline static constexpr unsigned int BIIEODNJIGC_TypeDefinitionIndex = 72655;

	class BIIEODNJIGC : public ::ECLKHDGJJIM
	{
	public:
		::UnityEngine::Vector2 HKIBADKNGMK; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEODNJIGC_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::System::Single a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BIIEODNJIGC_NPAFMEBNFOB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGHABIKPPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIEODNJIGC_AGHABIKPPNO_OFFSET))(this);
		}

	};
