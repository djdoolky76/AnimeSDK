#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBCAFPHKEGJ;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DBCAFPHKEGJ_NOGKFIAIBLB_CJJNAAEPNMA_OFFSET UNITYSDK_OFFSET(0x1689AA20)
#define DBCAFPHKEGJ_NOGKFIAIBLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1689AA10)

inline static constexpr unsigned int DBCAFPHKEGJ_NOGKFIAIBLB_TypeDefinitionIndex = 80097;

class DBCAFPHKEGJ_NOGKFIAIBLB : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::System::Object*>* MAAJIABHNMI; // 0x10
	::DBCAFPHKEGJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAFPHKEGJ_NOGKFIAIBLB__CTOR_OFFSET))(this);
	}

	::System::Void CJJNAAEPNMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAFPHKEGJ_NOGKFIAIBLB_CJJNAAEPNMA_OFFSET))(this);
	}
};
