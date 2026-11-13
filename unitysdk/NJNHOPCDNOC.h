#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class NOOHPODHIAA;

#define NJNHOPCDNOC_FBOFBLKBHOH_OFFSET UNITYSDK_OFFSET(0x1A7A30D0)

inline static constexpr unsigned int NJNHOPCDNOC_TypeDefinitionIndex = 79353;

	class NJNHOPCDNOC : public ::System::Object
	{
	public:
		static ::System::Void FBOFBLKBHOH(::NOOHPODHIAA* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::NOOHPODHIAA*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NJNHOPCDNOC_FBOFBLKBHOH_OFFSET))(a1, a2);
		}

	};
