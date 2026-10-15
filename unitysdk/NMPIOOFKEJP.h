#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NMPIOOFKEJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C973530)

	class NMPIOOFKEJP : public ::System::Object
	{
	public:
		::System::Single EMNHIJAIMBE; // 0x10
		::UnityEngine::Vector3 LDDBFJDDNJO; // 0x14
		::System::Boolean LGLGFNFFBMI; // 0x20
		::System::Boolean JBDJFBPNAGG; // 0x21
		::System::Boolean AANFGJCJMPF; // 0x22
		::System::Boolean LBJCCPDANIB; // 0x23
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPIOOFKEJP_CTOR_OFFSET))(this);
		}

	};
