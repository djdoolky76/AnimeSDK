#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class CBOOMCHNIBO;

#define DLFEOEGLCLE_PNFKKALEMFP_GJAJDBBLBIP_OFFSET UNITYSDK_OFFSET(0x16BA6870)
#define DLFEOEGLCLE_PNFKKALEMFP__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA6860)

inline static constexpr unsigned int DLFEOEGLCLE_PNFKKALEMFP_TypeDefinitionIndex = 54551;

class DLFEOEGLCLE_PNFKKALEMFP : public ::System::Object
{
public:
	::System::Int32 KADKBFIFBII; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFEOEGLCLE_PNFKKALEMFP__CTOR_OFFSET))(this);
	}

	::System::Boolean GJAJDBBLBIP(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::CBOOMCHNIBO*> LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::CBOOMCHNIBO*>))((::PBYTE)hIl2Cpp + DLFEOEGLCLE_PNFKKALEMFP_GJAJDBBLBIP_OFFSET))(this, LJBPECKCCEA);
	}
};
