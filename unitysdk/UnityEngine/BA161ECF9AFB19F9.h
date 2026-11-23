#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_BA161ECF9AFB19F9_A4BEBC080438BA3D_OFFSET UNITYSDK_OFFSET(0x41455A0)
#define UNITYENGINE_BA161ECF9AFB19F9_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x41456C0)
#define UNITYENGINE_BA161ECF9AFB19F9_FE8D7346C63A081C_OFFSET UNITYSDK_OFFSET(0x4145490)

namespace UnityEngine
{
	inline static constexpr unsigned int BA161ECF9AFB19F9_TypeDefinitionIndex = 17401;

	class BA161ECF9AFB19F9 : public ::System::Object
	{
	public:
		static ::System::Void EEA5D6E8F4B2655A()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BA161ECF9AFB19F9_EEA5D6E8F4B2655A_OFFSET))();
		}

		static ::System::Void FE8D7346C63A081C()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BA161ECF9AFB19F9_FE8D7346C63A081C_OFFSET))();
		}

		static ::System::Void A4BEBC080438BA3D(::System::IntPtr FEE86DCFE60580D9)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_BA161ECF9AFB19F9_A4BEBC080438BA3D_OFFSET))(FEE86DCFE60580D9);
		}
	};
}
