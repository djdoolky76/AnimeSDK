#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define AAOLIANJHJE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11B85860)
#define AAOLIANJHJE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11B857D0)
#define AAOLIANJHJE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B85750)
#define AAOLIANJHJE__CTOR_OFFSET UNITYSDK_OFFSET(0x11B857C0)

inline static constexpr unsigned int AAOLIANJHJE_TypeDefinitionIndex = 81827;

class AAOLIANJHJE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x8F; // 0x0
	::System::String* KIHGNGKBADE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAOLIANJHJE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOLIANJHJE__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOLIANJHJE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOLIANJHJE_FIGPAOKNJLN_OFFSET))(this);
	}
};
