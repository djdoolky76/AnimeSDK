#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"

#define OFODGHAMPON_CTOR_OFFSET UNITYSDK_OFFSET(0x18DEFD20)

inline static constexpr unsigned int OFODGHAMPON_TypeDefinitionIndex = 61141;

	class OFODGHAMPON : public ::System::Object
	{
	public:
		::UnityEngine::Rect PKLIOOJEGJO; // 0x10
		::UnityEngine::Color FDACKBHCOEI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFODGHAMPON_CTOR_OFFSET))(this);
		}

	};
