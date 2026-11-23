#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_MIHOYOSDK_B46FD1953FC5C6B6_FD26A7A7E9BCC73B_OFFSET UNITYSDK_OFFSET(0x2945DE0)
#define MIHOYO_SDK_MIHOYOSDK_B46FD1953FC5C6B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDK_B46FD1953FC5C6B6_TypeDefinitionIndex = 15381;

	class MiHoYoSDK_B46FD1953FC5C6B6 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>* E04D2BE64FCE9814; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_B46FD1953FC5C6B6__CTOR_OFFSET))(this);
		}

		::System::Void FD26A7A7E9BCC73B(::System::Int32 B714679C324FF96E, ::UnityEngine::Texture2D* E2F69B1AC05DF698)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_B46FD1953FC5C6B6_FD26A7A7E9BCC73B_OFFSET))(this, B714679C324FF96E, E2F69B1AC05DF698);
		}
	};
}
