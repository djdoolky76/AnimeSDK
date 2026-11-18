#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGPAGDNPMKJ.h"

namespace System { class String; }

#define FHNGFLPOMIN_BAEFFPCNJBE_OFFSET UNITYSDK_OFFSET(0xBB432B0)
#define FHNGFLPOMIN_GAJCBFAIGFH_OFFSET UNITYSDK_OFFSET(0xBB432A0)
#define FHNGFLPOMIN__CTOR_OFFSET UNITYSDK_OFFSET(0xBB43290)

inline static constexpr unsigned int FHNGFLPOMIN_TypeDefinitionIndex = 77727;

class FHNGFLPOMIN : public ::NGPAGDNPMKJ
{
public:
	::System::String* _MBIOPDPAPDM_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNGFLPOMIN__CTOR_OFFSET))(this);
	}

	::System::String* GAJCBFAIGFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNGFLPOMIN_GAJCBFAIGFH_OFFSET))(this);
	}

	::System::Void BAEFFPCNJBE(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FHNGFLPOMIN_BAEFFPCNJBE_OFFSET))(this, EGEGIMGMJHN);
	}
};
