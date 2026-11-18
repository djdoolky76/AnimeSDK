#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define ACGKOJAONKK_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x134A6D00)
#define ACGKOJAONKK_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x134A6CF0)
#define ACGKOJAONKK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x134A6BE0)
#define ACGKOJAONKK_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x134A6C50)
#define ACGKOJAONKK__CTOR_OFFSET UNITYSDK_OFFSET(0x134A6CB0)

inline static constexpr unsigned int ACGKOJAONKK_TypeDefinitionIndex = 82026;

class ACGKOJAONKK
{
public:
	::System::String* JLNDJPLFPCN; // 0x28
	::System::Single KIJJHGEPOII; // 0x30
	::System::Single GHICNNNMCCF; // 0x34
	::System::Single GDHEPDMCLIA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKOJAONKK__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKOJAONKK_ONENABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKOJAONKK_ONRECYCLE_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKOJAONKK_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGKOJAONKK_ANEOCOIFDDJ_OFFSET))(this);
	}
};
