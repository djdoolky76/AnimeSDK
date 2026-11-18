#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLNGLIBJBID;
class EHDGBEIJAAE;
namespace System { class Action; }

#define EHDGBEIJAAE_NEMAPBPHDLI_DFMJNDGELHB_OFFSET UNITYSDK_OFFSET(0x10F2CBE0)
#define EHDGBEIJAAE_NEMAPBPHDLI_GEAGADFJEMP_OFFSET UNITYSDK_OFFSET(0x10F2CBD0)
#define EHDGBEIJAAE_NEMAPBPHDLI__CTOR_OFFSET UNITYSDK_OFFSET(0x10F2CBC0)

inline static constexpr unsigned int EHDGBEIJAAE_NEMAPBPHDLI_TypeDefinitionIndex = 86508;

class EHDGBEIJAAE_NEMAPBPHDLI : public ::System::Object
{
public:
	::EHDGBEIJAAE* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::Action* KCNFHMFDOHI; // 0x20
	::System::Int32 HKHHHJHCGKL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDGBEIJAAE_NEMAPBPHDLI__CTOR_OFFSET))(this);
	}

	::System::Void GEAGADFJEMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDGBEIJAAE_NEMAPBPHDLI_GEAGADFJEMP_OFFSET))(this);
	}

	::System::Void DFMJNDGELHB(::BLNGLIBJBID* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::BLNGLIBJBID*))((::PBYTE)hIl2Cpp + EHDGBEIJAAE_NEMAPBPHDLI_DFMJNDGELHB_OFFSET))(this, DJCNCELJPOM);
	}
};
