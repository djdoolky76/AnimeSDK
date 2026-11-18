#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDAHJPLCIFN.h"
#include "unitysdk/ENFLEEPLNPC.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define FMKEAFDDOPP_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x14AE26C0)
#define FMKEAFDDOPP_NLLNNHIMGDM_OFFSET UNITYSDK_OFFSET(0x14AE2780)
#define FMKEAFDDOPP__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE2760)

inline static constexpr unsigned int FMKEAFDDOPP_TypeDefinitionIndex = 50447;

class FMKEAFDDOPP : public ::JDAHJPLCIFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKEAFDDOPP__CTOR_OFFSET))(this);
	}

	::ENFLEEPLNPC IAFHBCHLBME(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> HLFFCMIFFIB)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + FMKEAFDDOPP_IAFHBCHLBME_OFFSET))(this, HLFFCMIFFIB);
	}

	::ENFLEEPLNPC NLLNNHIMGDM(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> MIALFKCCCPI)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + FMKEAFDDOPP_NLLNNHIMGDM_OFFSET))(this, MIALFKCCCPI);
	}
};
