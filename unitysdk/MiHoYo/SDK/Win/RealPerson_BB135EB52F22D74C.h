#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class RealPerson; }

#define MIHOYO_SDK_WIN_REALPERSON_BB135EB52F22D74C_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A11C60)
#define MIHOYO_SDK_WIN_REALPERSON_BB135EB52F22D74C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealPerson_BB135EB52F22D74C_TypeDefinitionIndex = 12755;

	class RealPerson_BB135EB52F22D74C : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_BB135EB52F22D74C__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::RealPerson* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::RealPerson*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_BB135EB52F22D74C_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
