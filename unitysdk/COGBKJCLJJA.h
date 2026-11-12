#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define COGBKJCLJJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD6D20)

inline static constexpr unsigned int COGBKJCLJJA_TypeDefinitionIndex = 43048;

	class COGBKJCLJJA : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x10
		::UnityEngine::Quaternion BMDHDNGHOFA; // 0x1C
		::System::Single PCPFHHGPOOB; // 0x2C
		::System::Single BJMAMHMCOEL; // 0x30
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x34
		::UnityEngine::Quaternion NMBCMMJMIPA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGBKJCLJJA_CTOR_OFFSET))(this);
		}

	};
