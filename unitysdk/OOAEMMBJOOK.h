#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFHEHDNBJLL;
namespace System { class String; }

#define OOAEMMBJOOK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF61A20)
#define OOAEMMBJOOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF61AA0)

inline static constexpr unsigned int OOAEMMBJOOK_TypeDefinitionIndex = 61098;

	class OOAEMMBJOOK : public ::System::Object
	{
	public:
		// static const ::System::String* PPMDHDKGHNF; // 0x0
		// static const ::System::String* IDDCGKHFNKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAEMMBJOOK_CTOR_OFFSET))(this);
		}

		static ::BFHEHDNBJLL* BPLPBPMEODA(::System::String* a1, ::System::String* a2)
		{
			return ((::BFHEHDNBJLL*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OOAEMMBJOOK_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
