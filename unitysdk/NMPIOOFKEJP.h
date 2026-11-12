#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NMPIOOFKEJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB35310)

inline static constexpr unsigned int NMPIOOFKEJP_TypeDefinitionIndex = 43433;

	class NMPIOOFKEJP : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 LDDBFJDDNJO; // 0x10
		::System::Boolean LBJCCPDANIB; // 0x1C
		::System::Boolean LGLGFNFFBMI; // 0x1D
		::System::Boolean JBDJFBPNAGG; // 0x1E
		::System::Boolean AANFGJCJMPF; // 0x1F
		::System::Single EMNHIJAIMBE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPIOOFKEJP_CTOR_OFFSET))(this);
		}

	};
