#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class SecondRealnameGrantPhone; }

#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_FCCEAFD2267E8480_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x393B860)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_FCCEAFD2267E8480__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SecondRealnameGrantPhone_FCCEAFD2267E8480_TypeDefinitionIndex = 12374;

	class SecondRealnameGrantPhone_FCCEAFD2267E8480 : public ::System::Object
	{
	public:
		::System::Boolean B9FF204A96C1AAFE; // 0x10
		::System::Boolean E877B04A6574B72C; // 0x11
		::System::Byte _padding0[0x6];
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_FCCEAFD2267E8480__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::SecondRealnameGrantPhone* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::SecondRealnameGrantPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_FCCEAFD2267E8480_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
