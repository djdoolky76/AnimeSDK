#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OEEMDJPPNBM;
namespace MoleMole::Battle { class Entity; }

#define OEEMDJPPNBM_CFDHGDFMCHB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xB3131B0)
#define OEEMDJPPNBM_CFDHGDFMCHB_EFACAPKKDMC_OFFSET UNITYSDK_OFFSET(0xB3134C0)
#define OEEMDJPPNBM_CFDHGDFMCHB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0xB312F30)
#define OEEMDJPPNBM_CFDHGDFMCHB_KLOFGFLEKLK_OFFSET UNITYSDK_OFFSET(0xB3131A0)
#define OEEMDJPPNBM_CFDHGDFMCHB__CTOR_OFFSET UNITYSDK_OFFSET(0xB312F20)

inline static constexpr unsigned int OEEMDJPPNBM_CFDHGDFMCHB_TypeDefinitionIndex = 83487;

class OEEMDJPPNBM_CFDHGDFMCHB : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* JKELDNKGNDI; // 0x10
	::OEEMDJPPNBM* FHKIIDIIPCA; // 0x18
	::System::Single CAOBKAHAOKI; // 0x20
	::System::Int32 KPFIDGLPNOL; // 0x24
	::System::Boolean GMIOKJBNNGF; // 0x28
	::System::Boolean INCJBCNMOMA; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMDJPPNBM_CFDHGDFMCHB__CTOR_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMDJPPNBM_CFDHGDFMCHB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Boolean KLOFGFLEKLK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMDJPPNBM_CFDHGDFMCHB_KLOFGFLEKLK_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Battle::Entity* JKELDNKGNDI, ::System::Int32 IHPHIAGFKOH, ::System::Single CAOBKAHAOKI, ::System::Boolean INCJBCNMOMA, ::System::Boolean GNIIGDIGFEL, ::OEEMDJPPNBM* GEPPIAEJLFH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OEEMDJPPNBM_CFDHGDFMCHB_CNHBDOMKKDE_OFFSET))(this, JKELDNKGNDI, IHPHIAGFKOH, CAOBKAHAOKI, INCJBCNMOMA, GNIIGDIGFEL, GEPPIAEJLFH);
	}

	::System::Void EFACAPKKDMC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEEMDJPPNBM_CFDHGDFMCHB_EFACAPKKDMC_OFFSET))(this, EGEGIMGMJHN);
	}
};
