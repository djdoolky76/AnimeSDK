#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CCKKOKJIIDO_CTOR_OFFSET UNITYSDK_OFFSET(0x17394360)

inline static constexpr unsigned int CCKKOKJIIDO_TypeDefinitionIndex = 58879;

	class CCKKOKJIIDO : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 INFNMPEAHJN; // 0x10
		::UnityEngine::Vector3 MBOCCOCLONK; // 0x1C
		::System::Single DMMINDDMKGC; // 0x28
		::System::Single OOFCHJHBKCD; // 0x2C
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CCKKOKJIIDO_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
