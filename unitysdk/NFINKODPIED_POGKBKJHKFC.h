#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define NFINKODPIED_POGKBKJHKFC_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13142730)
#define NFINKODPIED_POGKBKJHKFC_EFACAPKKDMC_OFFSET UNITYSDK_OFFSET(0x13142800)
#define NFINKODPIED_POGKBKJHKFC_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x13142850)
#define NFINKODPIED_POGKBKJHKFC_KLOFGFLEKLK_OFFSET UNITYSDK_OFFSET(0x13142720)
#define NFINKODPIED_POGKBKJHKFC__CTOR_OFFSET UNITYSDK_OFFSET(0x13142710)

inline static constexpr unsigned int NFINKODPIED_POGKBKJHKFC_TypeDefinitionIndex = 41012;

class NFINKODPIED_POGKBKJHKFC : public ::System::Object
{
public:
	::System::Boolean INCJBCNMOMA; // 0x10
	::System::Boolean GMIOKJBNNGF; // 0x11
	::System::Byte _padding0[0x2];
	::System::Single CAOBKAHAOKI; // 0x14
	::System::Int32 KPFIDGLPNOL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFINKODPIED_POGKBKJHKFC__CTOR_OFFSET))(this);
	}

	::System::Boolean KLOFGFLEKLK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFINKODPIED_POGKBKJHKFC_KLOFGFLEKLK_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Battle::Entity* JKELDNKGNDI, ::System::Int32 IHPHIAGFKOH, ::System::Single CAOBKAHAOKI, ::System::Boolean INCJBCNMOMA, ::System::Boolean GNIIGDIGFEL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NFINKODPIED_POGKBKJHKFC_CNHBDOMKKDE_OFFSET))(this, JKELDNKGNDI, IHPHIAGFKOH, CAOBKAHAOKI, INCJBCNMOMA, GNIIGDIGFEL);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFINKODPIED_POGKBKJHKFC_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void EFACAPKKDMC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFINKODPIED_POGKBKJHKFC_EFACAPKKDMC_OFFSET))(this, EGEGIMGMJHN);
	}
};
