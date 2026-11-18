#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FILGGMBPDJD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class DFEONFMKCKE;
class FBAMLABJMKF;
class FMNAIOANOLK;
class PEOIIIGPCBA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOOCHOAMGIO_BAJDNELJJAO_OFFSET UNITYSDK_OFFSET(0x13CD4D60)
#define JOOCHOAMGIO_CICNLCBEIGI_OFFSET UNITYSDK_OFFSET(0x13CD4440)
#define JOOCHOAMGIO_MCKAGGFHDMO_OFFSET UNITYSDK_OFFSET(0x13CD4280)
#define JOOCHOAMGIO_MGJELEIEEJB_OFFSET UNITYSDK_OFFSET(0x13CD46A0)
#define JOOCHOAMGIO__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD4260)

inline static constexpr unsigned int JOOCHOAMGIO_TypeDefinitionIndex = 47903;

class JOOCHOAMGIO : public ::System::Object
{
public:
	::DFEONFMKCKE* BFJONIPNMBI; // 0x10
	::FILGGMBPDJD KLMBCBMDFLP; // 0x18
	::MoleMole::HollowChessboard::HollowCell KGDJEJOOHPA; // 0x1C

	::System::Void _ctor(::DFEONFMKCKE* BFJONIPNMBI, ::FILGGMBPDJD FGDPOAFBDID, ::MoleMole::HollowChessboard::HollowCell KGDJEJOOHPA)
	{
		return ((::System::Void(*)(::PVOID, ::DFEONFMKCKE*, ::FILGGMBPDJD, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + JOOCHOAMGIO__CTOR_OFFSET))(this, BFJONIPNMBI, FGDPOAFBDID, KGDJEJOOHPA);
	}

	::System::Boolean MCKAGGFHDMO(::FBAMLABJMKF* COBEJJHGMPO, ::PEOIIIGPCBA* FJBHBMIGONG, ::System::Collections::Generic::List_1<::System::Object*>*& MFMMNJOHAIE)
	{
		return ((::System::Boolean(*)(::PVOID, ::FBAMLABJMKF*, ::PEOIIIGPCBA*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + JOOCHOAMGIO_MCKAGGFHDMO_OFFSET))(this, COBEJJHGMPO, FJBHBMIGONG, MFMMNJOHAIE);
	}

	static ::System::Boolean MGJELEIEEJB(::DFEONFMKCKE* BFJONIPNMBI, ::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI, ::FMNAIOANOLK*& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::DFEONFMKCKE*, ::MoleMole::HollowChessboard::HollowCell, ::FMNAIOANOLK*&))((::PBYTE)hIl2Cpp + JOOCHOAMGIO_MGJELEIEEJB_OFFSET))(BFJONIPNMBI, ECHBPPIEIKI, LJBPECKCCEA);
	}

	::System::Collections::Generic::List_1<::System::Object*>* CICNLCBEIGI(::PEOIIIGPCBA* GENNIFDPOAM, ::DFEONFMKCKE* BFJONIPNMBI, ::FBAMLABJMKF* COBEJJHGMPO, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* CKOCENEJDOB)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::PEOIIIGPCBA*, ::DFEONFMKCKE*, ::FBAMLABJMKF*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + JOOCHOAMGIO_CICNLCBEIGI_OFFSET))(this, GENNIFDPOAM, BFJONIPNMBI, COBEJJHGMPO, CKOCENEJDOB);
	}

	static ::System::Nullable_1<::System::Object*> BAJDNELJJAO(::PEOIIIGPCBA* GENNIFDPOAM, ::DFEONFMKCKE* BFJONIPNMBI, ::FBAMLABJMKF* COBEJJHGMPO, ::MoleMole::HollowChessboard::HollowCell PJIHOFJIPHP)
	{
		return ((::System::Nullable_1<::System::Object*>(*)(::PEOIIIGPCBA*, ::DFEONFMKCKE*, ::FBAMLABJMKF*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + JOOCHOAMGIO_BAJDNELJJAO_OFFSET))(GENNIFDPOAM, BFJONIPNMBI, COBEJJHGMPO, PJIHOFJIPHP);
	}
};
