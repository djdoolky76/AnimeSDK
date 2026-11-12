#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define PEPGBNEBKLL_CTOR_OFFSET UNITYSDK_OFFSET(0xCADABC0)
#define PEPGBNEBKLL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xCADAB20)
#define PEPGBNEBKLL__ONBIND_OFFSET UNITYSDK_OFFSET(0xCADA8C0)
#define PEPGBNEBKLL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xCADAA80)

inline static constexpr unsigned int PEPGBNEBKLL_TypeDefinitionIndex = 73383;

	class PEPGBNEBKLL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x60
		::UnityEngine::Transform* LKCFNPNEFHH; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::System::Boolean IAPJFCPEOBL; // 0x78
		// static const ::System::String* FOJHBNDBANG; // 0x0
		// static const ::System::String* KGNMFJAMICO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGBNEBKLL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGBNEBKLL__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPGBNEBKLL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPGBNEBKLL_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

	};
