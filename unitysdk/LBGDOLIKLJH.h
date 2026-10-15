#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class Nullable; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define LBGDOLIKLJH_BBJICMCNCLJ_OFFSET UNITYSDK_OFFSET(0xB5FA0F0)
#define LBGDOLIKLJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB5FA1A0)
#define LBGDOLIKLJH_FGICCPHJGGB_OFFSET UNITYSDK_OFFSET(0xB5FA060)
#define LBGDOLIKLJH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5F9F90)

	class LBGDOLIKLJH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::UnityEngine::Transform* GHGAKNDLKGM; // 0x68
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x70
		::System::Nullable* IAPJFCPEOBL; // 0x78
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
