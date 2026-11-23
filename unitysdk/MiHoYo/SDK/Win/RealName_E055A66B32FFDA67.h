#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/E71903803EDE1191.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class RealName; }

#define MIHOYO_SDK_WIN_REALNAME_E055A66B32FFDA67_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x39E46D0)
#define MIHOYO_SDK_WIN_REALNAME_E055A66B32FFDA67__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealName_E055A66B32FFDA67_TypeDefinitionIndex = 12727;

	class RealName_E055A66B32FFDA67 : public ::System::Object
	{
	public:
		::BED79290917896D4::E71903803EDE1191 A288CB28FC2A6DA3; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_E055A66B32FFDA67__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::RealName* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::RealName*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_E055A66B32FFDA67_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
