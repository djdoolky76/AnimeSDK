#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define KNGDBHDPINK_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD2120)
#define KNGDBHDPINK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBDD1EA0)
#define KNGDBHDPINK__ONBIND_OFFSET UNITYSDK_OFFSET(0xBDD1C10)

inline static constexpr unsigned int KNGDBHDPINK_TypeDefinitionIndex = 73351;

	class KNGDBHDPINK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* EGAEPHINFAP; // 0x60
		::UnityEngine::Transform* FCDDMEAANPH; // 0x68
		::UnityEngine::Transform* LHIBEDODAHA; // 0x70
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x78
		::UnityEngine::Transform* AOKHJDHAAKP; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGDBHDPINK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGDBHDPINK__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNGDBHDPINK_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};
