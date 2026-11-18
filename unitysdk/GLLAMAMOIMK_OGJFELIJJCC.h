#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIGFICFHODJ;
class NFKKIKBIFBC;

#define GLLAMAMOIMK_OGJFELIJJCC_KPNFOKNEGKP_OFFSET UNITYSDK_OFFSET(0x17AC6B00)
#define GLLAMAMOIMK_OGJFELIJJCC__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC6AF0)

inline static constexpr unsigned int GLLAMAMOIMK_OGJFELIJJCC_TypeDefinitionIndex = 85020;

class GLLAMAMOIMK_OGJFELIJJCC : public ::System::Object
{
public:
	::HIGFICFHODJ* GDINHGLCODO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAMAMOIMK_OGJFELIJJCC__CTOR_OFFSET))(this);
	}

	::System::Boolean KPNFOKNEGKP(::NFKKIKBIFBC* EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::NFKKIKBIFBC*))((::PBYTE)hIl2Cpp + GLLAMAMOIMK_OGJFELIJJCC_KPNFOKNEGKP_OFFSET))(this, EBFCACIEKBC);
	}
};
