#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"

#define PGNIFAEKLPK_CTOR_OFFSET UNITYSDK_OFFSET(0xC22B570)

inline static constexpr unsigned int PGNIFAEKLPK_TypeDefinitionIndex = 74005;

	class PGNIFAEKLPK
	{
	public:
		::System::Void _ctor(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + PGNIFAEKLPK_CTOR_OFFSET))(this, a1);
		}

	};
