#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define AMMMLMDICKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE11B0)

	class AMMMLMDICKJ : public ::System::Attribute
	{
	public:
		::System::String* NMJPINAAOLF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMMLMDICKJ_CTOR_OFFSET))(this);
		}

	};
