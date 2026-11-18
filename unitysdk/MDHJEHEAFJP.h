#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKLDFGHAKP.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define MDHJEHEAFJP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x107409C0)
#define MDHJEHEAFJP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x10740AD0)
#define MDHJEHEAFJP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x10740930)
#define MDHJEHEAFJP_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x10740A30)
#define MDHJEHEAFJP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10740820)
#define MDHJEHEAFJP__CCTOR_OFFSET UNITYSDK_OFFSET(0x107408B0)
#define MDHJEHEAFJP__CTOR_OFFSET UNITYSDK_OFFSET(0x10740920)

inline static constexpr unsigned int MDHJEHEAFJP_TypeDefinitionIndex = 84806;

class MDHJEHEAFJP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x111; // 0x0
	::System::String* KIHGNGKBADE; // 0x20
	::System::Int32 EAHEOHODAOE; // 0x28
	::System::UInt32 PCMPAJENALI; // 0x2C
	::ABKLDFGHAKP JLOCDKHBDDL; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDHJEHEAFJP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHJEHEAFJP__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHJEHEAFJP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHJEHEAFJP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::ABKLDFGHAKP OIJJADCMKIK, ::System::Int32 LACIBNOPNLI, ::System::UInt32 IKIOJEPCKPM, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::ABKLDFGHAKP, ::System::Int32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MDHJEHEAFJP_CNHBDOMKKDE_OFFSET))(this, OIJJADCMKIK, LACIBNOPNLI, IKIOJEPCKPM, AELLPLBJELA);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHJEHEAFJP_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHJEHEAFJP_FIGPAOKNJLN_OFFSET))(this);
	}
};
