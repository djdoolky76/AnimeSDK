#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define AMJFPOKLPFM_CTOR_OFFSET UNITYSDK_OFFSET(0x15576B90)

inline static constexpr unsigned int AMJFPOKLPFM_TypeDefinitionIndex = 68412;

	class AMJFPOKLPFM : public ::System::Attribute
	{
	public:
		::System::String* PKBLFJJICFB; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AMJFPOKLPFM_CTOR_OFFSET))(this, a1);
		}

	};
