#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define ADFEA894F4307CDF__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ADFEA894F4307CDF_TypeDefinitionIndex = 8044;

class ADFEA894F4307CDF : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* E5912411119A0BCC; // 0x38
	::AB642D1382756991* A6EA8EC986A6C161; // 0x40
	::System::UInt32 BFF852035A425406; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEA894F4307CDF__CTOR_OFFSET))(this);
	}
};
