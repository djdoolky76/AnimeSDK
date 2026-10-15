#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKAKKMMLOPA.h"
namespace UnityEngine { class Renderer; }

#define PKPKDNKKFJG_CTOR_OFFSET UNITYSDK_OFFSET(0xC2EC4C0)
#define PKPKDNKKFJG_DBEFEPBMBAK_OFFSET UNITYSDK_OFFSET(0xC2EC420)

inline static constexpr unsigned int PKPKDNKKFJG_TypeDefinitionIndex = 47447;

	class PKPKDNKKFJG : public ::NKAKKMMLOPA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPKDNKKFJG_CTOR_OFFSET))(this);
		}

		::System::Void DBEFEPBMBAK(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + PKPKDNKKFJG_DBEFEPBMBAK_OFFSET))(this, a1);
		}

	};
