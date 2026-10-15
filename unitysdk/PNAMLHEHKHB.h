#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGEGFCADEEC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PNAMLHEHKHB_CTOR_OFFSET UNITYSDK_OFFSET(0xC332B50)
#define PNAMLHEHKHB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC332BA0)

inline static constexpr unsigned int PNAMLHEHKHB_TypeDefinitionIndex = 69797;

	class PNAMLHEHKHB : public ::HGEGFCADEEC
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PNAMLHEHKHB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAMLHEHKHB_JLANKNHFKCN_OFFSET))(this);
		}

	};
