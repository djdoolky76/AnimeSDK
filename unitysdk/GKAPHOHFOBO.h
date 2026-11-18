#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AICPGKGMMEH;
class CFKBMBMJGAH;

#define GKAPHOHFOBO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17A0E110)
#define GKAPHOHFOBO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0E100)

inline static constexpr unsigned int GKAPHOHFOBO_TypeDefinitionIndex = 67759;

class GKAPHOHFOBO : public ::System::Object
{
public:
	::CFKBMBMJGAH* DEKJDEPKKLH; // 0x10

	::System::Void _ctor(::CFKBMBMJGAH* DEKJDEPKKLH)
	{
		return ((::System::Void(*)(::PVOID, ::CFKBMBMJGAH*))((::PBYTE)hIl2Cpp + GKAPHOHFOBO__CTOR_OFFSET))(this, DEKJDEPKKLH);
	}

	::AICPGKGMMEH* PPIFNHNGCGO()
	{
		return ((::AICPGKGMMEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAPHOHFOBO_PPIFNHNGCGO_OFFSET))(this);
	}
};
