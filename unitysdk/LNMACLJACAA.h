#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class NBKGFBNJAEP;

#define LNMACLJACAA_JDHHGDBKJJG_OFFSET UNITYSDK_OFFSET(0x15678E90)
#define LNMACLJACAA__CTOR_OFFSET UNITYSDK_OFFSET(0x15678E80)

inline static constexpr unsigned int LNMACLJACAA_TypeDefinitionIndex = 68036;

class LNMACLJACAA : public ::System::Object
{
public:
	::NBKGFBNJAEP* AAOCANGHBDG; // 0x10

	::System::Void _ctor(::NBKGFBNJAEP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::NBKGFBNJAEP*))((::PBYTE)hIl2Cpp + LNMACLJACAA__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Int32 JDHHGDBKJJG(::MoleMole::HollowChessboard::HollowCell AEGNGFEKHPH, ::MoleMole::HollowChessboard::HollowCell IKEKAMNEMCC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + LNMACLJACAA_JDHHGDBKJJG_OFFSET))(this, AEGNGFEKHPH, IKEKAMNEMCC);
	}
};
