#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJCHCMEFPIF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LKMLFIAKFOO_AHKLJIKNBNO;
class PLPHBLLCFBF;

#define LKMLFIAKFOO_DFEDIGHMFJA_LPFIBPBNOEO_OFFSET UNITYSDK_OFFSET(0x1258E6B0)
#define LKMLFIAKFOO_DFEDIGHMFJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1258E6A0)

inline static constexpr unsigned int LKMLFIAKFOO_DFEDIGHMFJA_TypeDefinitionIndex = 43599;

class LKMLFIAKFOO_DFEDIGHMFJA : public ::System::Object
{
public:
	::DJCHCMEFPIF ILALNFMPPCH; // 0x10
	::LKMLFIAKFOO_AHKLJIKNBNO* FGBNBFHOKAA; // 0x28
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_DFEDIGHMFJA__CTOR_OFFSET))(this);
	}

	::System::Void LPFIBPBNOEO(::PLPHBLLCFBF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PLPHBLLCFBF*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_DFEDIGHMFJA_LPFIBPBNOEO_OFFSET))(this, GLAOEHCGCFO);
	}
};
