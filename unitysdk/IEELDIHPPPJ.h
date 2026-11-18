#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class MKIPOLBJCIP;

#define IEELDIHPPPJ_HOPGBGMDGNC_OFFSET UNITYSDK_OFFSET(0xEBB8F00)
#define IEELDIHPPPJ_LFFLCJLGNIM_OFFSET UNITYSDK_OFFSET(0xEBB8E60)
#define IEELDIHPPPJ_NAJJPKLOKPP_OFFSET UNITYSDK_OFFSET(0xEBB8EB0)
#define IEELDIHPPPJ__CTOR_OFFSET UNITYSDK_OFFSET(0xEBB8F50)

inline static constexpr unsigned int IEELDIHPPPJ_TypeDefinitionIndex = 38371;

class IEELDIHPPPJ : public ::System::Object
{
public:
	::MKIPOLBJCIP* KFEOOLIIOHF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEELDIHPPPJ__CTOR_OFFSET))(this);
	}

	::System::Void LFFLCJLGNIM(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + IEELDIHPPPJ_LFFLCJLGNIM_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void NAJJPKLOKPP(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + IEELDIHPPPJ_NAJJPKLOKPP_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void HOPGBGMDGNC(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + IEELDIHPPPJ_HOPGBGMDGNC_OFFSET))(this, LADPIPOMBJM);
	}
};
