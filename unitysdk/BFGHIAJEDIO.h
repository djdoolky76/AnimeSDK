#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Transform; }

#define BFGHIAJEDIO_CTOR_OFFSET UNITYSDK_OFFSET(0xB163220)
#define BFGHIAJEDIO_LHPBPGCKLEJ_OFFSET UNITYSDK_OFFSET(0xB163160)
#define BFGHIAJEDIO_PEFFNCHBGLP_OFFSET UNITYSDK_OFFSET(0xB1631C0)
#define BFGHIAJEDIO__ONBIND_OFFSET UNITYSDK_OFFSET(0xB163070)

	class BFGHIAJEDIO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* IMCHJKBFJJC; // 0x60
		::UnityEngine::Transform* NNAKHMJLJPH; // 0x68
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGHIAJEDIO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGHIAJEDIO__ONBIND_OFFSET))(this);
		}

		::System::Void LHPBPGCKLEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGHIAJEDIO_LHPBPGCKLEJ_OFFSET))(this);
		}

		::System::Void PEFFNCHBGLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGHIAJEDIO_PEFFNCHBGLP_OFFSET))(this);
		}

	};
