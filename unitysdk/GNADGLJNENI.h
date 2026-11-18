#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define GNADGLJNENI_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x149F00D0)
#define GNADGLJNENI__CTOR_OFFSET UNITYSDK_OFFSET(0x149F01D0)

inline static constexpr unsigned int GNADGLJNENI_TypeDefinitionIndex = 93027;

class GNADGLJNENI : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::UInt32>* MDBHMJAHEOC; // 0x88
	::LJHFMILANJA_1<::System::Boolean>* JGDMLDDHLOG; // 0x90
	::LJHFMILANJA_1<::System::Int32>* CPJOCKNHLKA; // 0x98
	::LJHFMILANJA_1<::System::Int32>* LNBCFABCJKL; // 0xA0
	::LJHFMILANJA_1<::System::Int64>* AKGAAHDBJAM; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNADGLJNENI__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNADGLJNENI_ONCREATEPROPERTY_OFFSET))(this);
	}
};
