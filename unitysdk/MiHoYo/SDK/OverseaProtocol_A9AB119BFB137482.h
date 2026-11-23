#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/B56403EF16E61917.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class OverseaProtocol; }

#define MIHOYO_SDK_OVERSEAPROTOCOL_A9AB119BFB137482_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x39A06D0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_A9AB119BFB137482__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int OverseaProtocol_A9AB119BFB137482_TypeDefinitionIndex = 12523;

	class OverseaProtocol_A9AB119BFB137482 : public ::System::Object
	{
	public:
		::BED79290917896D4::B56403EF16E61917 A288CB28FC2A6DA3; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_A9AB119BFB137482__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::OverseaProtocol* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::OverseaProtocol*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_A9AB119BFB137482_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
