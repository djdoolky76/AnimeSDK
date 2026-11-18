#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJAMLAJJNHA;
namespace MoleMole { class UIGeneralChapterFinishWidgetController_Context; }
namespace MoleMole { class UIGeneralLevelUp02WidgetController_Context; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIInLevelTimerWidgetController_Context; }
namespace MoleMole { class UIWorldLevelUpWidgetController_Context; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KFCOPMFACDI_AHFGHOIOADC_OFFSET UNITYSDK_OFFSET(0x12983BD0)
#define KFCOPMFACDI_AJPMFIEHONF_OFFSET UNITYSDK_OFFSET(0x12983800)
#define KFCOPMFACDI_BIBIOMHCHCE_OFFSET UNITYSDK_OFFSET(0x129839F0)
#define KFCOPMFACDI_BOHABPEPCDH_OFFSET UNITYSDK_OFFSET(0x12983AD0)
#define KFCOPMFACDI_DLLOCDJDIKF_OFFSET UNITYSDK_OFFSET(0x129838F0)
#define KFCOPMFACDI_FIEHBHADBOM_OFFSET UNITYSDK_OFFSET(0x12983810)
#define KFCOPMFACDI_NAABNOGKNBH_OFFSET UNITYSDK_OFFSET(0x12983CD0)
#define KFCOPMFACDI_NFHNMGDMCOC_OFFSET UNITYSDK_OFFSET(0x12983BE0)
#define KFCOPMFACDI__CTOR_OFFSET UNITYSDK_OFFSET(0x129837F0)

inline static constexpr unsigned int KFCOPMFACDI_TypeDefinitionIndex = 67456;

class KFCOPMFACDI : public ::System::Object
{
public:
	::AJAMLAJJNHA* _LNMGAFHJMJJ_k__BackingField; // 0x10

	::System::Void _ctor(::AJAMLAJJNHA* KAINLJMNCHE)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + KFCOPMFACDI__CTOR_OFFSET))(this, KAINLJMNCHE);
	}

	::System::Void AJPMFIEHONF(::AJAMLAJJNHA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + KFCOPMFACDI_AJPMFIEHONF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean FIEHBHADBOM(::MoleMole::UIGeneralNewsBubbleRowWidgetController* OLJHPDNGHPO)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + KFCOPMFACDI_FIEHBHADBOM_OFFSET))(this, OLJHPDNGHPO);
	}

	::System::Void DLLOCDJDIKF(::MoleMole::UIGeneralChapterFinishWidgetController_Context* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralChapterFinishWidgetController_Context*))((::PBYTE)hIl2Cpp + KFCOPMFACDI_DLLOCDJDIKF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void BIBIOMHCHCE(::MoleMole::UIInLevelTimerWidgetController_Context* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelTimerWidgetController_Context*))((::PBYTE)hIl2Cpp + KFCOPMFACDI_BIBIOMHCHCE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void BOHABPEPCDH(::MoleMole::UIGeneralLevelUp02WidgetController_Context* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralLevelUp02WidgetController_Context*))((::PBYTE)hIl2Cpp + KFCOPMFACDI_BOHABPEPCDH_OFFSET))(this, AAOCANGHBDG);
	}

	::AJAMLAJJNHA* AHFGHOIOADC()
	{
		return ((::AJAMLAJJNHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCOPMFACDI_AHFGHOIOADC_OFFSET))(this);
	}

	::System::Boolean NFHNMGDMCOC(::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>* KPDNJEDICCM, ::MoleMole::UIGeneralNewsBubbleRowWidgetController* OLJHPDNGHPO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>*, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + KFCOPMFACDI_NFHNMGDMCOC_OFFSET))(this, KPDNJEDICCM, OLJHPDNGHPO);
	}

	::System::Void NAABNOGKNBH(::MoleMole::UIWorldLevelUpWidgetController_Context* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWorldLevelUpWidgetController_Context*))((::PBYTE)hIl2Cpp + KFCOPMFACDI_NAABNOGKNBH_OFFSET))(this, AAOCANGHBDG);
	}
};
