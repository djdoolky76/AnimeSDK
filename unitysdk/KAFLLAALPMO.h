#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KAFLLAALPMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA8810)

inline static constexpr unsigned int KAFLLAALPMO_TypeDefinitionIndex = 42106;

	class KAFLLAALPMO : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 HDKKAKPBOIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLLAALPMO_CTOR_OFFSET))(this);
		}

	};
