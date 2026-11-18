#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIGODLIKGDA_BMHKJEJMJCI.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChangeBG_ChangeBGType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole::HollowChessboard { class CellDiffusionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIGODLIKGDA_MGLEGEKPNIN_CMCHDDFGAFE_OFFSET UNITYSDK_OFFSET(0x14FBA940)
#define JIGODLIKGDA_MGLEGEKPNIN_FEOKMCHAPJF_OFFSET UNITYSDK_OFFSET(0x14FBA9A0)
#define JIGODLIKGDA_MGLEGEKPNIN_IMOEMBJFDKC_OFFSET UNITYSDK_OFFSET(0x14FBA930)
#define JIGODLIKGDA_MGLEGEKPNIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14FBA990)

inline static constexpr unsigned int JIGODLIKGDA_MGLEGEKPNIN_TypeDefinitionIndex = 58731;

class JIGODLIKGDA_MGLEGEKPNIN : public ::System::Object
{
public:
	::System::String* _KGKBBAKPDOE_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* BEDDEEHNOIN; // 0x18
	::MoleMole::HollowChessboard::CellDiffusionConfig* LFKMPLLGFGP; // 0x20
	::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> IJILJGHLBBO; // 0x28
	::System::Byte _padding0[0x10];
	::MoleMole::Config::ConfigHollowChangeBG_ChangeBGType KFJIDELKONJ; // 0x40
	::MoleMole::Vector2Int BOPALLCIMBM; // 0x44
	::System::Single DDPANBDKBJB; // 0x4C
	::System::Single DIJICEHGBJM; // 0x50
	::System::Boolean BBKPIJFOMFO; // 0x54
	::System::Byte _padding1[0x3];
	::System::Single FOLAOFBAGGH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_MGLEGEKPNIN__CTOR_OFFSET))(this);
	}

	::System::String* IMOEMBJFDKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_MGLEGEKPNIN_IMOEMBJFDKC_OFFSET))(this);
	}

	::JIGODLIKGDA_BMHKJEJMJCI CMCHDDFGAFE()
	{
		return ((::JIGODLIKGDA_BMHKJEJMJCI(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_MGLEGEKPNIN_CMCHDDFGAFE_OFFSET))(this);
	}

	::System::Void FEOKMCHAPJF(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JIGODLIKGDA_MGLEGEKPNIN_FEOKMCHAPJF_OFFSET))(this, EGEGIMGMJHN);
	}
};
