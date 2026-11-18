#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalPlayArgueSettleNode; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define MNBAILPBPEI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1217A500)
#define MNBAILPBPEI_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x1217A690)
#define MNBAILPBPEI_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1217AA40)
#define MNBAILPBPEI_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x1217A9B0)
#define MNBAILPBPEI_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x1217A920)
#define MNBAILPBPEI_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x1217A650)
#define MNBAILPBPEI_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x1217A6D0)
#define MNBAILPBPEI_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x1217A800)
#define MNBAILPBPEI_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1217A5E0)
#define MNBAILPBPEI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1217A710)
#define MNBAILPBPEI_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x1217A890)
#define MNBAILPBPEI_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1217A770)
#define MNBAILPBPEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1217A760)

inline static constexpr unsigned int MNBAILPBPEI_TypeDefinitionIndex = 70038;

class MNBAILPBPEI : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalPlayArgueSettleNode* HCOENIDMCLL; // 0x10
	::System::Boolean JOPANBFMHMM; // 0x18
	::System::Boolean HPINBCPMHJE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + MNBAILPBPEI_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + MNBAILPBPEI_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBAILPBPEI_CNIKAMOAANF_OFFSET))(this);
	}
};
