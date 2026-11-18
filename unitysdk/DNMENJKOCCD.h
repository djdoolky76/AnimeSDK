#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDAHJPLCIFN.h"
#include "unitysdk/ENFLEEPLNPC.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define DNMENJKOCCD_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x1346B220)
#define DNMENJKOCCD_NLLNNHIMGDM_OFFSET UNITYSDK_OFFSET(0x1346B2F0)
#define DNMENJKOCCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1346B2D0)

inline static constexpr unsigned int DNMENJKOCCD_TypeDefinitionIndex = 39023;

class DNMENJKOCCD : public ::JDAHJPLCIFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMENJKOCCD__CTOR_OFFSET))(this);
	}

	::ENFLEEPLNPC IAFHBCHLBME(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> HLFFCMIFFIB)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + DNMENJKOCCD_IAFHBCHLBME_OFFSET))(this, HLFFCMIFFIB);
	}

	::ENFLEEPLNPC NLLNNHIMGDM(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> MIALFKCCCPI)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + DNMENJKOCCD_NLLNNHIMGDM_OFFSET))(this, MIALFKCCCPI);
	}
};
