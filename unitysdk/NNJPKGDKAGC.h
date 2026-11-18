#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalPlayableNodeBase; }
namespace MoleMole::GalGame { class GalSoundActionNode; }

#define NNJPKGDKAGC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1376E450)
#define NNJPKGDKAGC_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x1376E630)
#define NNJPKGDKAGC_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1376E7E0)
#define NNJPKGDKAGC_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x1376E6C0)
#define NNJPKGDKAGC_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x1376E990)
#define NNJPKGDKAGC_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x1376E5A0)
#define NNJPKGDKAGC_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x1376E670)
#define NNJPKGDKAGC_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x1376E870)
#define NNJPKGDKAGC_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1376E530)
#define NNJPKGDKAGC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1376E5E0)
#define NNJPKGDKAGC_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x1376E750)
#define NNJPKGDKAGC_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1376E900)
#define NNJPKGDKAGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1376E6B0)

inline static constexpr unsigned int NNJPKGDKAGC_TypeDefinitionIndex = 49555;

class NNJPKGDKAGC : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalSoundActionNode* BDPKIDLNKLM; // 0x10
	::System::Boolean HPINBCPMHJE; // 0x18
	::System::Boolean CGFLLPOCDJM; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJPKGDKAGC_GEFNCCFJNIM_OFFSET))(this);
	}
};
