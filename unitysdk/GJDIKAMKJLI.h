#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDAHJPLCIFN.h"
#include "unitysdk/ENFLEEPLNPC.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define GJDIKAMKJLI_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x15F23640)
#define GJDIKAMKJLI_NLLNNHIMGDM_OFFSET UNITYSDK_OFFSET(0x15F23780)
#define GJDIKAMKJLI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F23630)

inline static constexpr unsigned int GJDIKAMKJLI_TypeDefinitionIndex = 89014;

class GJDIKAMKJLI : public ::JDAHJPLCIFN
{
public:
	::System::Int32 JAILIACJMJM; // 0x18

	::System::Void _ctor(::System::Int32 LFAFAKOPACE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GJDIKAMKJLI__CTOR_OFFSET))(this, LFAFAKOPACE);
	}

	::ENFLEEPLNPC IAFHBCHLBME(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> HLFFCMIFFIB)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + GJDIKAMKJLI_IAFHBCHLBME_OFFSET))(this, HLFFCMIFFIB);
	}

	::ENFLEEPLNPC NLLNNHIMGDM(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> MIALFKCCCPI)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + GJDIKAMKJLI_NLLNNHIMGDM_OFFSET))(this, MIALFKCCCPI);
	}
};
