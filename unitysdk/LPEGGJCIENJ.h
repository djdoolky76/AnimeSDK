#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LPEGGJCIENJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C922DB0)

	class LPEGGJCIENJ : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 LJDHGFECMHJ; // 0x10
		::System::Single GCJMFBKLGHI; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPEGGJCIENJ_CTOR_OFFSET))(this);
		}

	};
