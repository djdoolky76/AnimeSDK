#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPDANDONMDH.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowItemOptionsUpGradeControllerContext; }
namespace MoleMole { class UIHollowItemOptionsUpGradePopWindowController; }

#define MJLOGMBABFI_BHHDHDDJPBC_OFFSET UNITYSDK_OFFSET(0x14D8A040)
#define MJLOGMBABFI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14D8A680)
#define MJLOGMBABFI_HBPNNBOJFHE_OFFSET UNITYSDK_OFFSET(0x14D8A090)
#define MJLOGMBABFI__CTOR_OFFSET UNITYSDK_OFFSET(0x14D89FB0)

inline static constexpr unsigned int MJLOGMBABFI_TypeDefinitionIndex = 64852;

class MJLOGMBABFI : public ::System::Object
{
public:
	::MoleMole::UIHollowItemOptionsUpGradeControllerContext* DGDENJKAJDB; // 0x10
	::PPDANDONMDH JEJNIFPLLLL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLOGMBABFI__CTOR_OFFSET))(this);
	}

	::System::Void BHHDHDDJPBC(::PPDANDONMDH EBBANOLHOFJ)
	{
		return ((::System::Void(*)(::PVOID, ::PPDANDONMDH))((::PBYTE)hIl2Cpp + MJLOGMBABFI_BHHDHDDJPBC_OFFSET))(this, EBBANOLHOFJ);
	}

	::System::Void HBPNNBOJFHE(::System::Int32 GDIKLKDLEIG, ::System::Int32 MOBNMDEDJIP, ::System::Boolean LLNFDFPOMFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MJLOGMBABFI_HBPNNBOJFHE_OFFSET))(this, GDIKLKDLEIG, MOBNMDEDJIP, LLNFDFPOMFA);
	}

	::MoleMole::UIHollowItemOptionsUpGradePopWindowController* COKNIICCODC()
	{
		return ((::MoleMole::UIHollowItemOptionsUpGradePopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLOGMBABFI_COKNIICCODC_OFFSET))(this);
	}
};
