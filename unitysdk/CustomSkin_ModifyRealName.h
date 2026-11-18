#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class GLMADFBCPPC;
namespace MoleMole { class UIGeneralRealAuthenticationDialogPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_MODIFYREALNAME_BACK_OFFSET UNITYSDK_OFFSET(0x12B97EB0)
#define CUSTOMSKIN_MODIFYREALNAME_INSTANCE_OFFSET UNITYSDK_OFFSET(0x12B971D0)
#define CUSTOMSKIN_MODIFYREALNAME_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x12B97F30)
#define CUSTOMSKIN_MODIFYREALNAME_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x12B97390)
#define CUSTOMSKIN_MODIFYREALNAME_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x12B98230)
#define CUSTOMSKIN_MODIFYREALNAME_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12B973F0)
#define CUSTOMSKIN_MODIFYREALNAME_SETLISTENER_OFFSET UNITYSDK_OFFSET(0x12B97B40)
#define CUSTOMSKIN_MODIFYREALNAME_SETTEXT_OFFSET UNITYSDK_OFFSET(0x12B97770)
#define CUSTOMSKIN_MODIFYREALNAME_SUBMIT_OFFSET UNITYSDK_OFFSET(0x12B97FB0)
#define CUSTOMSKIN_MODIFYREALNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x12B97300)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_0_OFFSET UNITYSDK_OFFSET(0x12B98340)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_1_OFFSET UNITYSDK_OFFSET(0x12B98390)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_2_OFFSET UNITYSDK_OFFSET(0x12B983E0)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_3_OFFSET UNITYSDK_OFFSET(0x12B98460)

inline static constexpr unsigned int CustomSkin_ModifyRealName_TypeDefinitionIndex = 67756;

class CustomSkin_ModifyRealName : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_ModifyRealName** StaticGet__instance()
	{
		return (::CustomSkin_ModifyRealName**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_ModifyRealName_TypeDefinitionIndex)->GetStaticField(0x45DF0);
	}
	::MoleMole::UIGeneralRealAuthenticationDialogPopWindowController* realName; // 0x18
	::GLMADFBCPPC* _view; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_ModifyRealName* Instance()
	{
		return ((::CustomSkin_ModifyRealName*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_ONSHOW_OFFSET))(this);
	}

	::System::Void SetText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_SETTEXT_OFFSET))(this);
	}

	::System::Void SetListener()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_SETLISTENER_OFFSET))(this);
	}

	::System::Void Back()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_BACK_OFFSET))(this);
	}

	::System::Void MeetProblem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_MEETPROBLEM_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _SetListener_b__7_0(::System::String* str)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_0_OFFSET))(this, str);
	}

	::System::Void _SetListener_b__7_1(::System::String* str)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_1_OFFSET))(this, str);
	}

	::System::Void _SetListener_b__7_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_2_OFFSET))(this);
	}

	::System::Void _SetListener_b__7_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_3_OFFSET))(this);
	}
};
