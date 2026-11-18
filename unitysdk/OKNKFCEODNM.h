#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIFIHLLHLIO.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OKNKFCEODNM_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0xFD8D880)
#define OKNKFCEODNM_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0xFD8D850)
#define OKNKFCEODNM_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0xFD8D860)
#define OKNKFCEODNM__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8D870)

inline static constexpr unsigned int OKNKFCEODNM_TypeDefinitionIndex = 88760;

class OKNKFCEODNM : public ::System::Object
{
public:
	::System::Boolean EFKDEFHFDOK; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 BBHHCCKBKOP; // 0x14
	::System::UInt32 FBOLAIHCENH; // 0x18
	::LIFIHLLHLIO EGLOACKDKEP; // 0x1C

	::System::Void _ctor(::System::UInt32 ACHBBPJIBIE, ::System::UInt32 MDPGLDEFMJF, ::System::UInt32 OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OKNKFCEODNM__CTOR_OFFSET))(this, ACHBBPJIBIE, MDPGLDEFMJF, OBNIAHNMHPF);
	}

	::System::UInt32 MEKEHBEEBPO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNKFCEODNM_MEKEHBEEBPO_OFFSET))(this);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNKFCEODNM_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean GLEJMKLOMBP(::System::Action* KLHOIOCCHMI, ::System::Action* LOJFLJJAKFJ, ::System::Action* OLBAKFLBNIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + OKNKFCEODNM_GLEJMKLOMBP_OFFSET))(this, KLHOIOCCHMI, LOJFLJJAKFJ, OLBAKFLBNIG);
	}
};
