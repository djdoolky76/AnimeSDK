#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJLCGNBIDJP;
class LEFFOBDDLPC;

#define JAJHAJEHPON_DIFKCFFILGL_ECKANLJAPDD_OFFSET UNITYSDK_OFFSET(0x153C97F0)
#define JAJHAJEHPON_DIFKCFFILGL_LKNFGACDNBP_OFFSET UNITYSDK_OFFSET(0x153C9820)
#define JAJHAJEHPON_DIFKCFFILGL__CTOR_OFFSET UNITYSDK_OFFSET(0x153C97E0)

inline static constexpr unsigned int JAJHAJEHPON_DIFKCFFILGL_TypeDefinitionIndex = 55487;

class JAJHAJEHPON_DIFKCFFILGL : public ::System::Object
{
public:
	::System::Int32 NPAKMAGBOCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHAJEHPON_DIFKCFFILGL__CTOR_OFFSET))(this);
	}

	::System::Boolean ECKANLJAPDD(::AJLCGNBIDJP* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AJLCGNBIDJP*))((::PBYTE)hIl2Cpp + JAJHAJEHPON_DIFKCFFILGL_ECKANLJAPDD_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Boolean LKNFGACDNBP(::LEFFOBDDLPC* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::LEFFOBDDLPC*))((::PBYTE)hIl2Cpp + JAJHAJEHPON_DIFKCFFILGL_LKNFGACDNBP_OFFSET))(this, HMMMOCJAEOA);
	}
};
