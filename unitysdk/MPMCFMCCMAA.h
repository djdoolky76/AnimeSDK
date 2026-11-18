#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEOPNELGEIC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPMCFMCCMAA_DFJIHMHHNKF_OFFSET UNITYSDK_OFFSET(0xFA84070)
#define MPMCFMCCMAA_GGIEBCBIMBP_OFFSET UNITYSDK_OFFSET(0xFA83F00)
#define MPMCFMCCMAA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFA83FD0)
#define MPMCFMCCMAA__CTOR_OFFSET UNITYSDK_OFFSET(0xFA83E40)

inline static constexpr unsigned int MPMCFMCCMAA_TypeDefinitionIndex = 76977;

class MPMCFMCCMAA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::JEOPNELGEIC>* IJNJLJHEFIA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPMCFMCCMAA__CTOR_OFFSET))(this);
	}

	::JEOPNELGEIC GGIEBCBIMBP(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::JEOPNELGEIC(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MPMCFMCCMAA_GGIEBCBIMBP_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPMCFMCCMAA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void DFJIHMHHNKF(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::JEOPNELGEIC MHOGDJBBNAD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::JEOPNELGEIC))((::PBYTE)hIl2Cpp + MPMCFMCCMAA_DFJIHMHHNKF_OFFSET))(this, EKPEBNCLJPM, MHOGDJBBNAD);
	}
};
