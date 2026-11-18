#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/DynamicCheckTreeDataEntry.h"

namespace MoleMole { class ConfigDynamicCheckTree; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJABAHALDAG_FIJBHMIPAOI_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1699EB50)
#define EJABAHALDAG_FIJBHMIPAOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1699EB40)

inline static constexpr unsigned int EJABAHALDAG_FIJBHMIPAOI_TypeDefinitionIndex = 57908;

class EJABAHALDAG_FIJBHMIPAOI : public ::System::Object
{
public:
	::System::Int32 GIBDHABECBD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJABAHALDAG_FIJBHMIPAOI__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>* KEJJKECGLOP)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>*))((::PBYTE)hIl2Cpp + EJABAHALDAG_FIJBHMIPAOI_FLIAEJGDMLI_OFFSET))(this, KEJJKECGLOP);
	}
};
