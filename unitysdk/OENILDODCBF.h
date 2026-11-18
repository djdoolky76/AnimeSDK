#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;

#define OENILDODCBF_CGCKPKBGCJN_OFFSET UNITYSDK_OFFSET(0xFD689D0)
#define OENILDODCBF_KJAGHJFDHGP_OFFSET UNITYSDK_OFFSET(0xFD689E0)
#define OENILDODCBF__CTOR_OFFSET UNITYSDK_OFFSET(0xFD689C0)

inline static constexpr unsigned int OENILDODCBF_TypeDefinitionIndex = 52964;

class OENILDODCBF : public ::System::Object
{
public:
	::FMHDMLBDIJC* _PENFGHPBEAI_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OENILDODCBF__CTOR_OFFSET))(this);
	}

	::System::Void CGCKPKBGCJN(::FMHDMLBDIJC* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + OENILDODCBF_CGCKPKBGCJN_OFFSET))(this, EGEGIMGMJHN);
	}

	::FMHDMLBDIJC* KJAGHJFDHGP()
	{
		return ((::FMHDMLBDIJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OENILDODCBF_KJAGHJFDHGP_OFFSET))(this);
	}
};
