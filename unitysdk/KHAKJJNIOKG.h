#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHAKJJNIOKG_NCGAIGHMGGN_OFFSET UNITYSDK_OFFSET(0x1A2CB0C0)
#define KHAKJJNIOKG_PFLGMEACMMF_OFFSET UNITYSDK_OFFSET(0x1A2CB0B0)
#define KHAKJJNIOKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CB0D0)

inline static constexpr unsigned int KHAKJJNIOKG_TypeDefinitionIndex = 39482;

class KHAKJJNIOKG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAKJJNIOKG__CTOR_OFFSET))(this);
	}

	::System::Boolean PFLGMEACMMF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAKJJNIOKG_PFLGMEACMMF_OFFSET))(this);
	}

	::System::Boolean NCGAIGHMGGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAKJJNIOKG_NCGAIGHMGGN_OFFSET))(this);
	}
};
