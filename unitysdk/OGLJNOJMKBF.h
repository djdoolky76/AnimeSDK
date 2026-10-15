#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OGLJNOJMKBF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C98D050)
#define OGLJNOJMKBF_CNBJLNGJPCK_OFFSET UNITYSDK_OFFSET(0x1C98D0B0)
#define OGLJNOJMKBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98D0C0)

	class OGLJNOJMKBF : public ::System::Object
	{
	public:
		::System::Single IKMAFAJFOHE; // 0x10
		::UnityEngine::Vector3 NIBGNGICDOO; // 0x14
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
