#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FPCDIEMCECL_BMELMLDCGPP_GFINJGGBNIG_OFFSET UNITYSDK_OFFSET(0x11D92340)
#define FPCDIEMCECL_BMELMLDCGPP__CTOR_OFFSET UNITYSDK_OFFSET(0x11D92330)

inline static constexpr unsigned int FPCDIEMCECL_BMELMLDCGPP_TypeDefinitionIndex = 53815;

class FPCDIEMCECL_BMELMLDCGPP : public ::System::Object
{
public:
	::System::Int32 LCODNODIOEB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCDIEMCECL_BMELMLDCGPP__CTOR_OFFSET))(this);
	}

	::System::Boolean GFINJGGBNIG(::System::UInt32 EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPCDIEMCECL_BMELMLDCGPP_GFINJGGBNIG_OFFSET))(this, EJCBEJMGFAJ);
	}
};
