#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class PJBICAOMDLN;

#define BCLLIAMENNM_HEFGMOHKDLP_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x18665710)
#define BCLLIAMENNM_HEFGMOHKDLP__CTOR_OFFSET UNITYSDK_OFFSET(0x18665700)

inline static constexpr unsigned int BCLLIAMENNM_HEFGMOHKDLP_TypeDefinitionIndex = 74573;

class BCLLIAMENNM_HEFGMOHKDLP : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell GPAAMOOEKNA; // 0x10
	::System::UInt32 PLHBNHMIAEF; // 0x1C
	::System::Int32 BNIJCOGEFCJ; // 0x20
	::System::UInt32 FJHKFEJAKMD; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLLIAMENNM_HEFGMOHKDLP__CTOR_OFFSET))(this);
	}

	static ::BCLLIAMENNM_HEFGMOHKDLP* COKNIICCODC(::PJBICAOMDLN* MFMPICKHAMJ, ::PJBICAOMDLN* JKELDNKGNDI, ::MoleMole::HollowChessboard::HollowCell GPAAMOOEKNA)
	{
		return ((::BCLLIAMENNM_HEFGMOHKDLP*(*)(::PJBICAOMDLN*, ::PJBICAOMDLN*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BCLLIAMENNM_HEFGMOHKDLP_COKNIICCODC_OFFSET))(MFMPICKHAMJ, JKELDNKGNDI, GPAAMOOEKNA);
	}
};
