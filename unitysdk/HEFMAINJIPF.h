#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJKEHBEHDPC.h"
#include "unitysdk/GPPMPHICDEA_AEEEADLPPKI.h"

namespace System { class String; }

#define HEFMAINJIPF_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x1407EBD0)
#define HEFMAINJIPF_NLLNNHIMGDM_OFFSET UNITYSDK_OFFSET(0x1407ED10)
#define HEFMAINJIPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1407EBC0)

inline static constexpr unsigned int HEFMAINJIPF_TypeDefinitionIndex = 83158;

class HEFMAINJIPF : public ::AJKEHBEHDPC
{
public:
	::System::Int32 JAILIACJMJM; // 0x18

	::System::Void _ctor(::System::Int32 LFAFAKOPACE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEFMAINJIPF__CTOR_OFFSET))(this, LFAFAKOPACE);
	}

	::GPPMPHICDEA_AEEEADLPPKI IAFHBCHLBME(::System::String* OKCDMBLEBAC)
	{
		return ((::GPPMPHICDEA_AEEEADLPPKI(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEFMAINJIPF_IAFHBCHLBME_OFFSET))(this, OKCDMBLEBAC);
	}

	::GPPMPHICDEA_AEEEADLPPKI NLLNNHIMGDM(::System::String* MIALFKCCCPI)
	{
		return ((::GPPMPHICDEA_AEEEADLPPKI(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEFMAINJIPF_NLLNNHIMGDM_OFFSET))(this, MIALFKCCCPI);
	}
};
