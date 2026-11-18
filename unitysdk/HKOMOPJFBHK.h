#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGGCCFOCCBK.h"

class ALHNBFMOJPK;

#define HKOMOPJFBHK_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x16CF9890)
#define HKOMOPJFBHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CF96A0)
#define HKOMOPJFBHK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16CF9750)
#define HKOMOPJFBHK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF9790)

inline static constexpr unsigned int HKOMOPJFBHK_TypeDefinitionIndex = 83906;

class HKOMOPJFBHK : public ::FGGCCFOCCBK
{
public:
	::ALHNBFMOJPK* NDKNDACKALM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOMOPJFBHK__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOMOPJFBHK_DISPOSE_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOMOPJFBHK_PHOADBJGFBE_OFFSET))(this);
	}

	static ::HKOMOPJFBHK* COKNIICCODC()
	{
		return ((::HKOMOPJFBHK*(*)())((::PBYTE)hIl2Cpp + HKOMOPJFBHK_COKNIICCODC_OFFSET))();
	}
};
