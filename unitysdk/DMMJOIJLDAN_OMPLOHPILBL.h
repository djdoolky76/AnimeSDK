#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NDJMJLHFMKJ;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define DMMJOIJLDAN_OMPLOHPILBL_JNEJDABHPJB_OFFSET UNITYSDK_OFFSET(0xFDC6AF0)
#define DMMJOIJLDAN_OMPLOHPILBL__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC6AE0)

inline static constexpr unsigned int DMMJOIJLDAN_OMPLOHPILBL_TypeDefinitionIndex = 63542;

class DMMJOIJLDAN_OMPLOHPILBL : public ::System::Object
{
public:
	::NDJMJLHFMKJ* GENNIFDPOAM; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMJOIJLDAN_OMPLOHPILBL__CTOR_OFFSET))(this);
	}

	::System::Void JNEJDABHPJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMJOIJLDAN_OMPLOHPILBL_JNEJDABHPJB_OFFSET))(this);
	}
};
