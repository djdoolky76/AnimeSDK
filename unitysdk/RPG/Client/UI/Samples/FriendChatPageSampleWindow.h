#pragma once
#include "unitysdk/unitysdk.h"
class EDNECKFHLEM;
class LIPLALHKAPP;
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_CHANGECONTACTNAME_OFFSET UNITYSDK_OFFSET(0xE405620)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xE4054B0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE4055A0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW__ONSELECTEDTABPRECHANGING_OFFSET UNITYSDK_OFFSET(0xE4056D0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatPageSampleWindow_TypeDefinitionIndex = 73451;

	class FriendChatPageSampleWindow
	{
	public:
		::UnityEngine::Animator* _UiStateController; // 0x60
		::System::Boolean _IsFirstEnter; // 0x68
		::System::Void _ctor(::LIPLALHKAPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIPLALHKAPP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_CTOR_OFFSET))(this, a1);
		}

		::LIPLALHKAPP* get_TypedDataContext()
		{
			return ((::LIPLALHKAPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void ChangeContactName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_CHANGECONTACTNAME_OFFSET))(this);
		}

		::System::Void _OnSelectedTabPreChanging(::EDNECKFHLEM* a1, ::EDNECKFHLEM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW__ONSELECTEDTABPRECHANGING_OFFSET))(this, a1, a2);
		}

	};
}
