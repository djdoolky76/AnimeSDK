#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IJEABDMMNHK_FIANMFIIBPE.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LJJFHAHKFAK_HGEOOKNCDMA_MIIICKLNOOD_OFFSET UNITYSDK_OFFSET(0x16C5F090)
#define LJJFHAHKFAK_HGEOOKNCDMA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5F080)

inline static constexpr unsigned int LJJFHAHKFAK_HGEOOKNCDMA_TypeDefinitionIndex = 71455;

class LJJFHAHKFAK_HGEOOKNCDMA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* FHKLAIJJHKF; // 0x10
	::System::Int32 FOPHEPIFCGF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJFHAHKFAK_HGEOOKNCDMA__CTOR_OFFSET))(this);
	}

	::System::Boolean MIIICKLNOOD(::IJEABDMMNHK_FIANMFIIBPE LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::IJEABDMMNHK_FIANMFIIBPE))((::PBYTE)hIl2Cpp + LJJFHAHKFAK_HGEOOKNCDMA_MIIICKLNOOD_OFFSET))(this, LJBPECKCCEA);
	}
};
