#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EMKNLNNLNKE;
class JAODHHPIKGJ;

#define EMKNLNNLNKE___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x187E7120)
#define EMKNLNNLNKE___C__DISPLAYCLASS18_0___FIXOCCLUDEDPLAYERDEPTH_B__0_OFFSET UNITYSDK_OFFSET(0x187F0120)

inline static constexpr unsigned int EMKNLNNLNKE___c__DisplayClass18_0_TypeDefinitionIndex = 79118;

	class EMKNLNNLNKE___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::JAODHHPIKGJ* board; // 0x10
		::EMKNLNNLNKE* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FixOccludedPlayerDepth_b__0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EMKNLNNLNKE___C__DISPLAYCLASS18_0___FIXOCCLUDEDPLAYERDEPTH_B__0_OFFSET))(this, a1, a2);
		}

	};
