#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBPPagePageController; }

#define JFAAKJNJMBE_MODGNHAPJCP_HCCFGDAAEIK_OFFSET UNITYSDK_OFFSET(0x13ACB850)
#define JFAAKJNJMBE_MODGNHAPJCP__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACB840)

inline static constexpr unsigned int JFAAKJNJMBE_MODGNHAPJCP_TypeDefinitionIndex = 68426;

class JFAAKJNJMBE_MODGNHAPJCP : public ::System::Object
{
public:
	::MoleMole::UIBPPagePageController* JGFKBBFIPJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_MODGNHAPJCP__CTOR_OFFSET))(this);
	}

	::System::Void HCCFGDAAEIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_MODGNHAPJCP_HCCFGDAAEIK_OFFSET))(this);
	}
};
