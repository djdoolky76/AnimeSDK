#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLHFONBEAAN.h"

#define EBPMCNHHLGG_HHOEHPBKOOK_OFFSET UNITYSDK_OFFSET(0x7FE54C0)
#define EBPMCNHHLGG_JOPMDABIAHJ_OFFSET UNITYSDK_OFFSET(0x7FE5480)
#define EBPMCNHHLGG_OHDPCOIOMGF_OFFSET UNITYSDK_OFFSET(0x7FE5470)
#define EBPMCNHHLGG__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE5430)

inline static constexpr unsigned int EBPMCNHHLGG_TypeDefinitionIndex = 74447;

class EBPMCNHHLGG : public ::OLHFONBEAAN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMCNHHLGG__CTOR_OFFSET))(this);
	}

	::System::Boolean OHDPCOIOMGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMCNHHLGG_OHDPCOIOMGF_OFFSET))(this);
	}

	::System::Void JOPMDABIAHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMCNHHLGG_JOPMDABIAHJ_OFFSET))(this);
	}

	::System::Void HHOEHPBKOOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMCNHHLGG_HHOEHPBKOOK_OFFSET))(this);
	}
};
