#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHDCFBBIJIM.h"
namespace System { class String; }

#define NABHGBNKEAP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA52DD0)
#define NABHGBNKEAP_GAGLFGLKEOJ_OFFSET UNITYSDK_OFFSET(0xBA52CD0)

inline static constexpr unsigned int NABHGBNKEAP_TypeDefinitionIndex = 77557;

	class NABHGBNKEAP : public ::EHDCFBBIJIM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABHGBNKEAP_CTOR_OFFSET))(this);
		}

		::System::String* GAGLFGLKEOJ(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NABHGBNKEAP_GAGLFGLKEOJ_OFFSET))(this, a1);
		}

	};
