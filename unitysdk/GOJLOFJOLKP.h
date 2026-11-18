#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define GOJLOFJOLKP_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x16F0FAB0)
#define GOJLOFJOLKP_EIMKFKGAHBN_OFFSET UNITYSDK_OFFSET(0x16F0FAC0)
#define GOJLOFJOLKP_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x16F0FB20)
#define GOJLOFJOLKP_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x16F0FAA0)
#define GOJLOFJOLKP_ONATTACH_OFFSET UNITYSDK_OFFSET(0x17A0A7E0)
#define GOJLOFJOLKP_ONDETACH_OFFSET UNITYSDK_OFFSET(0x16F0FA20)
#define GOJLOFJOLKP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17A0AA10)
#define GOJLOFJOLKP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0FA60)

inline static constexpr unsigned int GOJLOFJOLKP_TypeDefinitionIndex = 91747;

class GOJLOFJOLKP
{
public:
	::MoleMole::EntityHandle LEOKEOFNDLH; // 0x28
	::System::Int32 PPDBNKKPGMD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJLOFJOLKP__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJLOFJOLKP_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJLOFJOLKP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJLOFJOLKP_ONDETACH_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJLOFJOLKP_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJLOFJOLKP_AFBHCNCIKEK_OFFSET))(this);
	}

	::MoleMole::EntityHandle EIMKFKGAHBN()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJLOFJOLKP_EIMKFKGAHBN_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJLOFJOLKP_KDOIBCBFBAG_OFFSET))(this);
	}
};
