#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueHandle.h"

namespace System { class Object; }
namespace UnityEngine::UIElements { class StyleSheet; }

#define BF47C5BD32803E8C_BB541E7C1154FBEA_A6CA921193F6FEB1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define BF47C5BD32803E8C_BB541E7C1154FBEA_A6CA921193F6FEB1__CTOR_OFFSET UNITYSDK_OFFSET(0x4339420)

namespace BF47C5BD32803E8C
{
	inline static constexpr unsigned int BB541E7C1154FBEA_A6CA921193F6FEB1_TypeDefinitionIndex = 13518;

	class BB541E7C1154FBEA_A6CA921193F6FEB1 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BF47C5BD32803E8C_BB541E7C1154FBEA_A6CA921193F6FEB1__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Int32 Invoke(::UnityEngine::UIElements::StyleSheet* A3240E0B408E3C48, ::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + BF47C5BD32803E8C_BB541E7C1154FBEA_A6CA921193F6FEB1_INVOKE_OFFSET))(this, A3240E0B408E3C48, E38FD399E4DFEF27);
		}
	};
}
