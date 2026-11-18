#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }

#define OMGNKIHGADJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16C1E5D0)
#define OMGNKIHGADJ_DAMAFCMFDDF_OFFSET UNITYSDK_OFFSET(0x16C1E0A0)
#define OMGNKIHGADJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16C1E540)
#define OMGNKIHGADJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16C1E010)
#define OMGNKIHGADJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C1DF90)
#define OMGNKIHGADJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1E000)

inline static constexpr unsigned int OMGNKIHGADJ_TypeDefinitionIndex = 73563;

class OMGNKIHGADJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE8; // 0x0
	::System::String* LLNCKEENHDH; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMGNKIHGADJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGNKIHGADJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGNKIHGADJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::MoleMole::Config::ConfigEntitySkill* DAMAFCMFDDF()
	{
		return ((::MoleMole::Config::ConfigEntitySkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGNKIHGADJ_DAMAFCMFDDF_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGNKIHGADJ_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* LLNCKEENHDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OMGNKIHGADJ_CNHBDOMKKDE_OFFSET))(this, LLNCKEENHDH);
	}
};
