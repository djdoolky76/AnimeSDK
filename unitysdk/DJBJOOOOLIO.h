#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class Object; }

#define DJBJOOOOLIO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF22C1B0)
#define DJBJOOOOLIO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF22C280)
#define DJBJOOOOLIO_CTOR_OFFSET UNITYSDK_OFFSET(0xF22C320)
#define DJBJOOOOLIO_FAHFCCHIPNB_OFFSET UNITYSDK_OFFSET(0xF22C020)
#define DJBJOOOOLIO_HMGBKJAHJJO_OFFSET UNITYSDK_OFFSET(0xF22BFD0)
#define DJBJOOOOLIO_JBIMEIKLHHA_OFFSET UNITYSDK_OFFSET(0xF22C0F0)

	class DJBJOOOOLIO : public ::FMPCODLIOLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJOOOOLIO_CTOR_OFFSET))(this);
		}

		::System::Void HMGBKJAHJJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJOOOOLIO_HMGBKJAHJJO_OFFSET))(this);
		}

		::System::Void FAHFCCHIPNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJOOOOLIO_FAHFCCHIPNB_OFFSET))(this);
		}

		::System::Void JBIMEIKLHHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJBJOOOOLIO_JBIMEIKLHHA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJOOOOLIO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJOOOOLIO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
