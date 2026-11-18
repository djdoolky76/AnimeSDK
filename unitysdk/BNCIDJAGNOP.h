#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }

#define BNCIDJAGNOP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xF7B5790)
#define BNCIDJAGNOP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xF7B5660)
#define BNCIDJAGNOP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xF7B55B0)
#define BNCIDJAGNOP_GHNFMFOFMHG_OFFSET UNITYSDK_OFFSET(0xF7B5C80)
#define BNCIDJAGNOP_KOGPKKOCMKK_OFFSET UNITYSDK_OFFSET(0xF7B5C70)
#define BNCIDJAGNOP_LAJIHDEKNME_OFFSET UNITYSDK_OFFSET(0xF7B5650)
#define BNCIDJAGNOP_NJPJMJODGBL_OFFSET UNITYSDK_OFFSET(0xF7B5640)
#define BNCIDJAGNOP_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xF7B56F0)
#define BNCIDJAGNOP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xF7B5480)
#define BNCIDJAGNOP__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7B5520)
#define BNCIDJAGNOP__CTOR_OFFSET UNITYSDK_OFFSET(0xF7B55A0)

inline static constexpr unsigned int BNCIDJAGNOP_TypeDefinitionIndex = 49220;

class BNCIDJAGNOP : public ::ENGKPGFGGLM
{
public:
	static ::System::UInt64* StaticGet_BIJIPJPJJPJ()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(BNCIDJAGNOP_TypeDefinitionIndex)->GetStaticField(0x136B0);
	}
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE7; // 0x0
	::MoleMole::Config::ConfigEntitySkill* NICOKFMIMJH; // 0x20
	::System::String* _LHPFIHLMMGE_k__BackingField; // 0x28
	::System::UInt64 _MJCLEEHGLGF_k__BackingField; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNCIDJAGNOP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCIDJAGNOP__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCIDJAGNOP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCIDJAGNOP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void NJPJMJODGBL(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BNCIDJAGNOP_NJPJMJODGBL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LAJIHDEKNME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCIDJAGNOP_LAJIHDEKNME_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCIDJAGNOP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCIDJAGNOP_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* LLNCKEENHDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BNCIDJAGNOP_CNHBDOMKKDE_OFFSET))(this, LLNCKEENHDH);
	}

	::System::Void KOGPKKOCMKK(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BNCIDJAGNOP_KOGPKKOCMKK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt64 GHNFMFOFMHG()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCIDJAGNOP_GHNFMFOFMHG_OFFSET))(this);
	}
};
