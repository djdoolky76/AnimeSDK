#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define IEGKNHMIGMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB085E0)

inline static constexpr unsigned int IEGKNHMIGMB_TypeDefinitionIndex = 42536;

	class IEGKNHMIGMB : public ::System::Object
	{
	public:
		::UnityEngine::Color OCHLDEHBDOL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGKNHMIGMB_CTOR_OFFSET))(this);
		}

	};
