#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKMCFFKLLKE;
class NELNIMNNGCK;

#define CPGKIKINDJM_OLNMDNEFECM_DECNGMNNIPK_OFFSET UNITYSDK_OFFSET(0x19731CB0)
#define CPGKIKINDJM_OLNMDNEFECM__CTOR_OFFSET UNITYSDK_OFFSET(0x19731CA0)

inline static constexpr unsigned int CPGKIKINDJM_OLNMDNEFECM_TypeDefinitionIndex = 61848;

class CPGKIKINDJM_OLNMDNEFECM : public ::System::Object
{
public:
	::NELNIMNNGCK* OILPBPIMIDA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGKIKINDJM_OLNMDNEFECM__CTOR_OFFSET))(this);
	}

	::System::Boolean DECNGMNNIPK(::JKMCFFKLLKE* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::JKMCFFKLLKE*))((::PBYTE)hIl2Cpp + CPGKIKINDJM_OLNMDNEFECM_DECNGMNNIPK_OFFSET))(this, IPMMCGDMODG);
	}
};
