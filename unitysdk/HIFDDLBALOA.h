#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define HIFDDLBALOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAE6D0)

inline static constexpr unsigned int HIFDDLBALOA_TypeDefinitionIndex = 25004;

	class HIFDDLBALOA : public ::System::Attribute
	{
	public:
		::System::String* HFKHMNJPGMI; // 0x10
		::System::String* FNBEKBHNPLB; // 0x18
		::System::Boolean OCHDFJNLKLH; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HIFDDLBALOA_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
