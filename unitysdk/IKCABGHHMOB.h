#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IKCABGHHMOB_CTOR_OFFSET UNITYSDK_OFFSET(0x16475340)

inline static constexpr unsigned int IKCABGHHMOB_TypeDefinitionIndex = 52105;

	class IKCABGHHMOB : public ::System::Object
	{
	public:
		::System::UInt64 MBCACNKDMFG; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
		::System::Void _ctor(::System::UInt64 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IKCABGHHMOB_CTOR_OFFSET))(this, a1, a2);
		}

	};
