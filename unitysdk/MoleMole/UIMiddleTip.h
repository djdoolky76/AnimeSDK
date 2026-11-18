#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CACDNOJCICC.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/TipShowObj.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIMIDDLETIP_HIDE_OFFSET UNITYSDK_OFFSET(0x1961AEC0)
#define MOLEMOLE_UIMIDDLETIP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1961AB30)
#define MOLEMOLE_UIMIDDLETIP_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1961AAE0)
#define MOLEMOLE_UIMIDDLETIP_SHOWZENKOVTIP_OFFSET UNITYSDK_OFFSET(0x1961AD70)
#define MOLEMOLE_UIMIDDLETIP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1961AAA0)
#define MOLEMOLE_UIMIDDLETIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1961A900)
#define MOLEMOLE_UIMIDDLETIP___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1961B030)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiddleTip_TypeDefinitionIndex = 81312;

	class UIMiddleTip : public ::MoleMole::TipShowObj
	{
	public:
		::System::String* ShowSoundAction; // 0x30
		::System::Action* finishCallback; // 0x38
		::System::String* messageKey; // 0x40
		::System::String* HideSoundAction; // 0x48
		::System::String* ExtraMessage; // 0x50
		::System::String* Icon; // 0x58
		::Il2CppArray<::System::Object*>* messageArgs; // 0x60
		::System::Boolean ShowMainMessage; // 0x68
		::System::Boolean IsCanceled; // 0x69
		::System::Boolean ShowIcon; // 0x6A
		::System::Byte _padding0[0x1];
		::System::Single countdownSeconds; // 0x6C
		::System::Int32 ZenkovTipId; // 0x70
		::System::Single countdownEndDungeonTime; // 0x74
		::System::Int32 TipID; // 0x78

		::System::Void _ctor(::System::Int32 tiPid, ::FAKODLEPJOA page, ::System::Action* finishAction, ::System::String* debugText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FAKODLEPJOA, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP__CTOR_OFFSET))(this, tiPid, page, finishAction, debugText);
		}

		::System::Void _ctor_1(::System::Int32 tiPid, ::FAKODLEPJOA page, ::System::Single countdownSeconds, ::System::Action* finishCallback, ::System::String* debugText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FAKODLEPJOA, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP__CTOR_1_OFFSET))(this, tiPid, page, countdownSeconds, finishCallback, debugText);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_ONPROCESS_OFFSET))(this);
		}

		static ::MoleMole::UIMiddleTip* ShowZenkovTip(::System::Int32 zkTipId, ::CACDNOJCICC tipType, ::System::Single countdownSeconds, ::System::Action* finishCallback)
		{
			return ((::MoleMole::UIMiddleTip*(*)(::System::Int32, ::CACDNOJCICC, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_SHOWZENKOVTIP_OFFSET))(zkTipId, tipType, countdownSeconds, finishCallback);
		}

		static ::System::Void Hide(::System::Int32 tipid)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_HIDE_OFFSET))(tipid);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
