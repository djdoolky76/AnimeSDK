#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDJDADFHFLC.h"
#include "unitysdk/BILDFGMKAJI.h"
#include "unitysdk/GFEJHAAEAHL.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/OEFENONCHCI.h"
#include "unitysdk/System/Object.h"

#define MKIKNNNICNI_JHALBGJIFBP_OFFSET UNITYSDK_OFFSET(0x17D46060)
#define MKIKNNNICNI_NMNCGHBKBJK_OFFSET UNITYSDK_OFFSET(0x17D460B0)
#define MKIKNNNICNI_PKCKDJEOEEC_1_OFFSET UNITYSDK_OFFSET(0x17D46160)
#define MKIKNNNICNI_PKCKDJEOEEC_OFFSET UNITYSDK_OFFSET(0x17D46110)

inline static constexpr unsigned int MKIKNNNICNI_TypeDefinitionIndex = 57061;

class MKIKNNNICNI : public ::System::Object
{
public:
	static ::GFEJHAAEAHL JHALBGJIFBP(::BILDFGMKAJI OHMFNPBKMHH)
	{
		return ((::GFEJHAAEAHL(*)(::BILDFGMKAJI))((::PBYTE)hIl2Cpp + MKIKNNNICNI_JHALBGJIFBP_OFFSET))(OHMFNPBKMHH);
	}

	static ::MoleMole::UI::FlowerShop::ESlotType NMNCGHBKBJK(::BDJDADFHFLC DBAPGLLIFHD)
	{
		return ((::MoleMole::UI::FlowerShop::ESlotType(*)(::BDJDADFHFLC))((::PBYTE)hIl2Cpp + MKIKNNNICNI_NMNCGHBKBJK_OFFSET))(DBAPGLLIFHD);
	}

	static ::System::Boolean PKCKDJEOEEC(::OEFENONCHCI EGEGIMGMJHN, ::OEFENONCHCI FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::OEFENONCHCI, ::OEFENONCHCI))((::PBYTE)hIl2Cpp + MKIKNNNICNI_PKCKDJEOEEC_OFFSET))(EGEGIMGMJHN, FCPCLIJNDLA);
	}

	static ::System::Boolean PKCKDJEOEEC_1(::MoleMole::UI::FlowerShop::EFinishJudge EGEGIMGMJHN, ::MoleMole::UI::FlowerShop::EFinishJudge FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::MoleMole::UI::FlowerShop::EFinishJudge, ::MoleMole::UI::FlowerShop::EFinishJudge))((::PBYTE)hIl2Cpp + MKIKNNNICNI_PKCKDJEOEEC_1_OFFSET))(EGEGIMGMJHN, FCPCLIJNDLA);
	}
};
