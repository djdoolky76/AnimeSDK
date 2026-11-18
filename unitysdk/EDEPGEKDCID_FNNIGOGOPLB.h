#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define EDEPGEKDCID_FNNIGOGOPLB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13E71930)
#define EDEPGEKDCID_FNNIGOGOPLB__CTOR_OFFSET UNITYSDK_OFFSET(0x13E719B0)

inline static constexpr unsigned int EDEPGEKDCID_FNNIGOGOPLB_TypeDefinitionIndex = 62896;

class EDEPGEKDCID_FNNIGOGOPLB : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* OFAPEANJBEG; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEPGEKDCID_FNNIGOGOPLB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEPGEKDCID_FNNIGOGOPLB_ONCREATEPROPERTY_OFFSET))(this);
	}
};
