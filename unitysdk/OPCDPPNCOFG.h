#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDAHJPLCIFN.h"
#include "unitysdk/ENFLEEPLNPC.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define OPCDPPNCOFG_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x13A7D340)
#define OPCDPPNCOFG_NLLNNHIMGDM_OFFSET UNITYSDK_OFFSET(0x13A7D480)
#define OPCDPPNCOFG__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7D460)

inline static constexpr unsigned int OPCDPPNCOFG_TypeDefinitionIndex = 81704;

class OPCDPPNCOFG : public ::JDAHJPLCIFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCDPPNCOFG__CTOR_OFFSET))(this);
	}

	::ENFLEEPLNPC IAFHBCHLBME(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> HLFFCMIFFIB)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + OPCDPPNCOFG_IAFHBCHLBME_OFFSET))(this, HLFFCMIFFIB);
	}

	::ENFLEEPLNPC NLLNNHIMGDM(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> MIALFKCCCPI)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + OPCDPPNCOFG_NLLNNHIMGDM_OFFSET))(this, MIALFKCCCPI);
	}
};
