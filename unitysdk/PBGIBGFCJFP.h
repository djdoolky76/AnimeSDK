#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PBGIBGFCJFP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C976950)
#define PBGIBGFCJFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9769B0)

inline static constexpr unsigned int PBGIBGFCJFP_TypeDefinitionIndex = 43538;

	class PBGIBGFCJFP : public ::NOOHPODHIAA
	{
	public:
		::UnityEngine::Vector3 ACKDLFEPFMC; // 0x338
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGIBGFCJFP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGIBGFCJFP_CLEAR_OFFSET))(this);
		}

	};
