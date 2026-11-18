#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class EJOBOHPOCIO;
namespace System { class String; }

#define MKFNBHDICNJ_CEEOANKADMM_DHLFCBOFBKF_OFFSET UNITYSDK_OFFSET(0x151E5320)
#define MKFNBHDICNJ_CEEOANKADMM__CTOR_OFFSET UNITYSDK_OFFSET(0x151E5310)

inline static constexpr unsigned int MKFNBHDICNJ_CEEOANKADMM_TypeDefinitionIndex = 61366;

class MKFNBHDICNJ_CEEOANKADMM : public ::System::Object
{
public:
	::System::String* AOCOIDIMLIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CEEOANKADMM__CTOR_OFFSET))(this);
	}

	::System::Boolean DHLFCBOFBKF(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::EJOBOHPOCIO*> LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::EJOBOHPOCIO*>))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CEEOANKADMM_DHLFCBOFBKF_OFFSET))(this, LJBPECKCCEA);
	}
};
