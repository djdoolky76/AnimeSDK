#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define JOKBLPIACPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA7CF0)

	class JOKBLPIACPA : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 NIBGNGICDOO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBLPIACPA_CTOR_OFFSET))(this);
		}

	};
