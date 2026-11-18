#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"
#include "unitysdk/Share/GridDir.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJLBGGKIBNB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14DEAE00)
#define MJLBGGKIBNB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14DEB030)
#define MJLBGGKIBNB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14DEB140)
#define MJLBGGKIBNB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14DEAED0)
#define MJLBGGKIBNB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DEAE50)
#define MJLBGGKIBNB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEAF90)

inline static constexpr unsigned int MJLBGGKIBNB_TypeDefinitionIndex = 58916;

class MJLBGGKIBNB : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x224; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* BEJGHFHBGEG; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* BONKAHFMLGP; // 0x58
	::System::Int32 AOHOEBIAACP; // 0x60
	::Share::GridDir EECMDPPHLAM; // 0x64
	::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd MNBBAOABAFD; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJLBGGKIBNB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLBGGKIBNB__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLBGGKIBNB_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLBGGKIBNB_ONCLEAN_OFFSET))(this);
	}

	static ::MJLBGGKIBNB* JFDOOELFAOA()
	{
		return ((::MJLBGGKIBNB*(*)())((::PBYTE)hIl2Cpp + MJLBGGKIBNB_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLBGGKIBNB_MEFBHFEOKGH_OFFSET))(this);
	}
};
