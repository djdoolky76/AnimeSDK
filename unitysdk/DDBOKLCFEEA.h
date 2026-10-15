#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DDBOKLCFEEA_CTOR_OFFSET UNITYSDK_OFFSET(0xE25CC80)

	class DDBOKLCFEEA : public ::System::Object
	{
	public:
		::System::Boolean KKKIONIDKFA; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 OHGBCOIOALP; // 0x14
		::UnityEngine::Vector3 OEDHCKPOGDO; // 0x20
		::System::Single AFMIFEGNCIJ; // 0x2C
		::System::Single HFLPNAIAOMG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBOKLCFEEA_CTOR_OFFSET))(this);
		}

	};
