#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OGLJNOJMKBF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C95ED90)
#define OGLJNOJMKBF_CNBJLNGJPCK_OFFSET UNITYSDK_OFFSET(0x1C95EDF0)
#define OGLJNOJMKBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95EE00)

inline static constexpr unsigned int OGLJNOJMKBF_TypeDefinitionIndex = 43407;

	class OGLJNOJMKBF : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NIBGNGICDOO; // 0x10
		::System::Single IKMAFAJFOHE; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLJNOJMKBF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLJNOJMKBF_CLEAR_OFFSET))(this);
		}

		::System::Boolean CNBJLNGJPCK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLJNOJMKBF_CNBJLNGJPCK_OFFSET))(this);
		}

	};
