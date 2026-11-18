#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFOAFKKLMFN;

#define FAPIPMFEAMA_COMPARE_OFFSET UNITYSDK_OFFSET(0x16171440)
#define FAPIPMFEAMA__CTOR_OFFSET UNITYSDK_OFFSET(0x161714D0)

inline static constexpr unsigned int FAPIPMFEAMA_TypeDefinitionIndex = 77851;

class FAPIPMFEAMA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPIPMFEAMA__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::OFOAFKKLMFN* FFKBEGIHIGG, ::OFOAFKKLMFN* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OFOAFKKLMFN*, ::OFOAFKKLMFN*))((::PBYTE)hIl2Cpp + FAPIPMFEAMA_COMPARE_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
