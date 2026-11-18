#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBEEELCGJOA;

#define HCHNAGJOFHJ_EKMPAEIDMFB_KHDBFNOJNKI_OFFSET UNITYSDK_OFFSET(0x1E237F30)
#define HCHNAGJOFHJ_EKMPAEIDMFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E237F20)

inline static constexpr unsigned int HCHNAGJOFHJ_EKMPAEIDMFB_TypeDefinitionIndex = 94279;

class HCHNAGJOFHJ_EKMPAEIDMFB : public ::System::Object
{
public:
	::DBEEELCGJOA* KHGFAKJKDGG; // 0x10
	::DBEEELCGJOA* HODAIDNDKHD; // 0x18
	::System::Single NCCDJLDKFGA; // 0x20
	::System::Int32 ELHMOANKHFM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNAGJOFHJ_EKMPAEIDMFB__CTOR_OFFSET))(this);
	}

	::System::Boolean KHDBFNOJNKI(::DBEEELCGJOA* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::DBEEELCGJOA*))((::PBYTE)hIl2Cpp + HCHNAGJOFHJ_EKMPAEIDMFB_KHDBFNOJNKI_OFFSET))(this, KECKGDFIALJ);
	}
};
