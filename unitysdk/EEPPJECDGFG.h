#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDigibooEffect_EffectAction; }
namespace MoleMole { class ConfigDigibooEffect_EffectActionContext; }
namespace MoleMole { class ConfigDigibooEffect_EffectGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEPPJECDGFG_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x10F279E0)
#define EEPPJECDGFG_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x10F27D50)
#define EEPPJECDGFG_BNFDOJPKBMO_OFFSET UNITYSDK_OFFSET(0x10F28000)
#define EEPPJECDGFG_CGIFEMOHKOB_OFFSET UNITYSDK_OFFSET(0x10F27ED0)
#define EEPPJECDGFG_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x10F28010)
#define EEPPJECDGFG_FICFMDGHOKJ_OFFSET UNITYSDK_OFFSET(0x10F27E40)
#define EEPPJECDGFG_FIGBMBALFHI_OFFSET UNITYSDK_OFFSET(0x10F27A40)
#define EEPPJECDGFG_JBBIPBEJGEO_OFFSET UNITYSDK_OFFSET(0x10F27E30)
#define EEPPJECDGFG_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x10F27B70)
#define EEPPJECDGFG_KJEOPCHJHHI_OFFSET UNITYSDK_OFFSET(0x10F27BC0)
#define EEPPJECDGFG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x10F27A50)
#define EEPPJECDGFG_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x10F27B10)
#define EEPPJECDGFG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x10F27E50)
#define EEPPJECDGFG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10F27900)
#define EEPPJECDGFG__CTOR_OFFSET UNITYSDK_OFFSET(0x10F27880)

inline static constexpr unsigned int EEPPJECDGFG_TypeDefinitionIndex = 81053;

class EEPPJECDGFG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* OLJJEJNFMDA; // 0x10
	::MoleMole::ConfigDigibooEffect_EffectActionContext* DAAAEJDBNFI; // 0x18
	::System::Int32 EBHLMLGJIHA; // 0x20
	::System::Boolean CFJFMAELFHJ; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int32 _KMJAMBINFAK_k__BackingField; // 0x28
	::System::Single GDGLBEMHMIO; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::MoleMole::ConfigDigibooEffect_EffectGroup* KPNIHKEKDOC, ::MoleMole::ConfigDigibooEffect_EffectActionContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDigibooEffect_EffectGroup*, ::MoleMole::ConfigDigibooEffect_EffectActionContext*))((::PBYTE)hIl2Cpp + EEPPJECDGFG__CTOR_1_OFFSET))(this, KPNIHKEKDOC, AAOCANGHBDG);
	}

	::System::Void FIGBMBALFHI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEPPJECDGFG_FIGBMBALFHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::ConfigDigibooEffect_EffectActionContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDigibooEffect_EffectActionContext*))((::PBYTE)hIl2Cpp + EEPPJECDGFG_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::EEPPJECDGFG* AMEGHCHMIOD(::MoleMole::ConfigDigibooEffect_EffectGroup* KPNIHKEKDOC, ::MoleMole::ConfigDigibooEffect_EffectActionContext* AAOCANGHBDG)
	{
		return ((::EEPPJECDGFG*(*)(::PVOID, ::MoleMole::ConfigDigibooEffect_EffectGroup*, ::MoleMole::ConfigDigibooEffect_EffectActionContext*))((::PBYTE)hIl2Cpp + EEPPJECDGFG_AMEGHCHMIOD_OFFSET))(this, KPNIHKEKDOC, AAOCANGHBDG);
	}

	::System::Void KJEOPCHJHHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG_KJEOPCHJHHI_OFFSET))(this);
	}

	::EEPPJECDGFG* ANPBCLAFCJB(::System::Single GKFMFCLMHJO, ::MoleMole::ConfigDigibooEffect_EffectAction* GJBHEJGENMI)
	{
		return ((::EEPPJECDGFG*(*)(::PVOID, ::System::Single, ::MoleMole::ConfigDigibooEffect_EffectAction*))((::PBYTE)hIl2Cpp + EEPPJECDGFG_ANPBCLAFCJB_OFFSET))(this, GKFMFCLMHJO, GJBHEJGENMI);
	}

	::System::Single JBBIPBEJGEO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG_JBBIPBEJGEO_OFFSET))(this);
	}

	::System::Int32 FICFMDGHOKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG_FICFMDGHOKJ_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EEPPJECDGFG_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean BNFDOJPKBMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG_BNFDOJPKBMO_OFFSET))(this);
	}

	::System::Void CGIFEMOHKOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG_CGIFEMOHKOB_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG_EDEFLFIKNFK_OFFSET))(this);
	}
};
