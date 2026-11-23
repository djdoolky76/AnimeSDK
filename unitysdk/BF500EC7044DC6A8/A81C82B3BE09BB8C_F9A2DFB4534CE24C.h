#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/FCA3E53C2DA052B5.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }

#define BF500EC7044DC6A8_A81C82B3BE09BB8C_F9A2DFB4534CE24C_INVOKE_OFFSET UNITYSDK_OFFSET(0x4227B80)
#define BF500EC7044DC6A8_A81C82B3BE09BB8C_F9A2DFB4534CE24C__CTOR_OFFSET UNITYSDK_OFFSET(0x4227BE0)

namespace BF500EC7044DC6A8
{
	inline static constexpr unsigned int A81C82B3BE09BB8C_F9A2DFB4534CE24C_TypeDefinitionIndex = 18538;

	class A81C82B3BE09BB8C_F9A2DFB4534CE24C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_A81C82B3BE09BB8C_F9A2DFB4534CE24C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::UnityEngine::FCA3E53C2DA052B5 Invoke(::UnityEngine::Vector2 ED6BA5E2880F301C, ::UnityEngine::Vector2 AB470184008E3FF1, ::System::Single A45600735D539BFC, ::System::Int32 FC300ADBDFF24726)
		{
			return ((::UnityEngine::FCA3E53C2DA052B5(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_A81C82B3BE09BB8C_F9A2DFB4534CE24C_INVOKE_OFFSET))(this, ED6BA5E2880F301C, AB470184008E3FF1, A45600735D539BFC, FC300ADBDFF24726);
		}
	};
}
