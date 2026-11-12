#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKNHCMPADM;
namespace System { class String; }

#define RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0xD140AC0)
#define RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETEXPIRETIMETEXT_OFFSET UNITYSDK_OFFSET(0xD1407B0)
#define RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETISRESIDENT_1_OFFSET UNITYSDK_OFFSET(0xD140760)
#define RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETISRESIDENT_OFFSET UNITYSDK_OFFSET(0xD140690)
#define RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS__GETFORMATEEXPIRETIME_OFFSET UNITYSDK_OFFSET(0xD140960)

namespace RPG::Client::Badge
{
	inline static constexpr unsigned int BadgeDataExtensions_TypeDefinitionIndex = 77324;

	class BadgeDataExtensions : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__EXPIRE_TIME_TEXT_ID()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Badge", "BadgeDataExtensions")->GetStaticField(0x58B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_CCTOR_OFFSET))();
		}

		static ::System::Boolean GetIsResident(::JFKNHCMPADM* a1)
		{
			return ((::System::Boolean(*)(::JFKNHCMPADM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETISRESIDENT_OFFSET))(a1);
		}

		static ::System::String* GetExpireTimeText(::JFKNHCMPADM* a1)
		{
			return ((::System::String*(*)(::JFKNHCMPADM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETEXPIRETIMETEXT_OFFSET))(a1);
		}

		static ::System::String* _GetFormateExpireTime(::JFKNHCMPADM* a1)
		{
			return ((::System::String*(*)(::JFKNHCMPADM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS__GETFORMATEEXPIRETIME_OFFSET))(a1);
		}

		static ::System::Boolean GetIsResident_1(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETISRESIDENT_1_OFFSET))(a1);
		}

	};
}
