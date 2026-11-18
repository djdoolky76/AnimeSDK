#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalPlayableNodeBase; }
namespace MoleMole::GalGame { class GalSwitchMaincityBGMNode; }

#define HPJCHPDOFCO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14710710)
#define HPJCHPDOFCO_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x147108F0)
#define HPJCHPDOFCO_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x14710C50)
#define HPJCHPDOFCO_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x14710980)
#define HPJCHPDOFCO_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x14710B30)
#define HPJCHPDOFCO_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x14710860)
#define HPJCHPDOFCO_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x14710930)
#define HPJCHPDOFCO_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x14710AA0)
#define HPJCHPDOFCO_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x147107F0)
#define HPJCHPDOFCO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x147108A0)
#define HPJCHPDOFCO_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x14710BC0)
#define HPJCHPDOFCO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x14710A10)
#define HPJCHPDOFCO__CTOR_OFFSET UNITYSDK_OFFSET(0x14710970)

inline static constexpr unsigned int HPJCHPDOFCO_TypeDefinitionIndex = 46980;

class HPJCHPDOFCO : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalSwitchMaincityBGMNode* BDLLCAABCMB; // 0x10
	::System::Boolean CGFLLPOCDJM; // 0x18
	::System::Boolean HPINBCPMHJE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJCHPDOFCO_CNIKAMOAANF_OFFSET))(this);
	}
};
