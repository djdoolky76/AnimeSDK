#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class EJOBOHPOCIO;
namespace System { class String; }

#define MKFNBHDICNJ_NJCFOJKNBFK_INDCKCLNLHA_OFFSET UNITYSDK_OFFSET(0x151E7FC0)
#define MKFNBHDICNJ_NJCFOJKNBFK__CTOR_OFFSET UNITYSDK_OFFSET(0x151E7FB0)

inline static constexpr unsigned int MKFNBHDICNJ_NJCFOJKNBFK_TypeDefinitionIndex = 61357;

class MKFNBHDICNJ_NJCFOJKNBFK : public ::System::Object
{
public:
	::System::String* AOCOIDIMLIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_NJCFOJKNBFK__CTOR_OFFSET))(this);
	}

	::System::Boolean INDCKCLNLHA(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::EJOBOHPOCIO*> LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::EJOBOHPOCIO*>))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_NJCFOJKNBFK_INDCKCLNLHA_OFFSET))(this, LJBPECKCCEA);
	}
};
