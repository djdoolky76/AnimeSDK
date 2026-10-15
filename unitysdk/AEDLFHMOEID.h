#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define AEDLFHMOEID_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB14C920)
#define AEDLFHMOEID_CTOR_OFFSET UNITYSDK_OFFSET(0xB14CA80)
#define AEDLFHMOEID_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xB14C890)
#define AEDLFHMOEID_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xB14C990)
#define AEDLFHMOEID__ONBIND_OFFSET UNITYSDK_OFFSET(0xB14C830)

inline static constexpr unsigned int AEDLFHMOEID_TypeDefinitionIndex = 71979;

	class AEDLFHMOEID : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::GameObject* ADBCGAPLGOL; // 0x60
		::UnityEngine::Animation* PMOJILOJEPE; // 0x68
		// static const ::System::String* AILCOOFIDPG; // 0x0
		// static const ::System::String* IIPEBGKKNLC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDLFHMOEID_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDLFHMOEID__ONBIND_OFFSET))(this);
		}

		::System::Void DKKJNPPHDPM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AEDLFHMOEID_DKKJNPPHDPM_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDLFHMOEID_KKHOMFOPFJA_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AEDLFHMOEID_BIOBBNGDGDF_OFFSET))(this, a1);
		}

	};
