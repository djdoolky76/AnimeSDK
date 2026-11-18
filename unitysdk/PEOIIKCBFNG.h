#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class CNBBKIKPFKA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEOIIKCBFNG_ALMKFHKLGNE_OFFSET UNITYSDK_OFFSET(0x150C0750)
#define PEOIIKCBFNG_BHODJGKAAOL_OFFSET UNITYSDK_OFFSET(0x150C03A0)
#define PEOIIKCBFNG_FFKLJIIDADE_OFFSET UNITYSDK_OFFSET(0x150C0250)
#define PEOIIKCBFNG_HNDJOGIDLIJ_OFFSET UNITYSDK_OFFSET(0x150C01B0)
#define PEOIIKCBFNG_JBGCFOADJGN_OFFSET UNITYSDK_OFFSET(0x150C0500)
#define PEOIIKCBFNG_KJGFHDAMHGO_OFFSET UNITYSDK_OFFSET(0x150C0320)
#define PEOIIKCBFNG_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x150C04E0)
#define PEOIIKCBFNG_NOAPKFBOOLJ_OFFSET UNITYSDK_OFFSET(0x150C0560)
#define PEOIIKCBFNG_ONEMPGHHNOP_OFFSET UNITYSDK_OFFSET(0x150C0470)
#define PEOIIKCBFNG__CTOR_OFFSET UNITYSDK_OFFSET(0x150C00B0)

inline static constexpr unsigned int PEOIIKCBFNG_TypeDefinitionIndex = 49652;

class PEOIIKCBFNG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PFKIFGLAJFH; // 0x10
	::CNBBKIKPFKA* ECGONIEDPAN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* HDGDFPHJJDD; // 0x20
	::System::UInt32 PIGKEGJKCEF; // 0x28
	::MoleMole::HollowChessboard::HollowCell LJLHLBOAILP; // 0x2C

	::System::Void _ctor(::System::UInt32 IMGBOOLGKEG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEOIIKCBFNG__CTOR_OFFSET))(this, IMGBOOLGKEG);
	}

	::System::Void HNDJOGIDLIJ(::CNBBKIKPFKA* GIBBEEJNCON)
	{
		return ((::System::Void(*)(::PVOID, ::CNBBKIKPFKA*))((::PBYTE)hIl2Cpp + PEOIIKCBFNG_HNDJOGIDLIJ_OFFSET))(this, GIBBEEJNCON);
	}

	::System::Nullable_1<::System::Int32> FFKLJIIDADE(::System::Int32 AADIMLIOPCJ)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEOIIKCBFNG_FFKLJIIDADE_OFFSET))(this, AADIMLIOPCJ);
	}

	::System::Object* KJGFHDAMHGO()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOIIKCBFNG_KJGFHDAMHGO_OFFSET))(this);
	}

	::System::Int32 BHODJGKAAOL(::System::Int32 AADIMLIOPCJ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEOIIKCBFNG_BHODJGKAAOL_OFFSET))(this, AADIMLIOPCJ);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOIIKCBFNG_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Void JBGCFOADJGN(::System::Int32 GCCIGDBAPFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEOIIKCBFNG_JBGCFOADJGN_OFFSET))(this, GCCIGDBAPFL);
	}

	::System::Void NOAPKFBOOLJ(::System::Int32 AADIMLIOPCJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEOIIKCBFNG_NOAPKFBOOLJ_OFFSET))(this, AADIMLIOPCJ);
	}

	::System::Void ALMKFHKLGNE(::CNBBKIKPFKA* GIBBEEJNCON)
	{
		return ((::System::Void(*)(::PVOID, ::CNBBKIKPFKA*))((::PBYTE)hIl2Cpp + PEOIIKCBFNG_ALMKFHKLGNE_OFFSET))(this, GIBBEEJNCON);
	}

	::System::Int32 ONEMPGHHNOP(::System::Int32 AADIMLIOPCJ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEOIIKCBFNG_ONEMPGHHNOP_OFFSET))(this, AADIMLIOPCJ);
	}
};
