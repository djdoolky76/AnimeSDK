#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EBNNGMLLPII.h"

class GPNLCMANEMN_KPLBFLCIHPI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPNLCMANEMN_KAAGCOOPHOP_OBGDDOBJOHF_OFFSET UNITYSDK_OFFSET(0x18168A30)
#define GPNLCMANEMN_KAAGCOOPHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x18168A20)

inline static constexpr unsigned int GPNLCMANEMN_KAAGCOOPHOP_TypeDefinitionIndex = 39845;

class GPNLCMANEMN_KAAGCOOPHOP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MJODCBFMDMM; // 0x10
	::GPNLCMANEMN_KPLBFLCIHPI* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLCMANEMN_KAAGCOOPHOP__CTOR_OFFSET))(this);
	}

	::System::Void OBGDDOBJOHF(::EBNNGMLLPII IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::EBNNGMLLPII))((::PBYTE)hIl2Cpp + GPNLCMANEMN_KAAGCOOPHOP_OBGDDOBJOHF_OFFSET))(this, IGAAKDOIPNN);
	}
};
