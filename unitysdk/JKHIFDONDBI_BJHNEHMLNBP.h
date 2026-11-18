#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JKHIFDONDBI_BJHNEHMLNBP_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B7DC830)
#define JKHIFDONDBI_BJHNEHMLNBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7DC820)

inline static constexpr unsigned int JKHIFDONDBI_BJHNEHMLNBP_TypeDefinitionIndex = 11644;

class JKHIFDONDBI_BJHNEHMLNBP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIFDONDBI_BJHNEHMLNBP__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIFDONDBI_BJHNEHMLNBP_FBNBBPGPFHK_OFFSET))(this);
	}
};
