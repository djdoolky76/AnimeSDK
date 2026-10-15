#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DELOHEOCFBF.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define KFEDBNDPAIB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB396700)
#define KFEDBNDPAIB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB3967D0)
#define KFEDBNDPAIB_BKDGEKIHPLB_OFFSET UNITYSDK_OFFSET(0xB396600)
#define KFEDBNDPAIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB396870)
#define KFEDBNDPAIB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB3962B0)
#define KFEDBNDPAIB_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0xB396360)
#define KFEDBNDPAIB_MPGLJNHHKDF_OFFSET UNITYSDK_OFFSET(0xB396470)
#define KFEDBNDPAIB_OIBGGPLEPMM_OFFSET UNITYSDK_OFFSET(0xB396530)
#define KFEDBNDPAIB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB396250)

	class KFEDBNDPAIB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::System::Int32 EBAKNDKIBNB; // 0x68
		::System::Int32 PFJFHHIGEGO; // 0x6C
		::System::Int32 LFKAMKNIJKN; // 0x70
		::System::Boolean BHCPLIFADEN; // 0x74
		::System::Boolean AKBPNMEFGAO; // 0x75
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEDBNDPAIB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEDBNDPAIB__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEDBNDPAIB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFEDBNDPAIB_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void MPGLJNHHKDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEDBNDPAIB_MPGLJNHHKDF_OFFSET))(this);
		}

		::System::Void OIBGGPLEPMM(::DELOHEOCFBF a1)
		{
			return ((::System::Void(*)(::PVOID, ::DELOHEOCFBF))((::PBYTE)hIl2Cpp + KFEDBNDPAIB_OIBGGPLEPMM_OFFSET))(this, a1);
		}

		::System::Void BKDGEKIHPLB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFEDBNDPAIB_BKDGEKIHPLB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEDBNDPAIB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEDBNDPAIB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
