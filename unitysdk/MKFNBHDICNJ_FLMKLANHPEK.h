#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class EJOBOHPOCIO;
namespace System { class String; }

#define MKFNBHDICNJ_FLMKLANHPEK_FNNHPCGFJIL_OFFSET UNITYSDK_OFFSET(0x151E6ED0)
#define MKFNBHDICNJ_FLMKLANHPEK__CTOR_OFFSET UNITYSDK_OFFSET(0x151E6EC0)

inline static constexpr unsigned int MKFNBHDICNJ_FLMKLANHPEK_TypeDefinitionIndex = 61374;

class MKFNBHDICNJ_FLMKLANHPEK : public ::System::Object
{
public:
	::System::String* AOCOIDIMLIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FLMKLANHPEK__CTOR_OFFSET))(this);
	}

	::System::Boolean FNNHPCGFJIL(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::EJOBOHPOCIO*> LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::EJOBOHPOCIO*>))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FLMKLANHPEK_FNNHPCGFJIL_OFFSET))(this, LJBPECKCCEA);
	}
};
