#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNCFCFIKCF.h"

class HGAJKHIMKJP;
namespace System { class Action; }

#define IHLCFNFIJJN_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0xF873E30)
#define IHLCFNFIJJN__CTOR_OFFSET UNITYSDK_OFFSET(0xF873E20)

inline static constexpr unsigned int IHLCFNFIJJN_TypeDefinitionIndex = 73097;

class IHLCFNFIJJN : public ::IPNCFCFIKCF
{
public:
	::HGAJKHIMKJP* IPMMCGDMODG; // 0x18
	::System::Boolean PAHDPPPMJIK; // 0x20

	::System::Void _ctor(::HGAJKHIMKJP* IPMMCGDMODG, ::System::Boolean PAHDPPPMJIK)
	{
		return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*, ::System::Boolean))((::PBYTE)hIl2Cpp + IHLCFNFIJJN__CTOR_OFFSET))(this, IPMMCGDMODG, PAHDPPPMJIK);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IHLCFNFIJJN_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}
};
