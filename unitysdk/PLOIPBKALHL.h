#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class DEJBFAOMIBD;
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define PLOIPBKALHL_CTOR_OFFSET UNITYSDK_OFFSET(0xC30D140)
#define PLOIPBKALHL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC30CF80)
#define PLOIPBKALHL__ONBIND_OFFSET UNITYSDK_OFFSET(0xC30CBE0)

	class PLOIPBKALHL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x60
		::Il2CppArray<::DEJBFAOMIBD*>* PBGDDGOBGPD; // 0x68
		::System::Int32 IKIIIHNECLG; // 0x70
		// static const ::System::Object GJALMNOAKIM; // 0x0
		// static const ::System::String* FCFKJGEENKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOIPBKALHL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOIPBKALHL__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + PLOIPBKALHL_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

	};
