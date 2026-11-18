#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDGHPCBNKMP_APOJOKBLEHC.h"
#include "unitysdk/LDGHPCBNKMP_FMLOCLLKGNL.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDGHPCBNKMP_CJMNDDJPCNI_CAJIIJCKLOC_OFFSET UNITYSDK_OFFSET(0x771EA0)

inline static constexpr unsigned int LDGHPCBNKMP_CJMNDDJPCNI_TypeDefinitionIndex = 72759;

struct alignas(8) LDGHPCBNKMP_CJMNDDJPCNI
{
	::LDGHPCBNKMP_FMLOCLLKGNL HNPIKCPLFEA; // 0x10
	::LDGHPCBNKMP_APOJOKBLEHC ENDKPBEFBME; // 0x14
	::System::Collections::Generic::List_1<::System::Object*>* KJOGFHNFOEO; // 0x18
	::System::Int64 FENHAOMJJJJ; // 0x20
	::System::Int64 AICHFKIBENF; // 0x28
	::System::Int32 OFFNPOFKIDM; // 0x30
	::System::Boolean ACCJHIEJKCG; // 0x34
	::System::Byte _padding0[0x3];
	::System::UInt32 PNFKKNJNIJO; // 0x38
	::System::UInt32 NLKHFMANFPF; // 0x3C

	::System::Boolean CAJIIJCKLOC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_CJMNDDJPCNI_CAJIIJCKLOC_OFFSET))(this);
	}
};
