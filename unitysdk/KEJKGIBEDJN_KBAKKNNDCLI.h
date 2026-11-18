#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KDCJGMCBEOF;

#define KEJKGIBEDJN_KBAKKNNDCLI_BNEHJCCCGNJ_OFFSET UNITYSDK_OFFSET(0x17B77190)
#define KEJKGIBEDJN_KBAKKNNDCLI__CTOR_OFFSET UNITYSDK_OFFSET(0x17B77180)

inline static constexpr unsigned int KEJKGIBEDJN_KBAKKNNDCLI_TypeDefinitionIndex = 67230;

class KEJKGIBEDJN_KBAKKNNDCLI : public ::System::Object
{
public:
	::System::UInt32 OIKFFGKDHME; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJKGIBEDJN_KBAKKNNDCLI__CTOR_OFFSET))(this);
	}

	::System::Boolean BNEHJCCCGNJ(::KDCJGMCBEOF* DEKJDEPKKLH)
	{
		return ((::System::Boolean(*)(::PVOID, ::KDCJGMCBEOF*))((::PBYTE)hIl2Cpp + KEJKGIBEDJN_KBAKKNNDCLI_BNEHJCCCGNJ_OFFSET))(this, DEKJDEPKKLH);
	}
};
