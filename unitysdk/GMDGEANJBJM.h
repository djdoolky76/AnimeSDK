#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/KJGBDMICDNO.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define GMDGEANJBJM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x149EDA20)
#define GMDGEANJBJM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x149EDAD0)
#define GMDGEANJBJM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x149ED8F0)
#define GMDGEANJBJM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x149ED980)
#define GMDGEANJBJM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x149ED6F0)
#define GMDGEANJBJM__CCTOR_OFFSET UNITYSDK_OFFSET(0x149ED800)
#define GMDGEANJBJM__CTOR_OFFSET UNITYSDK_OFFSET(0x149ED870)

inline static constexpr unsigned int GMDGEANJBJM_TypeDefinitionIndex = 38990;

class GMDGEANJBJM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xB2; // 0x0
	::MoleMole::EntityHandle OAAKLMFMODD; // 0x20
	::MoleMole::EntityHandle EFPMNKDBDIN; // 0x30
	::System::Boolean GILFBMKBDLA; // 0x40
	::System::Boolean GHNGFEINCMB; // 0x41
	::System::Byte _padding0[0x2];
	::KJGBDMICDNO FNMLEKOJHBD; // 0x44

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMDGEANJBJM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDGEANJBJM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDGEANJBJM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDGEANJBJM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDGEANJBJM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::KJGBDMICDNO ABOCGLAOJGC, ::MoleMole::EntityHandle LBGEPCOBGJA, ::MoleMole::EntityHandle MGBEAJDILAI, ::System::Boolean FNGCKIFABKO, ::System::Boolean JKHOAPOHNEE)
	{
		return ((::System::Void(*)(::PVOID, ::KJGBDMICDNO, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GMDGEANJBJM_CNHBDOMKKDE_OFFSET))(this, ABOCGLAOJGC, LBGEPCOBGJA, MGBEAJDILAI, FNGCKIFABKO, JKHOAPOHNEE);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDGEANJBJM_FIGPAOKNJLN_OFFSET))(this);
	}
};
