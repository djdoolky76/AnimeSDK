#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LEFFOBDDLPC;

#define JAJHAJEHPON_JDIIAFPBKMJ_JCBMHDCGPAL_OFFSET UNITYSDK_OFFSET(0x19891E80)
#define JAJHAJEHPON_JDIIAFPBKMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19891E70)

inline static constexpr unsigned int JAJHAJEHPON_JDIIAFPBKMJ_TypeDefinitionIndex = 55484;

class JAJHAJEHPON_JDIIAFPBKMJ : public ::System::Object
{
public:
	::System::Int32 HPNDBOCDBMC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHAJEHPON_JDIIAFPBKMJ__CTOR_OFFSET))(this);
	}

	::System::Boolean JCBMHDCGPAL(::LEFFOBDDLPC* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::LEFFOBDDLPC*))((::PBYTE)hIl2Cpp + JAJHAJEHPON_JDIIAFPBKMJ_JCBMHDCGPAL_OFFSET))(this, HMMMOCJAEOA);
	}
};
