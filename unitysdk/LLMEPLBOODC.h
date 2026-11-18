#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGPAGDNPMKJ.h"

class KLFOBDFJFJE;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole { class UIHollowMainPageController; }

#define LLMEPLBOODC_LKAJMALAFNK_OFFSET UNITYSDK_OFFSET(0x1519F080)
#define LLMEPLBOODC__CTOR_OFFSET UNITYSDK_OFFSET(0x1519F070)

inline static constexpr unsigned int LLMEPLBOODC_TypeDefinitionIndex = 62411;

class LLMEPLBOODC : public ::NGPAGDNPMKJ
{
public:
	::MoleMole::UIHollowChessboard3DModelController* GDPJKPFKGKJ; // 0x10
	::KLFOBDFJFJE* LDDDBGKMGCF; // 0x18
	::MoleMole::UIHollowMainPageController* LMDAFABLCJD; // 0x20

	::System::Void _ctor(::MoleMole::UIHollowChessboard3DModelController* IHHHIDMPIFD, ::KLFOBDFJFJE* PAHNPNJPABO, ::MoleMole::UIHollowMainPageController* FIEJJJIKOPC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessboard3DModelController*, ::KLFOBDFJFJE*, ::MoleMole::UIHollowMainPageController*))((::PBYTE)hIl2Cpp + LLMEPLBOODC__CTOR_OFFSET))(this, IHHHIDMPIFD, PAHNPNJPABO, FIEJJJIKOPC);
	}

	::System::Single LKAJMALAFNK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LLMEPLBOODC_LKAJMALAFNK_OFFSET))(this);
	}
};
