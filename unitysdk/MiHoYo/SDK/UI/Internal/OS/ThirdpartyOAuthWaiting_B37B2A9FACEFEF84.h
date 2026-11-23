#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E87F6A3F95B81EED/E0393782514B4998.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::Internal::OS { class ThirdpartyOAuthWaiting; }

#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_B37B2A9FACEFEF84_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3953E10)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_B37B2A9FACEFEF84__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int ThirdpartyOAuthWaiting_B37B2A9FACEFEF84_TypeDefinitionIndex = 12436;

	class ThirdpartyOAuthWaiting_B37B2A9FACEFEF84 : public ::System::Object
	{
	public:
		::E87F6A3F95B81EED::E0393782514B4998 A288CB28FC2A6DA3; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_B37B2A9FACEFEF84__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::UI::Internal::OS::ThirdpartyOAuthWaiting* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::ThirdpartyOAuthWaiting*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_B37B2A9FACEFEF84_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
