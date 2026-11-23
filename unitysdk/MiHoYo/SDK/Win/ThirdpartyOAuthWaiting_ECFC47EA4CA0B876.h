#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EA196BCE7171502B/E0393782514B4998.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class ThirdpartyOAuthWaiting; }

#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_ECFC47EA4CA0B876_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x393B5C0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_ECFC47EA4CA0B876__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ThirdpartyOAuthWaiting_ECFC47EA4CA0B876_TypeDefinitionIndex = 12377;

	class ThirdpartyOAuthWaiting_ECFC47EA4CA0B876 : public ::System::Object
	{
	public:
		::EA196BCE7171502B::E0393782514B4998 A288CB28FC2A6DA3; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_ECFC47EA4CA0B876__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::ThirdpartyOAuthWaiting* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::ThirdpartyOAuthWaiting*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_ECFC47EA4CA0B876_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
