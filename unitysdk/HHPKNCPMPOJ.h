#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HHPKNCPMPOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD6230)

inline static constexpr unsigned int HHPKNCPMPOJ_TypeDefinitionIndex = 78700;

	class HHPKNCPMPOJ : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x10
		::System::UInt32 BFLIFKBEOPJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPKNCPMPOJ_CTOR_OFFSET))(this);
		}

	};
