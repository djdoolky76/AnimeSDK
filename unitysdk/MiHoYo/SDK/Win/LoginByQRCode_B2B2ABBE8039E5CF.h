#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/F06B0A1E7343B846.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginByQRCode; }

#define MIHOYO_SDK_WIN_LOGINBYQRCODE_B2B2ABBE8039E5CF_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A990F0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_B2B2ABBE8039E5CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByQRCode_B2B2ABBE8039E5CF_TypeDefinitionIndex = 12051;

	class LoginByQRCode_B2B2ABBE8039E5CF : public ::System::Object
	{
	public:
		::BED79290917896D4::F06B0A1E7343B846 A288CB28FC2A6DA3; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_B2B2ABBE8039E5CF__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::LoginByQRCode* AED0C4705E731A6C)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LoginByQRCode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_B2B2ABBE8039E5CF_BF3138F24160F012_OFFSET))(this, AED0C4705E731A6C);
		}
	};
}
