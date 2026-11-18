#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class LHLDPHDJLNL;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLMCPKLMOBB_PGCIBMIDOLJ_OFFSET UNITYSDK_OFFSET(0x13E12C00)
#define CLMCPKLMOBB__CTOR_OFFSET UNITYSDK_OFFSET(0x13E12B00)

inline static constexpr unsigned int CLMCPKLMOBB_TypeDefinitionIndex = 69524;

class CLMCPKLMOBB : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowEntity* NDDNONCGABO; // 0x10
	::LHLDPHDJLNL* HMPEEAAAGHE; // 0x18
	::MoleMole::HollowChessboard::HollowEntity* IIPOOCJBILD; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* AOHIMBPBEEF; // 0x28
	::MoleMole::HollowChessboard::HollowCell CGGNBHOLHBF; // 0x30
	::MoleMole::HollowChessboard::HollowCell AGCJEPKNNNF; // 0x3C
	::System::Boolean FOPIAPGDGAC; // 0x48
	::System::Boolean CNGELNOLGJG; // 0x49

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMCPKLMOBB__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* PGCIBMIDOLJ()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMCPKLMOBB_PGCIBMIDOLJ_OFFSET))(this);
	}
};
