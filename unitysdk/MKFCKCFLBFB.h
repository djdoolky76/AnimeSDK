#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MKFCKCFLBFB_CDKBKBNJMEH_OFFSET UNITYSDK_OFFSET(0xB996A60)
#define MKFCKCFLBFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB996A40)

	class MKFCKCFLBFB : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 CLIFHNODGEH; // 0x10
		::System::Single COAELIHGAHH; // 0x1C
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MKFCKCFLBFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean CDKBKBNJMEH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MKFCKCFLBFB_CDKBKBNJMEH_OFFSET))(this, a1);
		}

	};
