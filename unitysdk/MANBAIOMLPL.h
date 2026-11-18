#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJKEHBEHDPC.h"
#include "unitysdk/GPPMPHICDEA_AEEEADLPPKI.h"

namespace System { class String; }

#define MANBAIOMLPL_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x16C6EAD0)
#define MANBAIOMLPL_NLLNNHIMGDM_OFFSET UNITYSDK_OFFSET(0x16C6EBD0)
#define MANBAIOMLPL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6EAC0)

inline static constexpr unsigned int MANBAIOMLPL_TypeDefinitionIndex = 54137;

class MANBAIOMLPL : public ::AJKEHBEHDPC
{
public:
	::System::Int32 NNJLKKPJDPP; // 0x18

	::System::Void _ctor(::System::Int32 MMNMGBLGCMO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MANBAIOMLPL__CTOR_OFFSET))(this, MMNMGBLGCMO);
	}

	::GPPMPHICDEA_AEEEADLPPKI IAFHBCHLBME(::System::String* OKCDMBLEBAC)
	{
		return ((::GPPMPHICDEA_AEEEADLPPKI(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MANBAIOMLPL_IAFHBCHLBME_OFFSET))(this, OKCDMBLEBAC);
	}

	::GPPMPHICDEA_AEEEADLPPKI NLLNNHIMGDM(::System::String* MIALFKCCCPI)
	{
		return ((::GPPMPHICDEA_AEEEADLPPKI(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MANBAIOMLPL_NLLNNHIMGDM_OFFSET))(this, MIALFKCCCPI);
	}
};
