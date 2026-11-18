#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PEPGAFEGEME;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJGGKEEDAMC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF49D0)

inline static constexpr unsigned int HJGGKEEDAMC_TypeDefinitionIndex = 56190;

class HJGGKEEDAMC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::PEPGAFEGEME*>* PPKCIDGFOAD; // 0x10
	::System::Int32 JBMMGBOMDCO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGGKEEDAMC__CTOR_OFFSET))(this);
	}
};
