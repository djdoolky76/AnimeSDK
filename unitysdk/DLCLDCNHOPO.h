#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class DENGNOJFDLA;
class EOHNMIBEEFM;
namespace MoleMole::HollowChessboard { class RenderSequenceBase; }
namespace System { class Action; }

#define DLCLDCNHOPO_EPOABALAKCG_OFFSET UNITYSDK_OFFSET(0x15A566F0)
#define DLCLDCNHOPO_HBALOGLOOKB_OFFSET UNITYSDK_OFFSET(0x15A565D0)
#define DLCLDCNHOPO_HBNLFNHMBHB_OFFSET UNITYSDK_OFFSET(0x15A565C0)
#define DLCLDCNHOPO_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x15A565F0)
#define DLCLDCNHOPO_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x15A565E0)
#define DLCLDCNHOPO_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x15A56490)
#define DLCLDCNHOPO_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x15A566A0)
#define DLCLDCNHOPO_OOJFFGEGFON_OFFSET UNITYSDK_OFFSET(0x15A56420)
#define DLCLDCNHOPO__CTOR_OFFSET UNITYSDK_OFFSET(0x15A56410)

inline static constexpr unsigned int DLCLDCNHOPO_TypeDefinitionIndex = 63976;

class DLCLDCNHOPO : public ::System::Object
{
public:
	::EOHNMIBEEFM* _PHJGLHAAHOG_k__BackingField; // 0x10
	::MoleMole::HollowChessboard::RenderSequenceBase* _IGMEIKODENK_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCLDCNHOPO__CTOR_OFFSET))(this);
	}

	::System::Void OOJFFGEGFON(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLCLDCNHOPO_OOJFFGEGFON_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean LCJEELHBNHG(::System::Int32 DKOFFFNEFJC, ::System::UInt64 GJGDDAPBKKM, ::MoleMole::HollowChessboard::HollowCell AEPEPHHADNP, ::System::Action* PABLEDCGDGM, ::System::Action* JMGBOJIEKGE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::MoleMole::HollowChessboard::HollowCell, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + DLCLDCNHOPO_LCJEELHBNHG_OFFSET))(this, DKOFFFNEFJC, GJGDDAPBKKM, AEPEPHHADNP, PABLEDCGDGM, JMGBOJIEKGE);
	}

	::System::Void HBNLFNHMBHB(::EOHNMIBEEFM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EOHNMIBEEFM*))((::PBYTE)hIl2Cpp + DLCLDCNHOPO_HBNLFNHMBHB_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::RenderSequenceBase* HBALOGLOOKB()
	{
		return ((::MoleMole::HollowChessboard::RenderSequenceBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCLDCNHOPO_HBALOGLOOKB_OFFSET))(this);
	}

	::EOHNMIBEEFM* KCKBIOBGKBH()
	{
		return ((::EOHNMIBEEFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCLDCNHOPO_KCKBIOBGKBH_OFFSET))(this);
	}

	::System::Void JMDEKPONKMF(::MoleMole::HollowChessboard::RenderSequenceBase* HPEKBKGBDMA, ::DENGNOJFDLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderSequenceBase*, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + DLCLDCNHOPO_JMDEKPONKMF_OFFSET))(this, HPEKBKGBDMA, AAOCANGHBDG);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCLDCNHOPO_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void EPOABALAKCG(::MoleMole::HollowChessboard::RenderSequenceBase* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderSequenceBase*))((::PBYTE)hIl2Cpp + DLCLDCNHOPO_EPOABALAKCG_OFFSET))(this, EGEGIMGMJHN);
	}
};
