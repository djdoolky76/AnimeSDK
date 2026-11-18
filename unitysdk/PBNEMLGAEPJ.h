#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PBNEMLGAEPJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x19496060)
#define PBNEMLGAEPJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x194960A0)
#define PBNEMLGAEPJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x19495FD0)
#define PBNEMLGAEPJ_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x19496130)
#define PBNEMLGAEPJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19495EE0)
#define PBNEMLGAEPJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x19495F50)
#define PBNEMLGAEPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19495FC0)

inline static constexpr unsigned int PBNEMLGAEPJ_TypeDefinitionIndex = 82049;

class PBNEMLGAEPJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x160; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBNEMLGAEPJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNEMLGAEPJ__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNEMLGAEPJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNEMLGAEPJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNEMLGAEPJ_CNHBDOMKKDE_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNEMLGAEPJ_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNEMLGAEPJ_OHFHFOHMBJH_OFFSET))(this);
	}
};
