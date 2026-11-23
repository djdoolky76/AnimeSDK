#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FF1001379F73B8E1_E9ADA79A89FC09B5.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AAF95C9CE8DF069C_E936E0FD60282964_BE6FDD3F63EDD878_E11D47127FBA32D9_OFFSET UNITYSDK_OFFSET(0x2A437B0)
#define AAF95C9CE8DF069C_E936E0FD60282964_BE6FDD3F63EDD878__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AAF95C9CE8DF069C_E936E0FD60282964_BE6FDD3F63EDD878_TypeDefinitionIndex = 18336;

class AAF95C9CE8DF069C_E936E0FD60282964_BE6FDD3F63EDD878 : public ::System::Object
{
public:
	::FF1001379F73B8E1_E9ADA79A89FC09B5 FF9A37DE513AC35B; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAF95C9CE8DF069C_E936E0FD60282964_BE6FDD3F63EDD878__CTOR_OFFSET))(this);
	}

	::System::Boolean E11D47127FBA32D9(::System::Collections::Generic::List_1<::System::Object*>* BBCFEC7DB309E927)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AAF95C9CE8DF069C_E936E0FD60282964_BE6FDD3F63EDD878_E11D47127FBA32D9_OFFSET))(this, BBCFEC7DB309E927);
	}
};
