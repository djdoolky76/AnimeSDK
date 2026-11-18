#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"
#include "unitysdk/NHHBMOKNBCE.h"

namespace MoleMole::GalGame { class GalPlayableNodeBase; }
namespace MoleMole::GalGame { class GalSwitchSceneGroupNode; }

#define ENLIEGCNNEN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x158C2480)
#define ENLIEGCNNEN_BJPBOKFKIFI_OFFSET UNITYSDK_OFFSET(0x158C26B0)
#define ENLIEGCNNEN_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x158C2630)
#define ENLIEGCNNEN_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x158C2830)
#define ENLIEGCNNEN_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x158C27A0)
#define ENLIEGCNNEN_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x158C2950)
#define ENLIEGCNNEN_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x158C2580)
#define ENLIEGCNNEN_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x158C2670)
#define ENLIEGCNNEN_JHHKJIBINGM_OFFSET UNITYSDK_OFFSET(0x158C28C0)
#define ENLIEGCNNEN_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x158C2710)
#define ENLIEGCNNEN_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x158C2530)
#define ENLIEGCNNEN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x158C25E0)
#define ENLIEGCNNEN_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x158C29E0)
#define ENLIEGCNNEN_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x158C2A70)
#define ENLIEGCNNEN__CTOR_OFFSET UNITYSDK_OFFSET(0x158C2700)

inline static constexpr unsigned int ENLIEGCNNEN_TypeDefinitionIndex = 70219;

class ENLIEGCNNEN : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalSwitchSceneGroupNode* HCKLGACHOBG; // 0x10
	::System::Boolean CGFLLPOCDJM; // 0x18
	::System::Boolean GDFPLLCKBCJ; // 0x19
	::System::Boolean HPINBCPMHJE; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void BJPBOKFKIFI(::NHHBMOKNBCE FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::NHHBMOKNBCE))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_BJPBOKFKIFI_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void JHHKJIBINGM(::NHHBMOKNBCE MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::NHHBMOKNBCE))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_JHHKJIBINGM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + ENLIEGCNNEN_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}
};
