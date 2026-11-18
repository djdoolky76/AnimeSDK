#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalPlayArgueHealthChangeNode; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define LNALOOHOJON_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12597080)
#define LNALOOHOJON_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x12597210)
#define LNALOOHOJON_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x12597380)
#define LNALOOHOJON_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x125974A0)
#define LNALOOHOJON_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x12597530)
#define LNALOOHOJON_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x125971D0)
#define LNALOOHOJON_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x12597250)
#define LNALOOHOJON_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x125975C0)
#define LNALOOHOJON_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x12597160)
#define LNALOOHOJON_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x12597290)
#define LNALOOHOJON_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x12597410)
#define LNALOOHOJON_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x125972F0)
#define LNALOOHOJON__CTOR_OFFSET UNITYSDK_OFFSET(0x125972E0)

inline static constexpr unsigned int LNALOOHOJON_TypeDefinitionIndex = 66924;

class LNALOOHOJON : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalPlayArgueHealthChangeNode* FKOMPIPDCNM; // 0x10
	::System::Boolean JOPANBFMHMM; // 0x18
	::System::Boolean HPINBCPMHJE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + LNALOOHOJON_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + LNALOOHOJON_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNALOOHOJON_LADJGBLMEAO_OFFSET))(this);
	}
};
