#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class SafeMobileBind; }

#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_FE1595B414865737_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A2A960)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_FE1595B414865737__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafeMobileBind_FE1595B414865737_TypeDefinitionIndex = 12882;

	class SafeMobileBind_FE1595B414865737 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_FE1595B414865737__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::SafeMobileBind* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::SafeMobileBind*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_FE1595B414865737_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
