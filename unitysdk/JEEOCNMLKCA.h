#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPPCLJMLCL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class EBEAAFHPBJG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEEOCNMLKCA_FAOHEMFMDJH_OFFSET UNITYSDK_OFFSET(0x160DBE90)
#define JEEOCNMLKCA_HGMIAGPCIJI_OFFSET UNITYSDK_OFFSET(0x160DBF90)
#define JEEOCNMLKCA_LCEKNHNIPIC_1_OFFSET UNITYSDK_OFFSET(0x160DC1A0)
#define JEEOCNMLKCA_LCEKNHNIPIC_2_OFFSET UNITYSDK_OFFSET(0x160DC2D0)
#define JEEOCNMLKCA_LCEKNHNIPIC_OFFSET UNITYSDK_OFFSET(0x160DC0E0)
#define JEEOCNMLKCA_MFMOPLGHFLD_OFFSET UNITYSDK_OFFSET(0x160DBD30)

inline static constexpr unsigned int JEEOCNMLKCA_TypeDefinitionIndex = 89561;

class JEEOCNMLKCA : public ::System::Object
{
public:
	static ::System::Void MFMOPLGHFLD(::EBEAAFHPBJG* KPILIGMMCFC, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* KEOIBHMAGAP)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*))((::PBYTE)hIl2Cpp + JEEOCNMLKCA_MFMOPLGHFLD_OFFSET))(KPILIGMMCFC, KEOIBHMAGAP);
	}

	static ::System::Void FAOHEMFMDJH(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + JEEOCNMLKCA_FAOHEMFMDJH_OFFSET))(KPILIGMMCFC, PHHDHIBOCKA);
	}

	static ::System::Void HGMIAGPCIJI(::EBEAAFHPBJG* KPILIGMMCFC)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*))((::PBYTE)hIl2Cpp + JEEOCNMLKCA_HGMIAGPCIJI_OFFSET))(KPILIGMMCFC);
	}

	static ::System::Boolean LCEKNHNIPIC(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA, ::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA, ::LPPPCLJMLCL& KKMENMCMMBN)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::RenderDataHandle, ::LPPPCLJMLCL&))((::PBYTE)hIl2Cpp + JEEOCNMLKCA_LCEKNHNIPIC_OFFSET))(BONICGBNDAA, PHHDHIBOCKA, KKMENMCMMBN);
	}

	static ::System::Boolean LCEKNHNIPIC_1(::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA, ::LPPPCLJMLCL& JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::RenderDataHandle, ::LPPPCLJMLCL&))((::PBYTE)hIl2Cpp + JEEOCNMLKCA_LCEKNHNIPIC_1_OFFSET))(PHHDHIBOCKA, JKBLDFBGBPK);
	}

	static ::System::Boolean LCEKNHNIPIC_2(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA, ::LPPPCLJMLCL& KKMENMCMMBN)
	{
		return ((::System::Boolean(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::RenderDataHandle, ::LPPPCLJMLCL&))((::PBYTE)hIl2Cpp + JEEOCNMLKCA_LCEKNHNIPIC_2_OFFSET))(KPILIGMMCFC, PHHDHIBOCKA, KKMENMCMMBN);
	}
};
