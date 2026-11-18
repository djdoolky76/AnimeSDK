#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieFairy.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieInputLogicType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }

#define HAMPNHGDBBI_DCAFAKJNNEH_OFFSET UNITYSDK_OFFSET(0x16CE0120)
#define HAMPNHGDBBI_DKKHMDHHIOG_OFFSET UNITYSDK_OFFSET(0x16CE0310)
#define HAMPNHGDBBI_EKAHFDMLMKO_OFFSET UNITYSDK_OFFSET(0x16CE0300)
#define HAMPNHGDBBI_GOHGJBINLJI_OFFSET UNITYSDK_OFFSET(0x16CE01C0)
#define HAMPNHGDBBI_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x16CDF460)
#define HAMPNHGDBBI_MLGPJCJDABB_OFFSET UNITYSDK_OFFSET(0x16CE03F0)
#define HAMPNHGDBBI_OAILBBDFONC_OFFSET UNITYSDK_OFFSET(0x16CE0390)
#define HAMPNHGDBBI__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDF450)

inline static constexpr unsigned int HAMPNHGDBBI_TypeDefinitionIndex = 81636;

class HAMPNHGDBBI : public ::System::Object
{
public:
	::MoleMole::UIGeneralNewsBubbleWidgetController* IPOFDPMHKBA; // 0x10
	::MoleMole::ConfigNewbie_NewbieFairy BLNGAPNOOIG; // 0x18
	::MoleMole::ConfigNewbie_NewbieInputLogicType GMEFBEGPNBE; // 0x30
	::System::Int32 HHKECKHJKEG; // 0x34
	::System::Boolean OCPOEJLJMHK; // 0x38

	::System::Void _ctor(::MoleMole::UIGeneralNewsBubbleWidgetController* NPIGINFAKGN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController*))((::PBYTE)hIl2Cpp + HAMPNHGDBBI__CTOR_OFFSET))(this, NPIGINFAKGN);
	}

	::System::Void IAFHBCHLBME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMPNHGDBBI_IAFHBCHLBME_OFFSET))(this);
	}

	::System::Void GOHGJBINLJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMPNHGDBBI_GOHGJBINLJI_OFFSET))(this);
	}

	::System::Boolean EKAHFDMLMKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMPNHGDBBI_EKAHFDMLMKO_OFFSET))(this);
	}

	::System::Void DKKHMDHHIOG(::MoleMole::ConfigNewbie_NewbieFairy AIEGLBFJLML, ::System::Boolean AMGGBKOGNAI, ::MoleMole::ConfigNewbie_NewbieInputLogicType JNADCGBMJFP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_NewbieFairy, ::System::Boolean, ::MoleMole::ConfigNewbie_NewbieInputLogicType))((::PBYTE)hIl2Cpp + HAMPNHGDBBI_DKKHMDHHIOG_OFFSET))(this, AIEGLBFJLML, AMGGBKOGNAI, JNADCGBMJFP);
	}

	::System::Boolean OAILBBDFONC(::MoleMole::UIGeneralNewsBubbleRowWidgetController* JOLDOMEIKEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + HAMPNHGDBBI_OAILBBDFONC_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Boolean MLGPJCJDABB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMPNHGDBBI_MLGPJCJDABB_OFFSET))(this);
	}

	::System::Int32 DCAFAKJNNEH(::System::Int32 CICIFODBIJK)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAMPNHGDBBI_DCAFAKJNNEH_OFFSET))(this, CICIFODBIJK);
	}
};
