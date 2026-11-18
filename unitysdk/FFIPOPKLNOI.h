#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DNAJBNAHOCL.h"

class CJMLLONLLEG;

#define FFIPOPKLNOI_GOGKMFPPGMA_OFFSET UNITYSDK_OFFSET(0x1613D1A0)
#define FFIPOPKLNOI_NIFFLCPJHGP_OFFSET UNITYSDK_OFFSET(0x16184E90)
#define FFIPOPKLNOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1613C1C0)

inline static constexpr unsigned int FFIPOPKLNOI_TypeDefinitionIndex = 57722;

class FFIPOPKLNOI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIPOPKLNOI__CTOR_OFFSET))(this);
	}

	static ::DNAJBNAHOCL NIFFLCPJHGP(::CJMLLONLLEG* JKBLDFBGBPK)
	{
		return ((::DNAJBNAHOCL(*)(::CJMLLONLLEG*))((::PBYTE)hIl2Cpp + FFIPOPKLNOI_NIFFLCPJHGP_OFFSET))(JKBLDFBGBPK);
	}

	static ::DNAJBNAHOCL GOGKMFPPGMA(::CJMLLONLLEG* JKBLDFBGBPK)
	{
		return ((::DNAJBNAHOCL(*)(::CJMLLONLLEG*))((::PBYTE)hIl2Cpp + FFIPOPKLNOI_GOGKMFPPGMA_OFFSET))(JKBLDFBGBPK);
	}
};
