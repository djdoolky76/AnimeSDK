#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class E7237933F9238A72; }

#define EA05C90B914805E7_E31030855479DAAF_B36CC4EF1E3C4BE1_OFFSET UNITYSDK_OFFSET(0x40F5F90)

namespace EA05C90B914805E7
{
	inline static constexpr unsigned int E31030855479DAAF_TypeDefinitionIndex = 20613;

	struct alignas(4) E31030855479DAAF
	{
		static ::UnityEngine::E7237933F9238A72** StaticGet_A63C7B5C7996E299()
		{
			return (::UnityEngine::E7237933F9238A72**)Il2CppClass::FromTypeDefinitionIndex(E31030855479DAAF_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::UnityEngine::E7237933F9238A72* B36CC4EF1E3C4BE1()
		{
			return ((::UnityEngine::E7237933F9238A72*(*)())((::PBYTE)hIl2Cpp + EA05C90B914805E7_E31030855479DAAF_B36CC4EF1E3C4BE1_OFFSET))();
		}
	};
}
