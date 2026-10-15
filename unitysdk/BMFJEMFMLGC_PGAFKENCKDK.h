#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Light; }

#define BMFJEMFMLGC_PGAFKENCKDK_BMEJBIMKILN_1_OFFSET UNITYSDK_OFFSET(0x23A60)
#define BMFJEMFMLGC_PGAFKENCKDK_BMEJBIMKILN_OFFSET UNITYSDK_OFFSET(0x23A50)

inline static constexpr unsigned int BMFJEMFMLGC_PGAFKENCKDK_TypeDefinitionIndex = 69779;

	struct alignas(4) BMFJEMFMLGC_PGAFKENCKDK
	{
		::UnityEngine::Vector3 NPHAFNPMMDF; // 0x10
		::UnityEngine::Color MMMKLCAPCMF; // 0x1C
		::System::Single NCAGHJPIMHO; // 0x2C
		::System::Boolean BMEJBIMKILN(::UnityEngine::Light* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_PGAFKENCKDK_BMEJBIMKILN_OFFSET))(this, a1);
		}

		/*
		::System::Boolean BMEJBIMKILN_1(::BMFJEMFMLGC_PGAFKENCKDK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMFJEMFMLGC_PGAFKENCKDK))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_PGAFKENCKDK_BMEJBIMKILN_1_OFFSET))(this, a1);
		}
		*/

	};
