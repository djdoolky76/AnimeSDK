#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JOGFCKILHMN_JMGDLBOJKML_OFFSET UNITYSDK_OFFSET(0x155C28D0)
#define JOGFCKILHMN_NCLPPHJMIOJ_OFFSET UNITYSDK_OFFSET(0x155C2960)
#define JOGFCKILHMN__CTOR_OFFSET UNITYSDK_OFFSET(0x155C2910)

inline static constexpr unsigned int JOGFCKILHMN_TypeDefinitionIndex = 41703;

class JOGFCKILHMN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* _GOOKIFKFLIP_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGFCKILHMN__CTOR_OFFSET))(this);
	}

	::System::Void JMGDLBOJKML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGFCKILHMN_JMGDLBOJKML_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* NCLPPHJMIOJ()
	{
		return ((::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGFCKILHMN_NCLPPHJMIOJ_OFFSET))(this);
	}
};
