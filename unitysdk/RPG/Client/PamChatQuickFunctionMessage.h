#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4C4CC0)
#define RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE_GETSENDTEXT_OFFSET UNITYSDK_OFFSET(0xE4C4CD0)
#define RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xE4C5280)
#define RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE_GET_ISAVATARSELECTED_OFFSET UNITYSDK_OFFSET(0xE4C4D60)
#define RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE4C5270)
#define RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE__GETFUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0xE4C5150)
#define RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE__GETSELECTEDAVATARNAME_OFFSET UNITYSDK_OFFSET(0xE4C4DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatQuickFunctionMessage_TypeDefinitionIndex = 64725;

	class PamChatQuickFunctionMessage : public ::System::Object
	{
	public:
		::RPG::Client::PamChatQuickFunctionType _Type_k__BackingField; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::Client::PamChatQuickFunctionType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* GetSendText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE_GETSENDTEXT_OFFSET))(this);
		}

		::System::String* _GetSelectedAvatarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE__GETSELECTEDAVATARNAME_OFFSET))(this);
		}

		::System::String* _GetFunctionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE__GETFUNCTIONNAME_OFFSET))(this);
		}

		::System::Boolean get_IsAvatarSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE_GET_ISAVATARSELECTED_OFFSET))(this);
		}

		::RPG::Client::PamChatQuickFunctionType get_Type()
		{
			return ((::RPG::Client::PamChatQuickFunctionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATQUICKFUNCTIONMESSAGE_GET_AVATARID_OFFSET))(this);
		}

	};
}
