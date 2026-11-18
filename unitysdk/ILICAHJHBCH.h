#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageAligmentPref.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

#define ILICAHJHBCH_LMBMJLHBGFP_OFFSET UNITYSDK_OFFSET(0x197D6A90)

inline static constexpr unsigned int ILICAHJHBCH_TypeDefinitionIndex = 86198;

class ILICAHJHBCH : public ::System::Object
{
public:
	static ::UnityEngine::TextAnchor LMBMJLHBGFP(::MoleMole::Config::LanguageAligmentPref HHMJCEPHHEJ, ::UnityEngine::TextAnchor CMOAFEHMILK)
	{
		return ((::UnityEngine::TextAnchor(*)(::MoleMole::Config::LanguageAligmentPref, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + ILICAHJHBCH_LMBMJLHBGFP_OFFSET))(HHMJCEPHHEJ, CMOAFEHMILK);
	}
};
