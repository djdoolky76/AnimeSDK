#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPMBELDBAJK_IOPBIONFEGA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboardObservation; }

#define EIAGEHNBONE_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x148F4DC0)
#define EIAGEHNBONE_DFMFGOCBFDE_OFFSET UNITYSDK_OFFSET(0x148F4EF0)
#define EIAGEHNBONE_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x148F4650)
#define EIAGEHNBONE_HFBIIOAFINB_OFFSET UNITYSDK_OFFSET(0x148F4E40)
#define EIAGEHNBONE_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x148F4E50)
#define EIAGEHNBONE_NKKODCHGHBA_OFFSET UNITYSDK_OFFSET(0x148F4EE0)
#define EIAGEHNBONE__CCTOR_OFFSET UNITYSDK_OFFSET(0x148F4E30)
#define EIAGEHNBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x148F45C0)

inline static constexpr unsigned int EIAGEHNBONE_TypeDefinitionIndex = 67787;

class EIAGEHNBONE
{
public:
	static ::IPMBELDBAJK_IOPBIONFEGA* StaticGet_AHPAIANOPDG()
	{
		return (::IPMBELDBAJK_IOPBIONFEGA*)Il2CppClass::FromTypeDefinitionIndex(EIAGEHNBONE_TypeDefinitionIndex)->GetStaticField(0xD830);
	}
	::MoleMole::UIHollowMainPageController* BNGABEMPOMH; // 0x30

	::System::Void _ctor(::EHGPNGPADCB* EHJLNOADMFL)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + EIAGEHNBONE__CTOR_OFFSET))(this, EHJLNOADMFL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIAGEHNBONE__CCTOR_OFFSET))();
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + EIAGEHNBONE_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void HFBIIOAFINB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAGEHNBONE_HFBIIOAFINB_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigHollowChessboardObservation* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardObservation*(*)())((::PBYTE)hIl2Cpp + EIAGEHNBONE_COPIDBEMEIE_OFFSET))();
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + EIAGEHNBONE_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NKKODCHGHBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAGEHNBONE_NKKODCHGHBA_OFFSET))(this);
	}

	::System::Void DFMFGOCBFDE(::MoleMole::HollowChessboard::HollowCell OPCJCEJKNGJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + EIAGEHNBONE_DFMFGOCBFDE_OFFSET))(this, OPCJCEJKNGJ);
	}
};
