#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalPlayableNodeBase; }
namespace MoleMole::GalGame { class GalShow3DModelNode; }

#define ICCAAOAHBOO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16099C40)
#define ICCAAOAHBOO_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x16099DB0)
#define ICCAAOAHBOO_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x16099FA0)
#define ICCAAOAHBOO_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x1609A150)
#define ICCAAOAHBOO_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x16099F10)
#define ICCAAOAHBOO_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x16099DF0)
#define ICCAAOAHBOO_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x16099E30)
#define ICCAAOAHBOO_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x1609A030)
#define ICCAAOAHBOO_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x16099D20)
#define ICCAAOAHBOO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16099D60)
#define ICCAAOAHBOO_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x16099E80)
#define ICCAAOAHBOO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1609A0C0)
#define ICCAAOAHBOO__CTOR_OFFSET UNITYSDK_OFFSET(0x16099E70)

inline static constexpr unsigned int ICCAAOAHBOO_TypeDefinitionIndex = 70565;

class ICCAAOAHBOO : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalShow3DModelNode* MNHKFGNEADC; // 0x10
	::System::Boolean CNFGPELOPNM; // 0x18
	::System::Boolean GIIHDHHJLOJ; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCAAOAHBOO_FFAOFNJAPOF_OFFSET))(this);
	}
};
