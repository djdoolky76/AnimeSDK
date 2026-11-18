#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNCFCFIKCF.h"

class HGAJKHIMKJP;
namespace System { class Action; }

#define HJGNHOPCGKD_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x14D30AB0)
#define HJGNHOPCGKD__CTOR_OFFSET UNITYSDK_OFFSET(0x14D30AA0)

inline static constexpr unsigned int HJGNHOPCGKD_TypeDefinitionIndex = 60100;

class HJGNHOPCGKD : public ::IPNCFCFIKCF
{
public:
	::HGAJKHIMKJP* CIGPHKMLGCL; // 0x18
	::HGAJKHIMKJP* HNKPNNEJBAD; // 0x20

	::System::Void _ctor(::HGAJKHIMKJP* HNKPNNEJBAD, ::HGAJKHIMKJP* CIGPHKMLGCL)
	{
		return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + HJGNHOPCGKD__CTOR_OFFSET))(this, HNKPNNEJBAD, CIGPHKMLGCL);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HJGNHOPCGKD_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}
};
