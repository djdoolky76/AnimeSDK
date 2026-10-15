#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define JNDBFNJLNHG_CTOR_OFFSET UNITYSDK_OFFSET(0xB273560)
#define JNDBFNJLNHG_PGJGDNBDHIL_OFFSET UNITYSDK_OFFSET(0xB2735C0)
#define JNDBFNJLNHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB273660)

inline static constexpr unsigned int JNDBFNJLNHG_TypeDefinitionIndex = 70178;

	class JNDBFNJLNHG : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x10
		::System::Single NEHMFKCDKDI; // 0x18
		::System::Int32 LAPPEBCGDEG; // 0x1C
		::System::Single NHGFCDCCBNL; // 0x20
		::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + JNDBFNJLNHG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGJGDNBDHIL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNDBFNJLNHG_PGJGDNBDHIL_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBFNJLNHG_TOSTRING_OFFSET))(this);
		}

	};
