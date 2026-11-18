#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalConditionNode; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define KJDCLKPEBFH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x157F11D0)
#define KJDCLKPEBFH_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x157F13B0)
#define KJDCLKPEBFH_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x157F1560)
#define KJDCLKPEBFH_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x157F1440)
#define KJDCLKPEBFH_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x157F14D0)
#define KJDCLKPEBFH_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x157F1320)
#define KJDCLKPEBFH_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x157F13F0)
#define KJDCLKPEBFH_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x157F1680)
#define KJDCLKPEBFH_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x157F12B0)
#define KJDCLKPEBFH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x157F1360)
#define KJDCLKPEBFH_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x157F1710)
#define KJDCLKPEBFH_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x157F15F0)
#define KJDCLKPEBFH__CTOR_OFFSET UNITYSDK_OFFSET(0x157F1430)

inline static constexpr unsigned int KJDCLKPEBFH_TypeDefinitionIndex = 64138;

class KJDCLKPEBFH : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalConditionNode* POPAAOANNMA; // 0x10
	::System::Boolean CGFLLPOCDJM; // 0x18
	::System::Boolean HPINBCPMHJE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDCLKPEBFH_PNAILBHCMDO_OFFSET))(this);
	}
};
