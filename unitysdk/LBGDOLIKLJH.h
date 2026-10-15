#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define LBGDOLIKLJH_BBJICMCNCLJ_OFFSET UNITYSDK_OFFSET(0xB5F3E40)
#define LBGDOLIKLJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F3EF0)
#define LBGDOLIKLJH_FGICCPHJGGB_OFFSET UNITYSDK_OFFSET(0xB5F3DB0)
#define LBGDOLIKLJH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5F3CE0)

inline static constexpr unsigned int LBGDOLIKLJH_TypeDefinitionIndex = 72339;

	class LBGDOLIKLJH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x60
		::UnityEngine::Transform* GHGAKNDLKGM; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::System::Nullable_1<::System::Boolean> IAPJFCPEOBL; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDOLIKLJH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDOLIKLJH__ONBIND_OFFSET))(this);
		}

		::System::Void FGICCPHJGGB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBGDOLIKLJH_FGICCPHJGGB_OFFSET))(this, a1);
		}

		::System::Void BBJICMCNCLJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LBGDOLIKLJH_BBJICMCNCLJ_OFFSET))(this, a1);
		}

	};
