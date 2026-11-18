#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BDCKHDEBKKK;
class FBHPDPBIGPK;
class JDAPCJLHKIO;
class LIJOIPMOMJD_DAHFIBGBOKG;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15946AB0)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15946CE0)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15946A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarViewWithNumColorWidgetController_Context_TypeDefinitionIndex = 92397;

	class UIAvatarViewWithNumColorWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickInvite; // 0x28
		::System::String* UpTipKey; // 0x30
		::System::String* AttributePath; // 0x38
		::Foundation::AssetPath AvatarIconFullPath; // 0x40
		::FBHPDPBIGPK* briefInfo; // 0x50
		::System::String* PlayerName; // 0x58
		::BDCKHDEBKKK* PlayerBrief; // 0x60
		::System::String* HeadPortraitPath; // 0x68
		::System::Boolean EnableWait; // 0x70
		::System::Boolean IsLeader; // 0x71
		::System::Boolean IsFrameTexture; // 0x72
		::System::Boolean IsPowerEnough; // 0x73
		::System::Boolean EnableInfoBtn; // 0x74
		::System::Boolean IsReject; // 0x75
		::System::Boolean IsRealPlayer; // 0x76
		::System::Boolean ShowAttribute; // 0x77
		::System::Int32 OtherMessageID; // 0x78
		::System::Int32 PowerNum; // 0x7C
		::System::Boolean IsShowText; // 0x80
		::System::Boolean ShowSelf; // 0x81
		::System::Byte _padding0[0x2];
		::System::Single ShowTextTimer; // 0x84
		::System::Boolean IsReady; // 0x88
		::System::Boolean EnableKick; // 0x89
		::System::Boolean EnableTips; // 0x8A
		::System::Boolean ShowPower; // 0x8B
		::System::Int32 index; // 0x8C
		::System::Int32 SelfMessageID; // 0x90
		::System::Boolean EnableInvite; // 0x94
		::System::Boolean HideName; // 0x95
		::System::Boolean ShowLoading; // 0x96
		::System::Boolean EnableAdd; // 0x97

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIJOIPMOMJD_DAHFIBGBOKG* coopPlayerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::LIJOIPMOMJD_DAHFIBGBOKG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, coopPlayerInfo);
		}

		::System::Void _ctor_2(::JDAPCJLHKIO* embattleFightInfo, ::System::Boolean showPlayerIcon)
		{
			return ((::System::Void(*)(::PVOID, ::JDAPCJLHKIO*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET))(this, embattleFightInfo, showPlayerIcon);
		}
	};
}
