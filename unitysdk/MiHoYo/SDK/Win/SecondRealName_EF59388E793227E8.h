#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/E71903803EDE1191.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class SecondRealName; }

#define MIHOYO_SDK_WIN_SECONDREALNAME_EF59388E793227E8_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A5BB40)
#define MIHOYO_SDK_WIN_SECONDREALNAME_EF59388E793227E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SecondRealName_EF59388E793227E8_TypeDefinitionIndex = 12993;

	class SecondRealName_EF59388E793227E8 : public ::System::Object
	{
	public:
		::BED79290917896D4::E71903803EDE1191 A288CB28FC2A6DA3; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_EF59388E793227E8__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::SecondRealName* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::SecondRealName*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_EF59388E793227E8_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
