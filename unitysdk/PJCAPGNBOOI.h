#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class MCAFEEEDDKJ;
class MLKKDHPBPNJ;
class PHCAOEMIJPJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJCAPGNBOOI_BBAOAECCDOO_OFFSET UNITYSDK_OFFSET(0x1C65E670)
#define PJCAPGNBOOI_CPCLPEMBADB_OFFSET UNITYSDK_OFFSET(0x1C65EBD0)
#define PJCAPGNBOOI_NJDOFNDHKJH_1_OFFSET UNITYSDK_OFFSET(0x1C65ECF0)
#define PJCAPGNBOOI_NJDOFNDHKJH_OFFSET UNITYSDK_OFFSET(0x1C65E590)

inline static constexpr unsigned int PJCAPGNBOOI_TypeDefinitionIndex = 44225;

class PJCAPGNBOOI : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::RenderDataHandle NJDOFNDHKJH(::MLKKDHPBPNJ* NCLJEDFMCID, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>* EPJHHNNGBIH)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MLKKDHPBPNJ*, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>*))((::PBYTE)hIl2Cpp + PJCAPGNBOOI_NJDOFNDHKJH_OFFSET))(NCLJEDFMCID, EKPEBNCLJPM, EPJHHNNGBIH);
	}

	static ::System::Void BBAOAECCDOO(::MLKKDHPBPNJ* NCLJEDFMCID, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::MLKKDHPBPNJ*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PJCAPGNBOOI_BBAOAECCDOO_OFFSET))(NCLJEDFMCID, EKPEBNCLJPM);
	}

	static ::System::Void CPCLPEMBADB(::MLKKDHPBPNJ* NCLJEDFMCID, ::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::MLKKDHPBPNJ*, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + PJCAPGNBOOI_CPCLPEMBADB_OFFSET))(NCLJEDFMCID, PHHDHIBOCKA);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle NJDOFNDHKJH_1(::MLKKDHPBPNJ* NCLJEDFMCID, ::MoleMole::HollowChessboard::HollowCell PLCAJMBIJIB, ::Il2CppArray<::PHCAOEMIJPJ*>* EPJHHNNGBIH, ::MCAFEEEDDKJ* GCMEHHGNGOF)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MLKKDHPBPNJ*, ::MoleMole::HollowChessboard::HollowCell, ::Il2CppArray<::PHCAOEMIJPJ*>*, ::MCAFEEEDDKJ*))((::PBYTE)hIl2Cpp + PJCAPGNBOOI_NJDOFNDHKJH_1_OFFSET))(NCLJEDFMCID, PLCAJMBIJIB, EPJHHNNGBIH, GCMEHHGNGOF);
	}
};
