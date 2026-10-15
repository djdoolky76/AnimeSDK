#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define FIDMLFAFEFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15797750)

inline static constexpr unsigned int FIDMLFAFEFN_TypeDefinitionIndex = 73660;

	class FIDMLFAFEFN : public ::System::Attribute
	{
	public:
		::System::String* KBEPAIAFLHL; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FIDMLFAFEFN_CTOR_OFFSET))(this, a1);
		}

	};
