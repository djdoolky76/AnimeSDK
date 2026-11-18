#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalPlayableNodeBase; }
namespace MoleMole::GalGame { class GalTransitionNode; }

#define POIIGDJBBPI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1CB5B940)
#define POIIGDJBBPI_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x1CB5BB20)
#define POIIGDJBBPI_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1CB5BCD0)
#define POIIGDJBBPI_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x1CB5BBB0)
#define POIIGDJBBPI_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x1CB5BE80)
#define POIIGDJBBPI_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x1CB5BA90)
#define POIIGDJBBPI_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x1CB5BB60)
#define POIIGDJBBPI_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x1CB5BC40)
#define POIIGDJBBPI_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1CB5BA20)
#define POIIGDJBBPI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1CB5BAD0)
#define POIIGDJBBPI_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x1CB5BDF0)
#define POIIGDJBBPI_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1CB5BD60)
#define POIIGDJBBPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5BBA0)

inline static constexpr unsigned int POIIGDJBBPI_TypeDefinitionIndex = 49902;

class POIIGDJBBPI : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalTransitionNode* PGAAHNEBDJB; // 0x10
	::System::Boolean HPINBCPMHJE; // 0x18
	::System::Boolean CGFLLPOCDJM; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + POIIGDJBBPI_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + POIIGDJBBPI_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIGDJBBPI_GEFNCCFJNIM_OFFSET))(this);
	}
};
