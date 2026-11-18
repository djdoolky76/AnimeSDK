#pragma once
#include "unitysdk/unitysdk.h"

class GKGACDNNBCM;
class IANEJNBHNPJ;
namespace MoleMole { class UIHollowChessboard3DModelController; }

#define IJGKJPCHPLD_CNEPGIBPLLB_OFFSET UNITYSDK_OFFSET(0x160ACCC0)
#define IJGKJPCHPLD_KJIOCHPOLCC_OFFSET UNITYSDK_OFFSET(0x160ACBD0)
#define IJGKJPCHPLD_LGAFACFIAGI_OFFSET UNITYSDK_OFFSET(0x160ACC70)
#define IJGKJPCHPLD_LNCJHBLBCJF_OFFSET UNITYSDK_OFFSET(0x160ACC20)
#define IJGKJPCHPLD_MFBFIJJBCKM_OFFSET UNITYSDK_OFFSET(0x160ACCB0)
#define IJGKJPCHPLD__CTOR_OFFSET UNITYSDK_OFFSET(0x160ACBB0)

inline static constexpr unsigned int IJGKJPCHPLD_TypeDefinitionIndex = 69299;

class IJGKJPCHPLD
{
public:
	::MoleMole::UIHollowChessboard3DModelController* HDNKMBCIOHD; // 0x20

	::System::Void _ctor(::MoleMole::UIHollowChessboard3DModelController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessboard3DModelController*))((::PBYTE)hIl2Cpp + IJGKJPCHPLD__CTOR_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void KJIOCHPOLCC(::GKGACDNNBCM* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::GKGACDNNBCM*))((::PBYTE)hIl2Cpp + IJGKJPCHPLD_KJIOCHPOLCC_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Boolean LNCJHBLBCJF(::GKGACDNNBCM* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::GKGACDNNBCM*))((::PBYTE)hIl2Cpp + IJGKJPCHPLD_LNCJHBLBCJF_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void LGAFACFIAGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGKJPCHPLD_LGAFACFIAGI_OFFSET))(this);
	}

	::System::Void MFBFIJJBCKM(::GKGACDNNBCM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::GKGACDNNBCM*))((::PBYTE)hIl2Cpp + IJGKJPCHPLD_MFBFIJJBCKM_OFFSET))(this, MIALFKCCCPI);
	}

	::IANEJNBHNPJ* CNEPGIBPLLB(::System::UInt32 LPALEBPKMNO)
	{
		return ((::IANEJNBHNPJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJGKJPCHPLD_CNEPGIBPLLB_OFFSET))(this, LPALEBPKMNO);
	}
};
