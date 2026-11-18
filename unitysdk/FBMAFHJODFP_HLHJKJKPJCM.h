#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMAFHJODFP_NNHBOLIENOA;
class IKAFOFHODOJ;
class MonoUITableScrollV2;

#define FBMAFHJODFP_HLHJKJKPJCM_BIFGKPGJCIJ_OFFSET UNITYSDK_OFFSET(0x16174E00)
#define FBMAFHJODFP_HLHJKJKPJCM__CTOR_OFFSET UNITYSDK_OFFSET(0x16174DF0)

inline static constexpr unsigned int FBMAFHJODFP_HLHJKJKPJCM_TypeDefinitionIndex = 76179;

class FBMAFHJODFP_HLHJKJKPJCM : public ::System::Object
{
public:
	::FBMAFHJODFP_NNHBOLIENOA* KGFKHBMEKBL; // 0x10
	::MonoUITableScrollV2* LAOANOKHCAH; // 0x18
	::IKAFOFHODOJ* AAOCANGHBDG; // 0x20
	::System::Int32 LMIDKFFPBFJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_HLHJKJKPJCM__CTOR_OFFSET))(this);
	}

	::System::Void BIFGKPGJCIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_HLHJKJKPJCM_BIFGKPGJCIJ_OFFSET))(this);
	}
};
