#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AMNKHHBDPMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8702D0)

inline static constexpr unsigned int AMNKHHBDPMJ_TypeDefinitionIndex = 42149;

	class AMNKHHBDPMJ : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NMELCPIOKNO; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNKHHBDPMJ_CTOR_OFFSET))(this);
		}

	};
