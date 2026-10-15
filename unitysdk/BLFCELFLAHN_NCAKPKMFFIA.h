#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJDPEGIFLGB;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define BLFCELFLAHN_NCAKPKMFFIA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA68670)
#define BLFCELFLAHN_NCAKPKMFFIA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBA69920)
#define BLFCELFLAHN_NCAKPKMFFIA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA69A80)

inline static constexpr unsigned int BLFCELFLAHN_NCAKPKMFFIA_TypeDefinitionIndex = 52292;

	class BLFCELFLAHN_NCAKPKMFFIA : public ::System::Object
	{
	public:
		::UnityEngine::Transform* LLKDMBLKFPM; // 0x10
		::System::String* JLMMOLCLMHK; // 0x18
		::UnityEngine::Transform* JDJMNGAFHLI; // 0x20
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
