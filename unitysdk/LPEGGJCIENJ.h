#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LPEGGJCIENJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACEB30)

inline static constexpr unsigned int LPEGGJCIENJ_TypeDefinitionIndex = 43961;

	class LPEGGJCIENJ : public ::System::Object
	{
	public:
		::System::Single GCJMFBKLGHI; // 0x10
		::UnityEngine::Vector3 LJDHGFECMHJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPEGGJCIENJ_CTOR_OFFSET))(this);
		}

	};
