#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define COGBKJCLJJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB170D0)

inline static constexpr unsigned int COGBKJCLJJA_TypeDefinitionIndex = 43048;

	class COGBKJCLJJA : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion NMBCMMJMIPA; // 0x10
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x20
		::System::Single PCPFHHGPOOB; // 0x2C
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x30
		::UnityEngine::Quaternion BMDHDNGHOFA; // 0x3C
		::System::Single BJMAMHMCOEL; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGBKJCLJJA_CTOR_OFFSET))(this);
		}

	};
