#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEHONEPBLDM.h"
#include "unitysdk/System/Object.h"

class MACHFKHAHKA;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace MoleMole::HollowChessboard { class HollowRenderSequenceConfig; }

#define OJGAOHLAOMD_AHDDEIOEELB_OFFSET UNITYSDK_OFFSET(0x13A65FA0)
#define OJGAOHLAOMD__CTOR_OFFSET UNITYSDK_OFFSET(0x13A65F90)

inline static constexpr unsigned int OJGAOHLAOMD_TypeDefinitionIndex = 57562;

class OJGAOHLAOMD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGAOHLAOMD__CTOR_OFFSET))(this);
	}

	::MACHFKHAHKA* AHDDEIOEELB(::MoleMole::HollowChessboard::HollowRenderSequenceConfig* DFMKILICPFB, ::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::NEHONEPBLDM BMLBFOIJOOM)
	{
		return ((::MACHFKHAHKA*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowRenderSequenceConfig*, ::MoleMole::HollowChessboard::HollowEntity*, ::NEHONEPBLDM))((::PBYTE)hIl2Cpp + OJGAOHLAOMD_AHDDEIOEELB_OFFSET))(this, DFMKILICPFB, KECKGDFIALJ, BMLBFOIJOOM);
	}
};
