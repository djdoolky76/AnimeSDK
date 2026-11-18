#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MLFNDKLHDIM_BIFLHNIADHM_OFFSET UNITYSDK_OFFSET(0x1A699B70)
#define MLFNDKLHDIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A699B30)

inline static constexpr unsigned int MLFNDKLHDIM_TypeDefinitionIndex = 65172;

class MLFNDKLHDIM : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* FFJGPKNMBBP; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>* HNDJNLIKPJG; // 0x18
	::System::Boolean AEGHEAEBBOC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFNDKLHDIM__CTOR_OFFSET))(this);
	}

	::System::Boolean BIFLHNIADHM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFNDKLHDIM_BIFLHNIADHM_OFFSET))(this);
	}
};
