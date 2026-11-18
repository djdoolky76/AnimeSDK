#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMFICBDLJKB;
class LHIOGJMEIEI;

#define LKFBOILOCMN_AFDGBAIBBEM_GODAEOEMJNP_OFFSET UNITYSDK_OFFSET(0x13CF8E60)
#define LKFBOILOCMN_AFDGBAIBBEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF8E50)

inline static constexpr unsigned int LKFBOILOCMN_AFDGBAIBBEM_TypeDefinitionIndex = 82643;

class LKFBOILOCMN_AFDGBAIBBEM : public ::System::Object
{
public:
	::System::Int32 HFKPDCHKNFD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_AFDGBAIBBEM__CTOR_OFFSET))(this);
	}

	::CMFICBDLJKB* GODAEOEMJNP(::LHIOGJMEIEI* BDHOILPIGKB)
	{
		return ((::CMFICBDLJKB*(*)(::PVOID, ::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_AFDGBAIBBEM_GODAEOEMJNP_OFFSET))(this, BDHOILPIGKB);
	}
};
