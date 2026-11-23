#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace System { class String; }

#define UNITYENGINE_AE0A3643487B6F0F_E8585DCA866501DA_OFFSET UNITYSDK_OFFSET(0x412B720)
#define UNITYENGINE_AE0A3643487B6F0F_ED55D86F04361D53_OFFSET UNITYSDK_OFFSET(0x412B6D0)
#define UNITYENGINE_AE0A3643487B6F0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int AE0A3643487B6F0F_TypeDefinitionIndex = 17231;

	class AE0A3643487B6F0F : public ::System::Object
	{
	public:
		static ::System::Boolean ED55D86F04361D53(::System::String* AD809911E2BA74A4, ::UnityEngine::A32676FCB736C8E8& FD6BEC6563AC7110)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::A32676FCB736C8E8&))((::PBYTE)hIl2Cpp + UNITYENGINE_AE0A3643487B6F0F_ED55D86F04361D53_OFFSET))(AD809911E2BA74A4, FD6BEC6563AC7110);
		}

		static ::System::Boolean E8585DCA866501DA(::System::String* AD809911E2BA74A4, ::UnityEngine::E46B881AA2636190& FD6BEC6563AC7110)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::E46B881AA2636190&))((::PBYTE)hIl2Cpp + UNITYENGINE_AE0A3643487B6F0F_E8585DCA866501DA_OFFSET))(AD809911E2BA74A4, FD6BEC6563AC7110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AE0A3643487B6F0F__CTOR_OFFSET))(this);
		}
	};
}
