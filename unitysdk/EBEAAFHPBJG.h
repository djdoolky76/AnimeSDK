#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class HJEBAFLEPOF;
class MLKKDHPBPNJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBEAAFHPBJG_EKNBOBDEPHH_OFFSET UNITYSDK_OFFSET(0x1062B590)
#define EBEAAFHPBJG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1062B120)
#define EBEAAFHPBJG_ILEMDKMAFID_OFFSET UNITYSDK_OFFSET(0x1062B430)
#define EBEAAFHPBJG_JBAPIKBGIMO_OFFSET UNITYSDK_OFFSET(0x1062B5A0)
#define EBEAAFHPBJG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1062B440)
#define EBEAAFHPBJG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1062B3A0)
#define EBEAAFHPBJG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1062B1F0)
#define EBEAAFHPBJG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1062B170)
#define EBEAAFHPBJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1062B2D0)

inline static constexpr unsigned int EBEAAFHPBJG_TypeDefinitionIndex = 75231;

class EBEAAFHPBJG : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x227; // 0x0
	// static const ::System::String* ENLDBCLCNNL; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* LKIHHJGAMEJ; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* IBKLHILCIMC; // 0x58
	::HJEBAFLEPOF* KPAHMPONKCA; // 0x60
	::System::Int64 _OGFHLAPGINE_k__BackingField; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBEAAFHPBJG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEAAFHPBJG__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEAAFHPBJG_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEAAFHPBJG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEAAFHPBJG_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Int64 ILEMDKMAFID()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEAAFHPBJG_ILEMDKMAFID_OFFSET))(this);
	}

	static ::EBEAAFHPBJG* JFDOOELFAOA()
	{
		return ((::EBEAAFHPBJG*(*)())((::PBYTE)hIl2Cpp + EBEAAFHPBJG_JFDOOELFAOA_OFFSET))();
	}

	::System::Void EKNBOBDEPHH(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EBEAAFHPBJG_EKNBOBDEPHH_OFFSET))(this, EGEGIMGMJHN);
	}

	::MLKKDHPBPNJ* JBAPIKBGIMO()
	{
		return ((::MLKKDHPBPNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEAAFHPBJG_JBAPIKBGIMO_OFFSET))(this);
	}
};
