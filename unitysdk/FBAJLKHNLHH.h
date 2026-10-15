#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Animator; }

#define FBAJLKHNLHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1568E5F0)
#define FBAJLKHNLHH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1568E380)
#define FBAJLKHNLHH_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x1568E430)
#define FBAJLKHNLHH_MPGLJNHHKDF_OFFSET UNITYSDK_OFFSET(0x1568E540)
#define FBAJLKHNLHH__ONBIND_OFFSET UNITYSDK_OFFSET(0x1568E320)

	class FBAJLKHNLHH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::System::Boolean AKBPNMEFGAO; // 0x68
		// static const ::System::String* AMKNNFCOBDG; // 0x0
		// static const ::System::String* NMDMPOOFGFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAJLKHNLHH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAJLKHNLHH__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAJLKHNLHH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBAJLKHNLHH_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void MPGLJNHHKDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAJLKHNLHH_MPGLJNHHKDF_OFFSET))(this);
		}

	};
