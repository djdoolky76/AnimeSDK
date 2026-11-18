#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLPPILMPGH.h"

namespace MoleMole::GalGame { class GalJumpChapterNode; }
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define FOBHLKHPMIE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15EFD7E0)
#define FOBHLKHPMIE_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x15EFD930)
#define FOBHLKHPMIE_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x15EFDC40)
#define FOBHLKHPMIE_FFAOFNJAPOF_OFFSET UNITYSDK_OFFSET(0x15EFDA90)
#define FOBHLKHPMIE_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x15EFD970)
#define FOBHLKHPMIE_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x15EFD9B0)
#define FOBHLKHPMIE_LADJGBLMEAO_OFFSET UNITYSDK_OFFSET(0x15EFDA00)
#define FOBHLKHPMIE_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x15EFD8C0)
#define FOBHLKHPMIE_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x15EFDBB0)
#define FOBHLKHPMIE_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x15EFDB20)
#define FOBHLKHPMIE__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFD9F0)

inline static constexpr unsigned int FOBHLKHPMIE_TypeDefinitionIndex = 90108;

class FOBHLKHPMIE : public ::NGLPPILMPGH
{
public:
	::MoleMole::GalGame::GalJumpChapterNode* HKILNIKPLBE; // 0x10
	::System::Boolean CGFLLPOCDJM; // 0x18
	::System::Boolean HPINBCPMHJE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHLKHPMIE__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + FOBHLKHPMIE_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHLKHPMIE_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHLKHPMIE_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHLKHPMIE_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHLKHPMIE_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void LADJGBLMEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHLKHPMIE_LADJGBLMEAO_OFFSET))(this);
	}

	::System::Boolean FFAOFNJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHLKHPMIE_FFAOFNJAPOF_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::GalGame::GalPlayableNodeBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + FOBHLKHPMIE_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHLKHPMIE_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHLKHPMIE_CNIKAMOAANF_OFFSET))(this);
	}
};
