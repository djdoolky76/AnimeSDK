#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TAPTAP_SDK_UIBASE_A16A80EEC26BC2B3_OFFSET UNITYSDK_OFFSET(0x3F0F2C0)
#define TAPTAP_SDK_UIBASE_AA441BDB89BD1A4C_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define TAPTAP_SDK_UIBASE_AB00AA78B0C50C21_OFFSET UNITYSDK_OFFSET(0x3F0F350)
#define TAPTAP_SDK_UIBASE_F927A892D52E078F_OFFSET UNITYSDK_OFFSET(0x3F0F320)
#define TAPTAP_SDK_UIBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIBase_TypeDefinitionIndex = 20899;

	class UIBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void AA441BDB89BD1A4C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_AA441BDB89BD1A4C_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE__CTOR_OFFSET))(this);
		}

		::System::Void F927A892D52E078F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_F927A892D52E078F_OFFSET))(this);
		}

		::System::Void AB00AA78B0C50C21()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_AB00AA78B0C50C21_OFFSET))(this);
		}

		::System::Void A16A80EEC26BC2B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_A16A80EEC26BC2B3_OFFSET))(this);
		}
	};
}
