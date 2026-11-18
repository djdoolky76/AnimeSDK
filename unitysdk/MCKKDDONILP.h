#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIFIHLLHLIO.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MCKKDDONILP_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x177A09F0)
#define MCKKDDONILP_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x177A09C0)
#define MCKKDDONILP_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x177A09D0)
#define MCKKDDONILP__CTOR_OFFSET UNITYSDK_OFFSET(0x177A09E0)

inline static constexpr unsigned int MCKKDDONILP_TypeDefinitionIndex = 60814;

class MCKKDDONILP : public ::System::Object
{
public:
	::LIFIHLLHLIO IPPIPGDHAMH; // 0x10
	::System::Boolean EFKDEFHFDOK; // 0x14
	::System::Byte _padding0[0x3];
	::System::UInt32 FBOLAIHCENH; // 0x18

	::System::Void _ctor(::System::UInt32 ACHBBPJIBIE, ::System::UInt32 ALOEAIAIHMA, ::LIFIHLLHLIO IOOMCPPPKFN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::LIFIHLLHLIO))((::PBYTE)hIl2Cpp + MCKKDDONILP__CTOR_OFFSET))(this, ACHBBPJIBIE, ALOEAIAIHMA, IOOMCPPPKFN);
	}

	::System::UInt32 MEKEHBEEBPO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKKDDONILP_MEKEHBEEBPO_OFFSET))(this);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKKDDONILP_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean GLEJMKLOMBP(::System::Action* KLHOIOCCHMI, ::System::Action* LOJFLJJAKFJ, ::System::Action* OLBAKFLBNIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MCKKDDONILP_GLEJMKLOMBP_OFFSET))(this, KLHOIOCCHMI, LOJFLJJAKFJ, OLBAKFLBNIG);
	}
};
