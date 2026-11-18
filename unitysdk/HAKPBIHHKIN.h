#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define HAKPBIHHKIN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14D09C10)
#define HAKPBIHHKIN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14D09C60)
#define HAKPBIHHKIN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14D09AE0)
#define HAKPBIHHKIN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14D09B70)
#define HAKPBIHHKIN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14D099D0)
#define HAKPBIHHKIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D09A60)
#define HAKPBIHHKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14D09AD0)

inline static constexpr unsigned int HAKPBIHHKIN_TypeDefinitionIndex = 82664;

class HAKPBIHHKIN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC4; // 0x0
	::System::String* KIHGNGKBADE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAKPBIHHKIN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKPBIHHKIN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKPBIHHKIN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKPBIHHKIN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKPBIHHKIN_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HAKPBIHHKIN_CNHBDOMKKDE_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKPBIHHKIN_FIGPAOKNJLN_OFFSET))(this);
	}
};
