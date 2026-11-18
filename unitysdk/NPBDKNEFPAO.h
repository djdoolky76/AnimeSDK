#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalPlayableNodeBase; }
namespace MoleMole::GalGame { class GalSetSpecialsNode; }

#define NPBDKNEFPAO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x137758F0)
#define NPBDKNEFPAO_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x13775A80)
#define NPBDKNEFPAO_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x13775C80)
#define NPBDKNEFPAO_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x13775BF0)
#define NPBDKNEFPAO_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x13775DA0)
#define NPBDKNEFPAO_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x13775A40)
#define NPBDKNEFPAO_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x13775AC0)
#define NPBDKNEFPAO_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x13775D10)
#define NPBDKNEFPAO_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x137759D0)
#define NPBDKNEFPAO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13775B00)
#define NPBDKNEFPAO_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x13775B60)
#define NPBDKNEFPAO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x13775E30)
#define NPBDKNEFPAO__CTOR_OFFSET UNITYSDK_OFFSET(0x13775B50)

inline static constexpr unsigned int NPBDKNEFPAO_TypeDefinitionIndex = 77359;

class NPBDKNEFPAO : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalSetSpecialsNode* AKIHAGNBCPD; // 0x10
	::System::Boolean HPINBCPMHJE; // 0x18
	::System::Boolean JOPANBFMHMM; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + NPBDKNEFPAO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}
};
