#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalPlaySubStoryNode; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define HNEHCGCEPHD_BBIHNAJFBCO_OFFSET UNITYSDK_OFFSET(0x19E34620)
#define HNEHCGCEPHD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x19E34210)
#define HNEHCGCEPHD_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x19E34470)
#define HNEHCGCEPHD_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x19E34500)
#define HNEHCGCEPHD_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x19E34860)
#define HNEHCGCEPHD_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x19E34590)
#define HNEHCGCEPHD_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x19E343C0)
#define HNEHCGCEPHD_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x19E344B0)
#define HNEHCGCEPHD_IDJDKBFAPBJ_OFFSET UNITYSDK_OFFSET(0x19E34360)
#define HNEHCGCEPHD_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x19E34740)
#define HNEHCGCEPHD_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x19E342F0)
#define HNEHCGCEPHD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x19E34400)
#define HNEHCGCEPHD_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x19E346B0)
#define HNEHCGCEPHD_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x19E347D0)
#define HNEHCGCEPHD__CTOR_OFFSET UNITYSDK_OFFSET(0x19E344F0)

inline static constexpr unsigned int HNEHCGCEPHD_TypeDefinitionIndex = 66183;

class HNEHCGCEPHD : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalPlaySubStoryNode* NNENEECFMCC; // 0x10
	::System::Boolean JOPANBFMHMM; // 0x18
	::System::Boolean HPINBCPMHJE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void IDJDKBFAPBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_IDJDKBFAPBJ_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void BBIHNAJFBCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_BBIHNAJFBCO_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEHCGCEPHD_FFAOFNJAPOF_OFFSET))(this);
	}
};
