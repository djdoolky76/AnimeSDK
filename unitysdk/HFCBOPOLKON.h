#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalActionPlayNode; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define HFCBOPOLKON_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17A42020)
#define HFCBOPOLKON_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x17A42140)
#define HFCBOPOLKON_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x17A42260)
#define HFCBOPOLKON_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x17A424A0)
#define HFCBOPOLKON_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x17A422F0)
#define HFCBOPOLKON_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x17A42180)
#define HFCBOPOLKON_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x17A42210)
#define HFCBOPOLKON_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x17A42380)
#define HFCBOPOLKON_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x17A420D0)
#define HFCBOPOLKON_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x17A421C0)
#define HFCBOPOLKON_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x17A42410)
#define HFCBOPOLKON_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x17A42530)
#define HFCBOPOLKON__CTOR_OFFSET UNITYSDK_OFFSET(0x17A42250)

inline static constexpr unsigned int HFCBOPOLKON_TypeDefinitionIndex = 41963;

class HFCBOPOLKON : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalActionPlayNode* LJKEIEFPAEE; // 0x10
	::System::Boolean CGFLLPOCDJM; // 0x18
	::System::Boolean HPINBCPMHJE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + HFCBOPOLKON_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCBOPOLKON_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + HFCBOPOLKON_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}
};
