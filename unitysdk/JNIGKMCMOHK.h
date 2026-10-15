#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define JNIGKMCMOHK_CDEKGCBDEGP_OFFSET UNITYSDK_OFFSET(0xB282C00)
#define JNIGKMCMOHK_KDMFMIFMBFI_OFFSET UNITYSDK_OFFSET(0xB282B00)
#define JNIGKMCMOHK_LLKPNINALOJ_OFFSET UNITYSDK_OFFSET(0xB282B90)

inline static constexpr unsigned int JNIGKMCMOHK_TypeDefinitionIndex = 62169;

	class JNIGKMCMOHK : public ::System::Object
	{
	public:
		static ::System::Boolean KDMFMIFMBFI(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JNIGKMCMOHK_KDMFMIFMBFI_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LLKPNINALOJ(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JNIGKMCMOHK_LLKPNINALOJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean CDEKGCBDEGP(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JNIGKMCMOHK_CDEKGCBDEGP_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
