#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DECMMBGLMFD_CTOR_OFFSET UNITYSDK_OFFSET(0xE502330)
#define DECMMBGLMFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5022F0)

	class DECMMBGLMFD : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 HIPMLABCLGH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECMMBGLMFD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECMMBGLMFD_DISPOSE_OFFSET))(this);
		}

	};
