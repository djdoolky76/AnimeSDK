#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOODDJHJIL.h"

class OGGDNMKMCCL;

#define CBNNFELPKKO_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x199F2360)
#define CBNNFELPKKO_HMPCBKDIKAD_OFFSET UNITYSDK_OFFSET(0x199F24E0)
#define CBNNFELPKKO_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x199F2370)
#define CBNNFELPKKO__CTOR_OFFSET UNITYSDK_OFFSET(0x199F24C0)

inline static constexpr unsigned int CBNNFELPKKO_TypeDefinitionIndex = 85874;

class CBNNFELPKKO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNFELPKKO__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNFELPKKO_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNFELPKKO_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Boolean HMPCBKDIKAD(::OGGDNMKMCCL* MNDIBLLFAJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::OGGDNMKMCCL*))((::PBYTE)hIl2Cpp + CBNNFELPKKO_HMPCBKDIKAD_OFFSET))(this, MNDIBLLFAJI);
	}
};
