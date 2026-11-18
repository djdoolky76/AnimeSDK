#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalPlayBGMNode; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define PHPGMGJIIMM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1B9E5FC0)
#define PHPGMGJIIMM_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x1B9E61A0)
#define PHPGMGJIIMM_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1B9E63E0)
#define PHPGMGJIIMM_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x1B9E6500)
#define PHPGMGJIIMM_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x1B9E62C0)
#define PHPGMGJIIMM_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x1B9E6110)
#define PHPGMGJIIMM_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x1B9E61E0)
#define PHPGMGJIIMM_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x1B9E6230)
#define PHPGMGJIIMM_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1B9E60A0)
#define PHPGMGJIIMM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1B9E6150)
#define PHPGMGJIIMM_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x1B9E6470)
#define PHPGMGJIIMM_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1B9E6350)
#define PHPGMGJIIMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E6220)

inline static constexpr unsigned int PHPGMGJIIMM_TypeDefinitionIndex = 52020;

class PHPGMGJIIMM : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalPlayBGMNode* BDLLCAABCMB; // 0x10
	::System::Boolean HPINBCPMHJE; // 0x18
	::System::Boolean CGFLLPOCDJM; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPGMGJIIMM_FFAOFNJAPOF_OFFSET))(this);
	}
};
