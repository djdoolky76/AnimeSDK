#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class NOOHPODHIAA;

#define NJNHOPCDNOC_FBOFBLKBHOH_OFFSET UNITYSDK_OFFSET(0xBC20C10)

inline static constexpr unsigned int NJNHOPCDNOC_TypeDefinitionIndex = 77019;

	class NJNHOPCDNOC : public ::System::Object
	{
	public:
		static ::System::Void FBOFBLKBHOH(::NOOHPODHIAA* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::NOOHPODHIAA*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NJNHOPCDNOC_FBOFBLKBHOH_OFFSET))(a1, a2);
		}

	};
