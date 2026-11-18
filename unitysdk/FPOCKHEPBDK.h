#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define FPOCKHEPBDK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x116CB5C0)
#define FPOCKHEPBDK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x116CB530)
#define FPOCKHEPBDK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x116CB4A0)
#define FPOCKHEPBDK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x116CB610)
#define FPOCKHEPBDK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x116CB390)
#define FPOCKHEPBDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x116CB420)
#define FPOCKHEPBDK__CTOR_OFFSET UNITYSDK_OFFSET(0x116CB490)

inline static constexpr unsigned int FPOCKHEPBDK_TypeDefinitionIndex = 69469;

class FPOCKHEPBDK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC5; // 0x0
	::System::String* KIHGNGKBADE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPOCKHEPBDK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOCKHEPBDK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOCKHEPBDK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOCKHEPBDK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOCKHEPBDK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FPOCKHEPBDK_CNHBDOMKKDE_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOCKHEPBDK_OHFHFOHMBJH_OFFSET))(this);
	}
};
