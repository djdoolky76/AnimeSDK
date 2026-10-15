#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CAKHIMADICA_CTOR_OFFSET UNITYSDK_OFFSET(0xC487A80)

	class CAKHIMADICA
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CAKHIMADICA_CTOR_OFFSET))(this, a1);
		}

	};
