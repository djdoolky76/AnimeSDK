#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MEPPHAHDFLB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1852F4A0)
#define MEPPHAHDFLB_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1852F1D0)
#define MEPPHAHDFLB_IMNBLBOEGHE_OFFSET UNITYSDK_OFFSET(0x1852F180)
#define MEPPHAHDFLB_LILIMFNNKBE_OFFSET UNITYSDK_OFFSET(0x1852FB80)
#define MEPPHAHDFLB_OFHHELIKKOB_OFFSET UNITYSDK_OFFSET(0x1852F640)
#define MEPPHAHDFLB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1852F190)
#define MEPPHAHDFLB_POEIOKIDPHC_OFFSET UNITYSDK_OFFSET(0x1852FB70)
#define MEPPHAHDFLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1852F490)

inline static constexpr unsigned int MEPPHAHDFLB_TypeDefinitionIndex = 41985;

class MEPPHAHDFLB : public ::System::Object
{
public:
	::MoleMole::EntityHandle GPIMHALPPEP; // 0x10
	::MoleMole::EntityHandle KEHECMCDLFC; // 0x20
	::MoleMole::EntityHandle BHMLIFIKCEL; // 0x30
	::System::UInt32 _IGHCJKPIHOJ_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPPHAHDFLB__CTOR_OFFSET))(this);
	}

	::System::UInt32 IMNBLBOEGHE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPPHAHDFLB_IMNBLBOEGHE_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPPHAHDFLB_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPPHAHDFLB_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::EntityHandle KHGFAKJKDGG, ::MoleMole::EntityHandle HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MEPPHAHDFLB_BBOMJDBNHIC_OFFSET))(this, KHGFAKJKDGG, HODAIDNDKHD);
	}

	::System::Void POEIOKIDPHC(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEPPHAHDFLB_POEIOKIDPHC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OFHHELIKKOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPPHAHDFLB_OFHHELIKKOB_OFFSET))(this);
	}

	::System::Void LILIMFNNKBE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MEPPHAHDFLB_LILIMFNNKBE_OFFSET))(this, KECKGDFIALJ);
	}
};
