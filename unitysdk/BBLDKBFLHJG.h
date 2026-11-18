#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class LDDDABNDHEG;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBLDKBFLHJG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF788660)
#define BBLDKBFLHJG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xF788980)
#define BBLDKBFLHJG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xF788B40)
#define BBLDKBFLHJG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF788730)
#define BBLDKBFLHJG__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7886B0)
#define BBLDKBFLHJG__CTOR_OFFSET UNITYSDK_OFFSET(0xF788840)

inline static constexpr unsigned int BBLDKBFLHJG_TypeDefinitionIndex = 52821;

class BBLDKBFLHJG : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x21A; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::UInt32>* FGFLAIOPNLJ; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* AIPPALODPBP; // 0x58
	::LDDDABNDHEG* GDOLHAFNGHP; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBLDKBFLHJG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLDKBFLHJG__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLDKBFLHJG_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLDKBFLHJG_ONCLEAN_OFFSET))(this);
	}

	static ::BBLDKBFLHJG* JFDOOELFAOA()
	{
		return ((::BBLDKBFLHJG*(*)())((::PBYTE)hIl2Cpp + BBLDKBFLHJG_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLDKBFLHJG_MEFBHFEOKGH_OFFSET))(this);
	}
};
