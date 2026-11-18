#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJBCKEGMPIN;
class KOOEOIGFICM;

#define AKNNIKCLGMD_JCJNHFHKHID_OFFSET UNITYSDK_OFFSET(0x16D8D8A0)
#define AKNNIKCLGMD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16D8D7A0)
#define AKNNIKCLGMD__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8D790)

inline static constexpr unsigned int AKNNIKCLGMD_TypeDefinitionIndex = 54066;

class AKNNIKCLGMD : public ::System::Object
{
public:
	::KOOEOIGFICM* BBLJMPHGLIG; // 0x10

	::System::Void _ctor(::KOOEOIGFICM* LGCJCGIHNAP)
	{
		return ((::System::Void(*)(::PVOID, ::KOOEOIGFICM*))((::PBYTE)hIl2Cpp + AKNNIKCLGMD__CTOR_OFFSET))(this, LGCJCGIHNAP);
	}

	::System::Void _ctor_1(::System::Int32 HNJAHOFCGMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKNNIKCLGMD__CTOR_1_OFFSET))(this, HNJAHOFCGMK);
	}

	::BJBCKEGMPIN* JCJNHFHKHID()
	{
		return ((::BJBCKEGMPIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNNIKCLGMD_JCJNHFHKHID_OFFSET))(this);
	}
};
