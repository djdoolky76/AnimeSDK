#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class LGFJMNEABJP_1;
template <typename T> class LJHFMILANJA_1;

#define NBENMFKMJID_HEGJOICCGND_OFFSET UNITYSDK_OFFSET(0xE567110)
#define NBENMFKMJID_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xE567000)
#define NBENMFKMJID__CTOR_OFFSET UNITYSDK_OFFSET(0xE5670A0)

inline static constexpr unsigned int NBENMFKMJID_TypeDefinitionIndex = 74414;

class NBENMFKMJID : public ::JJEJBPGJPJN
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MELKPDMOCKG; // 0x88
	::LGFJMNEABJP_1<::System::Int32>* DDIJEBOPFCI; // 0x90
	::LJHFMILANJA_1<::System::Boolean>* NDAFIEODGMA; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBENMFKMJID__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBENMFKMJID_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void HEGJOICCGND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBENMFKMJID_HEGJOICCGND_OFFSET))(this);
	}
};
