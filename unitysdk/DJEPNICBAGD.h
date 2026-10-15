#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define DJEPNICBAGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD2DDF0)

	class DJEPNICBAGD : public ::System::Attribute
	{
	public:
		::System::String* GNMAAEDGDBA; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJEPNICBAGD_CTOR_OFFSET))(this, a1);
		}

	};
