#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENFLEEPLNPC.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace UnityEngine::UI { class InputField; }

#define JDAHJPLCIFN_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x1382F930)
#define JDAHJPLCIFN_OMHDOHIHLLE_OFFSET UNITYSDK_OFFSET(0x1382FA10)
#define JDAHJPLCIFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1382F9F0)

inline static constexpr unsigned int JDAHJPLCIFN_TypeDefinitionIndex = 89535;

class JDAHJPLCIFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAHJPLCIFN__CTOR_OFFSET))(this);
	}

	::ENFLEEPLNPC IAFHBCHLBME(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> HLFFCMIFFIB)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + JDAHJPLCIFN_IAFHBCHLBME_OFFSET))(this, HLFFCMIFFIB);
	}

	static ::System::Char OMHDOHIHLLE(::ENFLEEPLNPC IGAAKDOIPNN, ::UnityEngine::UI::InputField* GBGGPHOFNOD)
	{
		return ((::System::Char(*)(::ENFLEEPLNPC, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + JDAHJPLCIFN_OMHDOHIHLLE_OFFSET))(IGAAKDOIPNN, GBGGPHOFNOD);
	}
};
