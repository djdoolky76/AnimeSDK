#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDAHJPLCIFN.h"
#include "unitysdk/ENFLEEPLNPC.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define MHODPBBHJLC_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x151D4460)
#define MHODPBBHJLC_NLLNNHIMGDM_OFFSET UNITYSDK_OFFSET(0x151D4640)
#define MHODPBBHJLC__CTOR_OFFSET UNITYSDK_OFFSET(0x151D4620)

inline static constexpr unsigned int MHODPBBHJLC_TypeDefinitionIndex = 81287;

class MHODPBBHJLC : public ::JDAHJPLCIFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHODPBBHJLC__CTOR_OFFSET))(this);
	}

	::ENFLEEPLNPC IAFHBCHLBME(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> HLFFCMIFFIB)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + MHODPBBHJLC_IAFHBCHLBME_OFFSET))(this, HLFFCMIFFIB);
	}

	::ENFLEEPLNPC NLLNNHIMGDM(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> MIALFKCCCPI)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + MHODPBBHJLC_NLLNNHIMGDM_OFFSET))(this, MIALFKCCCPI);
	}
};
