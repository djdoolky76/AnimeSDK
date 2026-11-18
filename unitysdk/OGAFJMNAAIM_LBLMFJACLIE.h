#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGAFJMNAAIM_LBLMFJACLIE_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x985270)

inline static constexpr unsigned int OGAFJMNAAIM_LBLMFJACLIE_TypeDefinitionIndex = 96663;

struct alignas(8) OGAFJMNAAIM_LBLMFJACLIE
{
	::System::Int32 LIMIDNAFNLI; // 0x10
	::System::Int32 EFHGEDCHNDG; // 0x14
	::System::Collections::Generic::List_1<::System::Object*>* FHHKNDHKADN; // 0x18

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_LBLMFJACLIE_JJEJHGOJOII_OFFSET))(this);
	}
};
