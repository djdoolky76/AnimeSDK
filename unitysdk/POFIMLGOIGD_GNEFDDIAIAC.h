#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define POFIMLGOIGD_GNEFDDIAIAC_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1CB5B4B0)
#define POFIMLGOIGD_GNEFDDIAIAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5B550)

inline static constexpr unsigned int POFIMLGOIGD_GNEFDDIAIAC_TypeDefinitionIndex = 57472;

class POFIMLGOIGD_GNEFDDIAIAC : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* LFDMMNDBPMM; // 0x88
	::LJHFMILANJA_1<::System::Boolean>* LMEMFDGPIAO; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_GNEFDDIAIAC__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_GNEFDDIAIAC_ONCREATEPROPERTY_OFFSET))(this);
	}
};
