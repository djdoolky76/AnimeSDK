#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class LoadingTips; }
namespace System { class String; }

#define MIHOYO_SDK_LOADINGTIPS_EA8D6AB4DEAC58FC_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A109A0)
#define MIHOYO_SDK_LOADINGTIPS_EA8D6AB4DEAC58FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoadingTips_EA8D6AB4DEAC58FC_TypeDefinitionIndex = 12739;

	class LoadingTips_EA8D6AB4DEAC58FC : public ::System::Object
	{
	public:
		::System::String* A3F06B88B290B21F; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_EA8D6AB4DEAC58FC__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::LoadingTips* BE39D0335F011A03)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::LoadingTips*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_EA8D6AB4DEAC58FC_BF3138F24160F012_OFFSET))(this, BE39D0335F011A03);
		}
	};
}
