#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaConfirmWithTitle; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_B150F87E478ACDC4_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x39E4590)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_B150F87E478ACDC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaConfirmWithTitle_B150F87E478ACDC4_TypeDefinitionIndex = 12700;

	class OverseaConfirmWithTitle_B150F87E478ACDC4 : public ::System::Object
	{
	public:
		::System::String* B383F0530E7FBDBD; // 0x10
		::System::String* E0C0689B1CEBE48C; // 0x18
		::System::String* E0B4391AC34FC359; // 0x20
		::System::String* A1340C81E2E9AD9F; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_B150F87E478ACDC4__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::OverseaConfirmWithTitle* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaConfirmWithTitle*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_B150F87E478ACDC4_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
