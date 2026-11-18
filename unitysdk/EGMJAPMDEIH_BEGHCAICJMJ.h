#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class EventArgs; }

#define EGMJAPMDEIH_BEGHCAICJMJ_OHIDFHDFFHC_OFFSET UNITYSDK_OFFSET(0x169976B0)
#define EGMJAPMDEIH_BEGHCAICJMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x169976A0)

inline static constexpr unsigned int EGMJAPMDEIH_BEGHCAICJMJ_TypeDefinitionIndex = 49032;

class EGMJAPMDEIH_BEGHCAICJMJ : public ::System::Object
{
public:
	::MoleMole::UIBubbleTips* HMDKKCKDOFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_BEGHCAICJMJ__CTOR_OFFSET))(this);
	}

	::System::Void OHIDFHDFFHC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_BEGHCAICJMJ_OHIDFHDFFHC_OFFSET))(this, KOIBHLHLMFC);
	}
};
