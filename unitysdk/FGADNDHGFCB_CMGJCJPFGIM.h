#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAHAIEHANOH.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define FGADNDHGFCB_CMGJCJPFGIM_LCEHPFBPKBN_OFFSET UNITYSDK_OFFSET(0x16185D60)
#define FGADNDHGFCB_CMGJCJPFGIM__CTOR_OFFSET UNITYSDK_OFFSET(0x16185D50)

inline static constexpr unsigned int FGADNDHGFCB_CMGJCJPFGIM_TypeDefinitionIndex = 48751;

class FGADNDHGFCB_CMGJCJPFGIM : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* LGIANJKAEIE; // 0x10
	::System::Action* GDJCIGAKMOD; // 0x18
	::System::Single APBNGHKCCJF; // 0x20
	::System::Single AMFLJNELLKH; // 0x24
	::System::Single JEOHKNNMJPO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADNDHGFCB_CMGJCJPFGIM__CTOR_OFFSET))(this);
	}

	::System::Void LCEHPFBPKBN(::DAHAIEHANOH OMJHEHJJHML)
	{
		return ((::System::Void(*)(::PVOID, ::DAHAIEHANOH))((::PBYTE)hIl2Cpp + FGADNDHGFCB_CMGJCJPFGIM_LCEHPFBPKBN_OFFSET))(this, OMJHEHJJHML);
	}
};
