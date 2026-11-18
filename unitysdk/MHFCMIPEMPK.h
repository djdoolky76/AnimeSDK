#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MHFCMIPEMPK_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x13D2DF50)
#define MHFCMIPEMPK_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x13D2DF20)
#define MHFCMIPEMPK_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x13D2DF30)
#define MHFCMIPEMPK__CTOR_OFFSET UNITYSDK_OFFSET(0x13D2DF40)

inline static constexpr unsigned int MHFCMIPEMPK_TypeDefinitionIndex = 90367;

class MHFCMIPEMPK : public ::System::Object
{
public:
	::System::Boolean EFKDEFHFDOK; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 FBOLAIHCENH; // 0x14

	::System::Void _ctor(::System::UInt32 ACHBBPJIBIE, ::System::UInt32 ALOEAIAIHMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MHFCMIPEMPK__CTOR_OFFSET))(this, ACHBBPJIBIE, ALOEAIAIHMA);
	}

	::System::UInt32 MEKEHBEEBPO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFCMIPEMPK_MEKEHBEEBPO_OFFSET))(this);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFCMIPEMPK_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean GLEJMKLOMBP(::System::Action* KLHOIOCCHMI, ::System::Action* LOJFLJJAKFJ, ::System::Action* OLBAKFLBNIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MHFCMIPEMPK_GLEJMKLOMBP_OFFSET))(this, KLHOIOCCHMI, LOJFLJJAKFJ, OLBAKFLBNIG);
	}
};
