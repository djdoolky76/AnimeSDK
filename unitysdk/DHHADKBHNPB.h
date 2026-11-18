#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define DHHADKBHNPB_DMLPLAEMCIH_OFFSET UNITYSDK_OFFSET(0x12BB2620)
#define DHHADKBHNPB__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB2610)

inline static constexpr unsigned int DHHADKBHNPB_TypeDefinitionIndex = 71658;

class DHHADKBHNPB : public ::System::Attribute
{
public:
	::System::String* _GPFIABLBINF_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* GKBFENNFCDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHHADKBHNPB__CTOR_OFFSET))(this, GKBFENNFCDH);
	}

	::System::String* DMLPLAEMCIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHADKBHNPB_DMLPLAEMCIH_OFFSET))(this);
	}
};
