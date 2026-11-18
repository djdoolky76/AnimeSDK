#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalContinuousShakeNode; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define ELICGPLJBBO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1615E4E0)
#define ELICGPLJBBO_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x1615E6C0)
#define ELICGPLJBBO_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1615E7E0)
#define ELICGPLJBBO_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x1615E870)
#define ELICGPLJBBO_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x1615E900)
#define ELICGPLJBBO_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x1615E630)
#define ELICGPLJBBO_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x1615E700)
#define ELICGPLJBBO_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x1615E990)
#define ELICGPLJBBO_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1615E5C0)
#define ELICGPLJBBO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1615E670)
#define ELICGPLJBBO_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x1615EA20)
#define ELICGPLJBBO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1615E750)
#define ELICGPLJBBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1615E740)

inline static constexpr unsigned int ELICGPLJBBO_TypeDefinitionIndex = 57406;

class ELICGPLJBBO : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalContinuousShakeNode* PHLBEBILOEK; // 0x10
	::System::Boolean CGFLLPOCDJM; // 0x18
	::System::Boolean HPINBCPMHJE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + ELICGPLJBBO_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + ELICGPLJBBO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICGPLJBBO_PNAILBHCMDO_OFFSET))(this);
	}
};
