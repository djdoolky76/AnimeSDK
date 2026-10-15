#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define FIDMLFAFEFN_CTOR_OFFSET UNITYSDK_OFFSET(0x157A3390)

	class FIDMLFAFEFN : public ::System::Attribute
	{
	public:
		::System::String* KBEPAIAFLHL; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FIDMLFAFEFN_CTOR_OFFSET))(this, a1);
		}

	};
