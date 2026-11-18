#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"
#include "unitysdk/NHHBMOKNBCE.h"

namespace MoleMole::GalGame { class GalPlayPictureStoryNode; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define FBHCPLHAEPI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x140DD920)
#define FBHCPLHAEPI_BJPBOKFKIFI_OFFSET UNITYSDK_OFFSET(0x140DDB50)
#define FBHCPLHAEPI_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x140DDAD0)
#define FBHCPLHAEPI_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x140DDCD0)
#define FBHCPLHAEPI_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x140DDDF0)
#define FBHCPLHAEPI_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x140DDF10)
#define FBHCPLHAEPI_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x140DDA20)
#define FBHCPLHAEPI_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x140DDB10)
#define FBHCPLHAEPI_JHHKJIBINGM_OFFSET UNITYSDK_OFFSET(0x140DDBB0)
#define FBHCPLHAEPI_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x140DDD60)
#define FBHCPLHAEPI_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x140DD9D0)
#define FBHCPLHAEPI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x140DDA80)
#define FBHCPLHAEPI_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x140DDE80)
#define FBHCPLHAEPI_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x140DDC40)
#define FBHCPLHAEPI__CTOR_OFFSET UNITYSDK_OFFSET(0x140DDBA0)

inline static constexpr unsigned int FBHCPLHAEPI_TypeDefinitionIndex = 50838;

class FBHCPLHAEPI : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalPlayPictureStoryNode* OFMPLOOCPNA; // 0x10
	::System::Boolean CGFLLPOCDJM; // 0x18
	::System::Boolean HPINBCPMHJE; // 0x19
	::System::Boolean GDFPLLCKBCJ; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void BJPBOKFKIFI(::NHHBMOKNBCE FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::NHHBMOKNBCE))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_BJPBOKFKIFI_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void JHHKJIBINGM(::NHHBMOKNBCE MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::NHHBMOKNBCE))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_JHHKJIBINGM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHCPLHAEPI_GEFNCCFJNIM_OFFSET))(this);
	}
};
