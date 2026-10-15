#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJDPEGIFLGB;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define BLFCELFLAHN_NCAKPKMFFIA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA6BC60)
#define BLFCELFLAHN_NCAKPKMFFIA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBA6CF10)
#define BLFCELFLAHN_NCAKPKMFFIA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA6D070)

	class BLFCELFLAHN_NCAKPKMFFIA : public ::System::Object
	{
	public:
		::UnityEngine::Transform* JDJMNGAFHLI; // 0x10
		::UnityEngine::Transform* LLKDMBLKFPM; // 0x18
		::System::String* JLMMOLCLMHK; // 0x20
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLFCELFLAHN_NCAKPKMFFIA_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::GJDPEGIFLGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJDPEGIFLGB*))((::PBYTE)hIl2Cpp + BLFCELFLAHN_NCAKPKMFFIA_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLFCELFLAHN_NCAKPKMFFIA_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
