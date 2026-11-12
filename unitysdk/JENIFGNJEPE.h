#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JENIFGNJEPE_CTOR_OFFSET UNITYSDK_OFFSET(0xB95C4E0)

inline static constexpr unsigned int JENIFGNJEPE_TypeDefinitionIndex = 60267;

	class JENIFGNJEPE : public ::System::Object
	{
	public:
		// static const ::System::Object ANFEEMABALK; // 0x0
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JENIFGNJEPE_CTOR_OFFSET))(this, a1);
		}

	};
