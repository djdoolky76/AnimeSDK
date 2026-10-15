#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define MLGNDEAEAOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB9ADE40)

inline static constexpr unsigned int MLGNDEAEAOM_TypeDefinitionIndex = 52060;

	class MLGNDEAEAOM : public ::System::Attribute
	{
	public:
		::System::String* CMNDHJJOLIN; // 0x10
		::System::String* AJIKHNGJHFJ; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MLGNDEAEAOM_CTOR_OFFSET))(this, a1, a2);
		}

	};
