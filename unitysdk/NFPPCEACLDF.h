#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIAHBFKKOHH.h"
#include "unitysdk/System/Object.h"

class MBNHGIMGNHE;
namespace System { class String; }

#define NFPPCEACLDF_AEDNKNBMDDA_OFFSET UNITYSDK_OFFSET(0x1E5E8980)
#define NFPPCEACLDF_HJGMMAOPHPH_OFFSET UNITYSDK_OFFSET(0x1E5EE790)
#define NFPPCEACLDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EEE80)

inline static constexpr unsigned int NFPPCEACLDF_TypeDefinitionIndex = 34082;

class NFPPCEACLDF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPCEACLDF__CTOR_OFFSET))(this);
	}

	::MBNHGIMGNHE* AEDNKNBMDDA(::System::String* CJBJONJDOLI, ::DIAHBFKKOHH GHNAFBPJNKB)
	{
		return ((::MBNHGIMGNHE*(*)(::PVOID, ::System::String*, ::DIAHBFKKOHH))((::PBYTE)hIl2Cpp + NFPPCEACLDF_AEDNKNBMDDA_OFFSET))(this, CJBJONJDOLI, GHNAFBPJNKB);
	}

	::System::Boolean HJGMMAOPHPH(::System::String* CJBJONJDOLI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFPPCEACLDF_HJGMMAOPHPH_OFFSET))(this, CJBJONJDOLI);
	}
};
