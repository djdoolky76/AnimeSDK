#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalPlayArgueStartNode; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define JGEDMKOHAKF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x130769C0)
#define JGEDMKOHAKF_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x13076B50)
#define JGEDMKOHAKF_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x13076D50)
#define JGEDMKOHAKF_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x13076C30)
#define JGEDMKOHAKF_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x13076F00)
#define JGEDMKOHAKF_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x13076B10)
#define JGEDMKOHAKF_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x13076B90)
#define JGEDMKOHAKF_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x13076E70)
#define JGEDMKOHAKF_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x13076AA0)
#define JGEDMKOHAKF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13076BD0)
#define JGEDMKOHAKF_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x13076CC0)
#define JGEDMKOHAKF_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x13076DE0)
#define JGEDMKOHAKF__CTOR_OFFSET UNITYSDK_OFFSET(0x13076C20)

inline static constexpr unsigned int JGEDMKOHAKF_TypeDefinitionIndex = 78122;

class JGEDMKOHAKF : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalPlayArgueStartNode* IOGIBNFJIBN; // 0x10
	::System::Boolean HPINBCPMHJE; // 0x18
	::System::Boolean JOPANBFMHMM; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEDMKOHAKF_GEFNCCFJNIM_OFFSET))(this);
	}
};
