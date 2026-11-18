#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define PDKBBJBKOAB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14B941B0)
#define PDKBBJBKOAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14B94260)

inline static constexpr unsigned int PDKBBJBKOAB_TypeDefinitionIndex = 51283;

class PDKBBJBKOAB : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::UInt32>* NAOGDGGEOMI; // 0x88
	::LJHFMILANJA_1<::System::UInt32>* LOHPDJLJJEB; // 0x90
	::LJHFMILANJA_1<::System::UInt32>* HHEDININMLB; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBBJBKOAB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBBJBKOAB_ONCREATEPROPERTY_OFFSET))(this);
	}
};
