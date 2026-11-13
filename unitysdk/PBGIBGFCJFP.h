#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PBGIBGFCJFP_CLEAR_OFFSET UNITYSDK_OFFSET(0x176786E0)
#define PBGIBGFCJFP_CTOR_OFFSET UNITYSDK_OFFSET(0x17678740)

inline static constexpr unsigned int PBGIBGFCJFP_TypeDefinitionIndex = 44520;

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
